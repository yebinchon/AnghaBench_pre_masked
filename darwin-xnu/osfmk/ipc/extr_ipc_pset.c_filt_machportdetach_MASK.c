
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct turnstile {int dummy; } ;
struct TYPE_9__ {TYPE_2__* p_mqueue; } ;
struct knote {int kn_status; int kn_flags; TYPE_1__ kn_ptr; } ;
typedef int ipc_port_t ;
typedef int ipc_object_t ;
typedef TYPE_2__* ipc_mqueue_t ;
struct TYPE_10__ {int imq_wait_queue; int imq_klist; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,struct knote*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct turnstile* VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct knote*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct knote*,int *) ;
 int FUNC_11 (TYPE_2__*) ;
 struct turnstile* FUNC_12 (int ) ;
 int FUNC_13 (struct turnstile*) ;
 int FUNC_14 (struct turnstile*) ;
 int FUNC_15 (struct turnstile*,int ,int) ;
 int FUNC_16 (struct turnstile*,int ) ;

__attribute__((used)) static void
FUNC_17(
 struct knote *VAR_9)
{
 ipc_mqueue_t VAR_10 = VAR_9->kn_ptr.p_mqueue;
 ipc_object_t VAR_11 = FUNC_11(VAR_10);
 struct turnstile *VAR_12 = VAR_8;

 FUNC_3(VAR_9);

 FUNC_4(VAR_10);
 if ((VAR_9->kn_status & VAR_4) || (VAR_9->kn_flags & VAR_0)) {



 } else {
  FUNC_2(FUNC_0(VAR_10));
  FUNC_1(&VAR_10->imq_klist, VAR_9);
 }

 if (FUNC_6(VAR_11) == VAR_2) {
  ipc_port_t VAR_13 = FUNC_8(VAR_10);

  VAR_12 = FUNC_12(VAR_13);
  if (VAR_12) {
   FUNC_14(VAR_12);
   FUNC_15(VAR_12,
    FUNC_9(VAR_13),
    VAR_6 | VAR_5);
  }
 }


 VAR_9->kn_ptr.p_mqueue = VAR_1;
 FUNC_5(VAR_10);

 if (VAR_12) {
  FUNC_16(VAR_12,
    VAR_7);
  FUNC_13(VAR_12);
 }

 if (FUNC_6(VAR_11) == VAR_3) {




  (void)FUNC_10(VAR_9, &VAR_10->imq_wait_queue);
 }
 FUNC_7(VAR_11);
}
