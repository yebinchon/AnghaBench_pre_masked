
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;
typedef int caddr_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {scalar_t__ address; scalar_t__ bytesused; int oldbytes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;

boolean_t
FUNC_2(void)
{
 int VAR_5;
 boolean_t VAR_6 = VAR_0;

 if (VAR_4)
 {
  for(VAR_5=0;VAR_5 < VAR_1; VAR_5++)
  {
   if (VAR_3[VAR_5].address)
   {
    FUNC_0((caddr_t)&(VAR_3[VAR_5].oldbytes), (mach_vm_address_t)VAR_3[VAR_5].address, (mach_vm_size_t)VAR_3[VAR_5].bytesused);
    VAR_6 = VAR_2;
    VAR_3[VAR_5].address = 0;
   }
  }

  if (VAR_6)
   FUNC_1("kdp_remove_all_breakpoints: found extant breakpoints, removing them.\n");
 }
 return VAR_6;
}
