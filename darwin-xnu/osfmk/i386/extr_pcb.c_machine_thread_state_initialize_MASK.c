
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef int kern_return_t ;
struct TYPE_6__ {int * ids; scalar_t__ ifps; } ;
struct TYPE_7__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;

kern_return_t
FUNC_4(
 thread_t VAR_3)
{





 if (VAR_3->machine.ifps) {
  (void) FUNC_2(VAR_3, ((void*)0), VAR_2);

  if (VAR_3 == FUNC_1())
   FUNC_0();
 }

 if (VAR_3->machine.ids) {
  FUNC_3(VAR_1, VAR_3->machine.ids);
  VAR_3->machine.ids = ((void*)0);
 }

 return VAR_0;
}
