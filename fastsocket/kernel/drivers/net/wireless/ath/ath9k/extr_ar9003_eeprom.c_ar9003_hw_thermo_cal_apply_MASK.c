
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int) ;
 int FUNC_2 (struct ath_hw*,int,int*) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;

 if (!FUNC_0(VAR_3))
  return;
 FUNC_2(VAR_3, 1, &VAR_4);
 VAR_5 = VAR_4 & 0xff;
 VAR_6 = (VAR_4 >> 8) & 0xff;
 if (VAR_5 || VAR_6) {
  FUNC_1(VAR_3, VAR_0,
         VAR_1, VAR_5);
  FUNC_1(VAR_3, VAR_0,
         VAR_2,
         VAR_6 + 256);
 }
}
