
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {int (* patch_event ) (struct msm_adsp_module*,struct adsp_event*) ;} ;
struct adsp_event {int dummy; } ;


 int FUNC_0 (struct msm_adsp_module*,struct adsp_event*) ;

__attribute__((used)) static int FUNC_1(struct msm_adsp_module *VAR_0,
    struct adsp_event *VAR_1)
{

 if (VAR_0->patch_event)
  return VAR_0->patch_event(VAR_0, VAR_1);
 return 0;
}
