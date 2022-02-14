
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct iwl_test {int trans; } ;


 int FUNC_0 (int ,char*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct iwl_test*,struct nlattr**) ;
 int FUNC_2 (struct iwl_test*,struct nlattr**) ;
 int FUNC_3 (struct iwl_test*,struct nlattr**) ;
 int FUNC_4 (struct iwl_test*,struct nlattr**) ;
 int FUNC_5 (struct iwl_test*,struct nlattr**) ;
 int FUNC_6 (struct iwl_test*,struct nlattr**) ;
 int FUNC_7 (struct iwl_test*,struct nlattr**) ;
 int FUNC_8 (struct iwl_test*) ;
 int FUNC_9 (struct nlattr*) ;

int FUNC_10(struct iwl_test *VAR_1, struct nlattr **VAR_2)
{
 int VAR_3;

 switch (FUNC_9(VAR_2[VAR_0])) {
 case 128:
  FUNC_0(VAR_1->trans, "test cmd to uCode\n");
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;

 case 137:
 case 136:
 case 135:
  FUNC_0(VAR_1->trans, "test cmd to register\n");
  VAR_3 = FUNC_6(VAR_1, VAR_2);
  break;

 case 138:
  FUNC_0(VAR_1->trans, "test uCode trace cmd to driver\n");
  VAR_3 = FUNC_7(VAR_1, VAR_2);
  break;

 case 134:
  FUNC_8(VAR_1);
  VAR_3 = 0;
  break;

 case 131:
 case 130:
  FUNC_0(VAR_1->trans, "test indirect memory cmd\n");
  VAR_3 = FUNC_4(VAR_1, VAR_2);
  break;

 case 129:
  FUNC_0(VAR_1->trans, "test notifications cmd\n");
  VAR_3 = FUNC_5(VAR_1, VAR_2);
  break;

 case 132:
  FUNC_0(VAR_1->trans, "test get FW ver cmd\n");
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  break;

 case 133:
  FUNC_0(VAR_1->trans, "test Get device ID cmd\n");
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  break;

 default:
  FUNC_0(VAR_1->trans, "Unknown test command\n");
  VAR_3 = 1;
  break;
 }
 return VAR_3;
}
