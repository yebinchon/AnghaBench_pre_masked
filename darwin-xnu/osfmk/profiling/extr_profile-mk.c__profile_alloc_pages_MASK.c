
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef void* caddr_t ;
struct TYPE_2__ {scalar_t__ debug; scalar_t__ active; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,size_t) ;
 int FUNC_2 (void*,char,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int) ;

void *
FUNC_5 (size_t VAR_1)
{
 vm_offset_t VAR_2;







 if (FUNC_0(0)->active) {
  FUNC_3("Call to _profile_alloc_pages while profiling is running.");
 }

 if (FUNC_1(VAR_0, &VAR_2, VAR_1)) {
  FUNC_3("Could not allocate memory for profiling");
 }

 FUNC_2((void *)VAR_2, '\0', VAR_1);
 if (FUNC_0(0)->debug) {
  FUNC_4("Allocated %d bytes for profiling, address 0x%x\n", (int)VAR_1, (int)VAR_2);
 }

 return((caddr_t)VAR_2);
}
