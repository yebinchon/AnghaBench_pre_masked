
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {int dummy; } ;




 int FUNC_0 (struct msm_adsp_module*,void*,size_t) ;
 int FUNC_1 (struct msm_adsp_module*,void*,size_t) ;

int FUNC_2(struct msm_adsp_module *VAR_0,
    unsigned int VAR_1, void *VAR_2,
    size_t VAR_3)
{
 switch(VAR_1) {
 case 128:
  return FUNC_1(VAR_0, VAR_2, VAR_3);
 case 129:
  return FUNC_0(VAR_0, VAR_2, VAR_3);
 default:
  return -1;
 }
}
