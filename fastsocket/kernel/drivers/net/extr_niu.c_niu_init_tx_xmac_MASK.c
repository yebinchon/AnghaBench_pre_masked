
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int flags; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_22, u64 VAR_23, u64 VAR_24)
{
 u64 VAR_25;

 VAR_25 = FUNC_0(VAR_16);
 VAR_25 &= ~(VAR_19 |
   VAR_17);
 VAR_25 |= (VAR_23 << VAR_18);
 VAR_25 |= (VAR_23 << VAR_20);
 FUNC_1(VAR_16, VAR_25);

 FUNC_1(VAR_15, VAR_24);

 FUNC_1(VAR_21, ~(u64)0);

 VAR_25 = FUNC_0(VAR_10);
 if (VAR_22->flags & VAR_2) {
  VAR_25 &= ~VAR_13;
  VAR_25 |= (VAR_0 << VAR_14);
 } else {
  VAR_25 &= ~VAR_11;
  VAR_25 |= (VAR_1 << VAR_12);
 }
 FUNC_1(VAR_10, VAR_25);

 VAR_25 = FUNC_0(VAR_5);
 VAR_25 &= ~(VAR_6 |
   VAR_7 |
   VAR_9 |
   VAR_8);
 FUNC_1(VAR_5, VAR_25);

 FUNC_1(VAR_4, 0);
 FUNC_1(VAR_3, 0);
}
