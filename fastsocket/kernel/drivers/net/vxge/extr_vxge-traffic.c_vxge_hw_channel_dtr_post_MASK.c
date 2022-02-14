
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __vxge_hw_channel {size_t post_index; size_t length; int ** work_arr; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct __vxge_hw_channel *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0->work_arr[VAR_0->post_index] == ((void*)0));

 VAR_0->work_arr[VAR_0->post_index++] = VAR_1;


 if (VAR_0->post_index == VAR_0->length)
  VAR_0->post_index = 0;
}
