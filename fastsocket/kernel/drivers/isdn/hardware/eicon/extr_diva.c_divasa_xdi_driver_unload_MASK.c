
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* cleanup_adapter_proc ) (TYPE_2__*) ;} ;
struct TYPE_8__ {int controller; TYPE_1__ interface; } ;
typedef TYPE_2__ diva_os_xdi_adapter_t ;


 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(void)
{
 diva_os_xdi_adapter_t *VAR_2;

 while ((VAR_2 = FUNC_2())) {
  if (VAR_2->interface.cleanup_adapter_proc) {
   (*(VAR_2->interface.cleanup_adapter_proc)) (VAR_2);
  }
  if (VAR_2->controller) {
   VAR_0[VAR_2->controller - 1] = ((void*)0);
   FUNC_3(VAR_2);
  }
  FUNC_1(0, VAR_2);
 }
 FUNC_0(&VAR_1, "adapter");
}
