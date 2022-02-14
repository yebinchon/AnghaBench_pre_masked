
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union hv_x64_msr_hypercall_contents {scalar_t__ as_uint64; } ;
struct TYPE_2__ {int * hypercall_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(void)
{
 union hv_x64_msr_hypercall_contents VAR_3;


 FUNC_1(VAR_0, 0);

 if (VAR_2.hypercall_page) {
  VAR_3.as_uint64 = 0;
  FUNC_1(VAR_1, VAR_3.as_uint64);
  FUNC_0(VAR_2.hypercall_page);
  VAR_2.hypercall_page = ((void*)0);
 }
}
