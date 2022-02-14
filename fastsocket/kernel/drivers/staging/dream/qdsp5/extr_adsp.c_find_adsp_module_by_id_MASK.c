
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct msm_adsp_module {int dummy; } ;
struct adsp_info {size_t max_module_id; struct msm_adsp_module** id_to_module; } ;


 size_t FUNC_0 (size_t) ;

__attribute__((used)) static struct msm_adsp_module *FUNC_1(
 struct adsp_info *VAR_0, uint32_t VAR_1)
{
 if (VAR_1 > VAR_0->max_module_id) {
  return ((void*)0);
 } else {





  return VAR_0->id_to_module[VAR_1];
 }
}
