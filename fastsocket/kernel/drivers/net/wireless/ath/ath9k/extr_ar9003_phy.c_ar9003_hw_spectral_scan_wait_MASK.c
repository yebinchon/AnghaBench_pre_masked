
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ath_common*,char*) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_3);


 if (!FUNC_1(VAR_3, VAR_1,
      VAR_2,
      0, VAR_0)) {
  FUNC_2(VAR_4, "spectral scan wait failed\n");
  return;
 }
}
