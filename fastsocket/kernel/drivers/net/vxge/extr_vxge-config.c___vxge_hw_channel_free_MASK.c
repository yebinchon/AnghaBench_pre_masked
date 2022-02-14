
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __vxge_hw_channel {struct __vxge_hw_channel* orig_arr; struct __vxge_hw_channel* reserve_arr; struct __vxge_hw_channel* free_arr; struct __vxge_hw_channel* work_arr; } ;


 int FUNC_0 (struct __vxge_hw_channel*) ;

void FUNC_1(struct __vxge_hw_channel *VAR_0)
{
 FUNC_0(VAR_0->work_arr);
 FUNC_0(VAR_0->free_arr);
 FUNC_0(VAR_0->reserve_arr);
 FUNC_0(VAR_0->orig_arr);
 FUNC_0(VAR_0);
}
