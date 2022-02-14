
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int x86_debug_state64_t ;
typedef TYPE_1__* thread_t ;
typedef TYPE_2__* pcb_t ;
typedef int kern_return_t ;
struct TYPE_9__ {int (* volatile_state ) (scalar_t__,int ) ;} ;
struct TYPE_8__ {int * ids; int lock; } ;
struct TYPE_7__ {scalar_t__ hv_thread_target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static kern_return_t
FUNC_9(thread_t VAR_7, x86_debug_state64_t *VAR_8)
{
 x86_debug_state64_t *VAR_9;
 pcb_t VAR_10;

 VAR_10 = FUNC_0(VAR_7);

 if (FUNC_3(VAR_8) != VAR_4) {
  return VAR_2;
 }

 if (VAR_10->ids == ((void*)0)) {
  VAR_9 = FUNC_7(VAR_6);
  FUNC_1(VAR_9, sizeof *VAR_9);
  FUNC_4(&VAR_10->lock);

  if (VAR_10->ids == ((void*)0)) {
   VAR_10->ids = VAR_9;
   FUNC_5(&VAR_10->lock);
  } else {
   FUNC_5(&VAR_10->lock);
   FUNC_8(VAR_6, VAR_9);
  }
 }

 FUNC_2(VAR_8, VAR_10->ids, VAR_0);

 return (VAR_3);
}
