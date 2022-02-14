
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __vxge_hw_channel {size_t compl_index; size_t length; void** work_arr; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;

void
FUNC_2(struct __vxge_hw_channel *VAR_0, void **VAR_1)
{
 FUNC_1(VAR_0->compl_index < VAR_0->length);

 *VAR_1 = VAR_0->work_arr[VAR_0->compl_index];
 FUNC_0(*VAR_1);
}
