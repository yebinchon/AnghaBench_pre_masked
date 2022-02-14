
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_gdbstub_frame_t ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ paniced_task_index; int signal; scalar_t__ current_task_index; int regfile; int paniced_frame; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,size_t) ;
 int FUNC_3 (unsigned char**,size_t*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int *,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_10 () ;

void FUNC_11(esp_gdbstub_frame_t *VAR_6)
{

    FUNC_0(VAR_6, &VAR_5.regfile);
    FUNC_6();
    VAR_5.signal = FUNC_1(VAR_6);
    FUNC_10();
    while (1) {
        unsigned char *VAR_7;
        size_t VAR_8;
        int VAR_9 = FUNC_3(&VAR_7, &VAR_8);
        if (VAR_9 > 0) {

            continue;
        }
        if (VAR_9 == VAR_3) {
            FUNC_5("E01");
            continue;
        }
        VAR_9 = FUNC_2(VAR_7, VAR_8);
        if (VAR_9 == VAR_3) {
            FUNC_5(((void*)0));
        }
    }
}
