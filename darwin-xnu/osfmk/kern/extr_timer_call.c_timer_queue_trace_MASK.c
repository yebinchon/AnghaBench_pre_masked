
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* timer_call_t ;
typedef int spl_t ;
struct TYPE_11__ {int count; int head; } ;
typedef TYPE_2__ mpqueue_head_t ;
struct TYPE_12__ {int func; int entry_time; int deadline; } ;
struct TYPE_10__ {int soft_deadline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;

void
FUNC_14(
 mpqueue_head_t *VAR_6)
{
 timer_call_t VAR_7;
 spl_t VAR_8;

 if (!VAR_5)
  return;

 VAR_8 = FUNC_10();
 FUNC_12(VAR_6);

 FUNC_2(VAR_4,
         VAR_3 | VAR_2,
  VAR_6->count, FUNC_4(), 0, 0, 0);

 if (!FUNC_6(&VAR_6->head)) {
  VAR_7 = FUNC_1(FUNC_8(&VAR_6->head));
  do {
   FUNC_2(VAR_4,
           VAR_3 | VAR_1,
    VAR_7->soft_deadline,
    FUNC_0(VAR_7)->deadline,
    FUNC_0(VAR_7)->entry_time,
    FUNC_3(FUNC_0(VAR_7)->func),
    0);
   VAR_7 = FUNC_1(FUNC_9(FUNC_5(VAR_7)));
  } while (!FUNC_7(&VAR_6->head, FUNC_5(VAR_7)));
 }

 FUNC_2(VAR_4,
         VAR_3 | VAR_0,
  VAR_6->count, FUNC_4(), 0, 0, 0);

 FUNC_13(VAR_6);
 FUNC_11(VAR_8);
}
