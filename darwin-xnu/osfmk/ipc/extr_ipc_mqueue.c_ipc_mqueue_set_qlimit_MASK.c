
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct turnstile {int ts_waitq; } ;
typedef scalar_t__ mach_port_msgcount_t ;
typedef TYPE_1__* ipc_mqueue_t ;
struct TYPE_6__ {scalar_t__ imq_qlimit; int imq_msgcount; int imq_fullwaiters; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct turnstile* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct turnstile* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;

void
FUNC_6(
  ipc_mqueue_t VAR_7,
  mach_port_msgcount_t VAR_8)
{

  FUNC_0(VAR_8 <= VAR_3);


  FUNC_1(VAR_7);
  if (VAR_8 > VAR_7->imq_qlimit) {
   mach_port_msgcount_t VAR_9, VAR_10;
   struct turnstile *VAR_11 = FUNC_4(FUNC_3(VAR_7));


   VAR_10 = VAR_8 - VAR_7->imq_qlimit;

   for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {







   if (VAR_11 == VAR_5 ||
       FUNC_5(&VAR_11->ts_waitq,
            VAR_1,
            VAR_4,
            VAR_6) == VAR_2) {
    VAR_7->imq_fullwaiters = VAR_0;
    break;
   }
   VAR_7->imq_msgcount++;
   }
 }
 VAR_7->imq_qlimit = VAR_8;
 FUNC_2(VAR_7);
}
