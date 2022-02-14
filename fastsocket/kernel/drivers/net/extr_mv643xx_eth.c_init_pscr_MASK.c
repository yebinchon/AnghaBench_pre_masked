
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv643xx_eth_private {int * phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct mv643xx_eth_private*,int ) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mv643xx_eth_private *VAR_13, int VAR_14, int VAR_15)
{
 u32 VAR_16;

 VAR_16 = FUNC_0(VAR_13, VAR_5);
 if (VAR_16 & VAR_7) {
  VAR_16 &= ~VAR_7;
  FUNC_1(VAR_13, VAR_5, VAR_16);
 }

 VAR_16 = VAR_4 | VAR_6;
 if (VAR_13->phy == ((void*)0)) {
  VAR_16 |= VAR_2;
  if (VAR_14 == VAR_12)
   VAR_16 |= VAR_9;
  else if (VAR_14 == VAR_11)
   VAR_16 |= VAR_10;

  VAR_16 |= VAR_1;

  VAR_16 |= VAR_0;
  if (VAR_15 == VAR_3)
   VAR_16 |= VAR_8;
 }

 FUNC_1(VAR_13, VAR_5, VAR_16);
}
