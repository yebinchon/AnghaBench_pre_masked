
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct __vxge_hw_channel {size_t length; size_t free_ptr; size_t reserve_ptr; scalar_t__ compl_index; scalar_t__ post_index; scalar_t__ reserve_top; int ** work_arr; int ** free_arr; int * orig_arr; int * reserve_arr; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;

enum vxge_hw_status
FUNC_0(struct __vxge_hw_channel *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->length; VAR_2++) {
  if (VAR_1->reserve_arr != ((void*)0))
   VAR_1->reserve_arr[VAR_2] = VAR_1->orig_arr[VAR_2];
  if (VAR_1->free_arr != ((void*)0))
   VAR_1->free_arr[VAR_2] = ((void*)0);
  if (VAR_1->work_arr != ((void*)0))
   VAR_1->work_arr[VAR_2] = ((void*)0);
 }
 VAR_1->free_ptr = VAR_1->length;
 VAR_1->reserve_ptr = VAR_1->length;
 VAR_1->reserve_top = 0;
 VAR_1->post_index = 0;
 VAR_1->compl_index = 0;

 return VAR_0;
}
