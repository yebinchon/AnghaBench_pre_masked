
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int run_to_completion; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smi_info*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, int VAR_3)
{
 struct smi_info *VAR_4 = VAR_2;
 enum si_sm_result VAR_5;

 VAR_4->run_to_completion = VAR_3;
 if (VAR_3) {
  VAR_5 = FUNC_0(VAR_4, 0);
  while (VAR_5 != VAR_1) {
   FUNC_1(VAR_0);
   VAR_5 = FUNC_0(VAR_4,
         VAR_0);
  }
 }
}
