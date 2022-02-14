
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_ring {struct __vxge_hw_channel channel; } ;


 int FUNC_0 (struct __vxge_hw_ring*,void*) ;
 int FUNC_1 () ;

void FUNC_2(struct __vxge_hw_ring *VAR_0, void *VAR_1)
{
 struct __vxge_hw_channel *VAR_2;

 VAR_2 = &VAR_0->channel;

 FUNC_1();
 FUNC_0(VAR_0, VAR_1);
}
