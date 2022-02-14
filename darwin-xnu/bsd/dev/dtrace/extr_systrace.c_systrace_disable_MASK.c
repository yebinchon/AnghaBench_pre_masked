
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int dtrace_id_t ;
struct TYPE_4__ {scalar_t__ sy_callc; } ;
struct TYPE_3__ {scalar_t__ stsy_entry; scalar_t__ stsy_return; int stsy_underlying; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 int FUNC_1 (uintptr_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_5(void *VAR_5, dtrace_id_t VAR_6, void *VAR_7)
{
#pragma unused(arg,id)

 int VAR_8 = FUNC_1((uintptr_t)VAR_7);
 int VAR_9 = (VAR_4[VAR_8].stsy_entry == VAR_0 ||
     VAR_4[VAR_8].stsy_return == VAR_0);

 if (VAR_9) {
  FUNC_2(&VAR_1);
  if (VAR_3[VAR_8].sy_callc == VAR_2)
   FUNC_4((vm_offset_t)&VAR_4[VAR_8].stsy_underlying, (vm_offset_t)&VAR_3[VAR_8].sy_callc, sizeof(VAR_4[VAR_8].stsy_underlying));
  FUNC_3(&VAR_1);

 }

 if (FUNC_0((uintptr_t)VAR_7)) {
  VAR_4[VAR_8].stsy_entry = VAR_0;
 } else {
  VAR_4[VAR_8].stsy_return = VAR_0;
 }
}
