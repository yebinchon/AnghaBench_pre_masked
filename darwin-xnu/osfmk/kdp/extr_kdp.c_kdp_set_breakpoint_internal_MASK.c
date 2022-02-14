
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kdp_error_t ;
typedef int caddr_t ;
typedef int breakinstr ;
struct TYPE_2__ {scalar_t__ address; int bytesused; int oldbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (char*) ;

kdp_error_t
FUNC_6(
    mach_vm_address_t VAR_7
)
{

 uint8_t VAR_8[VAR_3], VAR_9[VAR_3];
 uint32_t VAR_10 = sizeof(VAR_8);
 mach_vm_size_t VAR_11;
 int VAR_12;

 FUNC_0(VAR_8, &VAR_10);

 if(VAR_6 == 0)
    {
  for(VAR_12=0;(VAR_12 < VAR_4); VAR_5[VAR_12].address=0, VAR_12++);
  VAR_6++;
    }

 VAR_11 = FUNC_1(VAR_7, (caddr_t)&VAR_9, (mach_vm_size_t)VAR_10);

 if (0 == FUNC_3(VAR_9, VAR_8, VAR_10)) {
  FUNC_5("A trap was already set at that address, not setting new breakpoint\n");

  return VAR_0;
 }

 for(VAR_12=0;(VAR_12 < VAR_4) && (VAR_5[VAR_12].address != 0); VAR_12++);

 if (VAR_12 == VAR_4) {
  return VAR_1;
 }

 VAR_5[VAR_12].address = VAR_7;
 FUNC_4(VAR_5[VAR_12].oldbytes, VAR_9, VAR_10);
 VAR_5[VAR_12].bytesused = VAR_10;

 VAR_11 = FUNC_2((caddr_t)&VAR_8, VAR_7, VAR_10);

 return VAR_2;
}
