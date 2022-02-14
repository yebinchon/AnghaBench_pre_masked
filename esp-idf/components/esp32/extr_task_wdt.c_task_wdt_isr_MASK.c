
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int task_handle; int has_reset; struct TYPE_3__* next; } ;
typedef TYPE_1__ twdt_task_t ;
struct TYPE_4__ {scalar_t__ panic; TYPE_1__* list; } ;


 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(void *VAR_10)
{
    FUNC_7(&VAR_9);
    twdt_task_t *VAR_11;
    const char *VAR_12;

    FUNC_11(&VAR_2, 0);
    FUNC_10(&VAR_2);
    FUNC_11(&VAR_2, 1);

    FUNC_9(VAR_3, VAR_4);






    FUNC_0((VAR_8->list != ((void*)0)), VAR_5);


    FUNC_2(VAR_1, "Task watchdog got triggered. The following tasks did not reset the watchdog in time:");
    for (VAR_11=VAR_8->list; VAR_11!=((void*)0); VAR_11=VAR_11->next) {
        if (!VAR_11->has_reset) {
            VAR_12=FUNC_12(VAR_11->task_handle)==0?FUNC_1("CPU 0"):FUNC_1("CPU 1");
            if (FUNC_12(VAR_11->task_handle)==VAR_7) VAR_12=FUNC_1("CPU 0/1");
            FUNC_2(VAR_1, " - %s (%s)", FUNC_6(VAR_11->task_handle), VAR_12);
        }
    }
    FUNC_2(VAR_1, "%s", FUNC_1("Tasks currently running:"));
    for (int VAR_13=0; VAR_13<VAR_6; VAR_13++) {
        FUNC_2(VAR_1, "CPU %d: %s", VAR_13, FUNC_6(FUNC_13(VAR_13)));
    }

    FUNC_5();
    if (VAR_8->panic){
        FUNC_2(VAR_1, "Aborting.");
        FUNC_8(&VAR_9);
        FUNC_4(VAR_0);
        FUNC_3();
    }

    FUNC_8(&VAR_9);
}
