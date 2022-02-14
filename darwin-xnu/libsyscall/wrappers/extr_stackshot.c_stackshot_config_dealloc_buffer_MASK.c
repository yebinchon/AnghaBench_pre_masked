
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sc_size; scalar_t__ sc_buffer; } ;
typedef TYPE_1__ stackshot_config_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_offset_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;

int
FUNC_2(stackshot_config_t *VAR_1)
{
 stackshot_config_t *VAR_2;

 if (VAR_1 == ((void*)0)) {
  return VAR_0;
 }
 VAR_2 = (stackshot_config_t *) VAR_1;

 if (VAR_2->sc_size && VAR_2->sc_buffer) {
  FUNC_1(FUNC_0(), (mach_vm_offset_t)VAR_2->sc_buffer, (mach_vm_size_t)VAR_2->sc_size);
 }

 VAR_2->sc_buffer = 0;
 VAR_2->sc_size = 0;

 return 0;
}
