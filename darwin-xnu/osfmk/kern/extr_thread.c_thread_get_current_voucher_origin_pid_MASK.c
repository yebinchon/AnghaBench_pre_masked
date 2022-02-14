
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef int mach_voucher_attr_content_t ;
typedef int kern_return_t ;
typedef int int32_t ;
struct TYPE_3__ {int ith_voucher; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int *,int ,int ,int*) ;

kern_return_t
FUNC_2(
 int32_t *VAR_2)
{
 uint32_t VAR_3;
 kern_return_t VAR_4;
 thread_t VAR_5 = FUNC_0();

 VAR_3 = sizeof(*VAR_2);
 VAR_4 = FUNC_1(VAR_5->ith_voucher,
  VAR_1,
  VAR_0,
  ((void*)0),
  0,
  (mach_voucher_attr_content_t)VAR_2,
  &VAR_3);

 return VAR_4;
}
