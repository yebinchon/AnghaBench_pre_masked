
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int x86_debug_state32_t ;
typedef int thread_t ;
typedef TYPE_1__* pcb_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int * ids; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static kern_return_t
FUNC_8(thread_t VAR_5, x86_debug_state32_t *VAR_6)
{
 x86_debug_state32_t *VAR_7;
 pcb_t VAR_8;

 VAR_8 = FUNC_0(VAR_5);

 if (FUNC_3(VAR_6) != VAR_3) {
  return VAR_1;
 }

 if (VAR_8->ids == ((void*)0)) {
  VAR_7 = FUNC_6(VAR_4);
  FUNC_1(VAR_7, sizeof *VAR_7);

  FUNC_4(&VAR_8->lock);

  if (VAR_8->ids == ((void*)0)) {
   VAR_8->ids = VAR_7;
   FUNC_5(&VAR_8->lock);
  } else {
   FUNC_5(&VAR_8->lock);
   FUNC_7(VAR_4, VAR_7);
  }
 }


 FUNC_2(VAR_6, VAR_8->ids, VAR_0);

 return (VAR_2);
}
