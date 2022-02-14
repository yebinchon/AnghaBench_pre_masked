
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int boolean_t ;
struct TYPE_4__ {int vmp_free_when_done; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(vm_page_t VAR_1, boolean_t VAR_2)
{
 if (!VAR_2) {
  FUNC_0();
 }

 VAR_1->vmp_free_when_done = VAR_0;
 FUNC_2(VAR_1);

 if (!VAR_2) {
  FUNC_1();
 }
}
