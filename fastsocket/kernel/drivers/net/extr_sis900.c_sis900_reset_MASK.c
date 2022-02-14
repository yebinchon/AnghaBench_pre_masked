
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sis900_private {scalar_t__ chipset_rev; } ;
struct net_device {long base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 struct sis900_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_15)
{
 struct sis900_private *VAR_16 = FUNC_1(VAR_15);
 long VAR_17 = VAR_15->base_addr;
 int VAR_18 = 0;
 u32 VAR_19 = VAR_7 | VAR_3;

 FUNC_2(0, VAR_17 + VAR_11);
 FUNC_2(0, VAR_17 + VAR_12);
 FUNC_2(0, VAR_17 + VAR_14);

 FUNC_2(VAR_4 | VAR_8 | VAR_1 | FUNC_0(VAR_17 + VAR_10), VAR_17 + VAR_10);


 while (VAR_19 && (VAR_18++ < 1000)) {
  VAR_19 ^= (FUNC_0(VAR_13 + VAR_17) & VAR_19);
 }

 if( (VAR_16->chipset_rev >= VAR_5) ||
   (VAR_16->chipset_rev == VAR_6) )
  FUNC_2(VAR_0 | VAR_2, VAR_17 + VAR_9);
 else
  FUNC_2(VAR_0, VAR_17 + VAR_9);
}
