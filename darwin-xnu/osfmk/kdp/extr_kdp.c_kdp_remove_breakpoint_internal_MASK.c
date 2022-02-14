
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kdp_error_t ;
typedef int caddr_t ;
struct TYPE_2__ {int bytesused; int oldbytes; scalar_t__ address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

kdp_error_t
FUNC_1(
    mach_vm_address_t VAR_4
)
{
 mach_vm_size_t VAR_5;
 int VAR_6;

 for(VAR_6=0;(VAR_6 < VAR_2) && (VAR_3[VAR_6].address != VAR_4); VAR_6++);

 if (VAR_6 == VAR_2)
 {
  return VAR_0;
 }

 VAR_3[VAR_6].address = 0;
 VAR_5 = FUNC_0((caddr_t)&VAR_3[VAR_6].oldbytes, VAR_4, VAR_3[VAR_6].bytesused);

 return VAR_1;
}
