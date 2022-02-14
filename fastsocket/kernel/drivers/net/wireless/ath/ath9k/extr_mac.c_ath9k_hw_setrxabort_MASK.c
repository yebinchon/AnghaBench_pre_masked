
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*,int ,int) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;

bool FUNC_6(struct ath_hw *VAR_6, bool VAR_7)
{
 u32 VAR_8;

 if (VAR_7) {
  FUNC_2(VAR_6, VAR_3,
       (VAR_2 | VAR_1));

  if (!FUNC_4(VAR_6, VAR_4, VAR_5,
       0, VAR_0)) {
   FUNC_0(VAR_6, VAR_3,
        (VAR_2 |
         VAR_1));

   VAR_8 = FUNC_1(VAR_6, VAR_4);
   FUNC_5(FUNC_3(VAR_6),
    "RX failed to go idle in 10 ms RXSM=0x%x\n",
    VAR_8);

   return 0;
  }
 } else {
  FUNC_0(VAR_6, VAR_3,
       (VAR_2 | VAR_1));
 }

 return 1;
}
