
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_object_t ;
typedef int vm_object_offset_t ;
struct vm_shared_region_slide_info {int dummy; } ;
typedef TYPE_1__* shared_region_pager_t ;
typedef int memory_object_t ;
struct TYPE_4__ {int is_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ,int ,struct vm_shared_region_slide_info*) ;
 int VAR_4 ;

memory_object_t
FUNC_4(
 vm_object_t VAR_5,
 vm_object_offset_t VAR_6,
 struct vm_shared_region_slide_info *VAR_7)
{
 shared_region_pager_t VAR_8;


 VAR_8 = FUNC_3(
  VAR_5,
  VAR_6,
  VAR_7);
 if (VAR_8 == VAR_2) {

  return VAR_1;
 }

 FUNC_0(&VAR_4);
 while (!VAR_8->is_ready) {
  FUNC_1(&VAR_4,
   VAR_0,
   &VAR_8->is_ready,
   VAR_3);
 }
 FUNC_2(&VAR_4);

 return (memory_object_t) VAR_8;
}
