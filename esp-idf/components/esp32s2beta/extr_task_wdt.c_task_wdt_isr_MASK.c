
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int task_handle; int has_reset; struct TYPE_6__* next; } ;
typedef TYPE_2__ twdt_task_t ;
struct TYPE_5__ {int wdt; } ;
struct TYPE_8__ {int wdt_feed; TYPE_1__ int_clr; scalar_t__ wdt_wprotect; } ;
struct TYPE_7__ {scalar_t__ panic; TYPE_2__* list; } ;


 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(void *VAR_8)
{
    FUNC_6(&VAR_7);
    twdt_task_t *VAR_9;
    const char *VAR_10;

    VAR_1=VAR_2;
    VAR_1=1;
    VAR_1=0;

    VAR_1=1;






    FUNC_0((VAR_6->list != ((void*)0)), VAR_3);


    FUNC_2(VAR_0, "Task watchdog got triggered. The following tasks did not reset the watchdog in time:");
    for (VAR_9=VAR_6->list; VAR_9!=((void*)0); VAR_9=VAR_9->next) {
        if (!VAR_9->has_reset) {
            VAR_10=FUNC_8(VAR_9->task_handle)==0?FUNC_1("CPU 0"):FUNC_1("CPU 1");
            if (FUNC_8(VAR_9->task_handle)==VAR_5) VAR_10=FUNC_1("CPU 0/1");
            FUNC_2(VAR_0, " - %s (%s)", FUNC_5(VAR_9->task_handle), VAR_10);
        }
    }
    FUNC_2(VAR_0, "%s", FUNC_1("Tasks currently running:"));
    for (int VAR_11=0; VAR_11<VAR_4; VAR_11++) {
        FUNC_2(VAR_0, "CPU %d: %s", VAR_11, FUNC_5(FUNC_9(VAR_11)));
    }

    FUNC_4();
    if (VAR_6->panic){
        FUNC_2(VAR_0, "Aborting.");
        FUNC_7(&VAR_7);


        FUNC_3();
    }

    FUNC_7(&VAR_7);
}
