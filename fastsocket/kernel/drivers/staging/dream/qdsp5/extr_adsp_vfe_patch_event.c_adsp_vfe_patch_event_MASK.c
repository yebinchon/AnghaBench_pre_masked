
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {int dummy; } ;
struct adsp_event {int msg_id; } ;






 int FUNC_0 (struct msm_adsp_module*,struct adsp_event*) ;
 int FUNC_1 (struct msm_adsp_module*,struct adsp_event*) ;

int FUNC_2(struct msm_adsp_module *VAR_0,
   struct adsp_event *VAR_1)
{
 switch(VAR_1->msg_id) {
 case 131:
 case 130:
  return FUNC_1(VAR_0, VAR_1);
 case 129:
 case 128:
  return FUNC_0(VAR_0, VAR_1);
 default:
  break;
 }

 return 0;
}
