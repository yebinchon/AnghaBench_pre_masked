
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ,int ,int ,int ) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;

__attribute__((used)) static bool FUNC_5(struct ath_hw *VAR_6)
{
 struct ath_common *VAR_7 = FUNC_2(VAR_6);
 u8 VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_2,
     VAR_1);
 if (VAR_8)
  FUNC_1(VAR_6, VAR_2,
         VAR_1, 0);

 FUNC_1(VAR_6, VAR_3,
        VAR_4, 1);

 if (!FUNC_3(VAR_6, VAR_3,
   VAR_4, 0,
   VAR_0)) {
  FUNC_4(VAR_7, VAR_5, "Tx IQ Cal is not completed\n");
  return 0;
 }
 return 1;
}
