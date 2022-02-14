
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int line_pos; int rec_pos; int * fp; } ;
typedef TYPE_1__ OVERLAY_HELP_STATE_T ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char const*,char*) ;

OVERLAY_HELP_STATE_T *FUNC_3(const char *VAR_0)
{
    OVERLAY_HELP_STATE_T *VAR_1 = ((void*)0);
    FILE *VAR_2 = FUNC_2(VAR_0, "r");
    if (VAR_2)
    {
        VAR_1 = FUNC_0(1, sizeof(OVERLAY_HELP_STATE_T));
        if (!VAR_1)
                FUNC_1("Out of memory");
        VAR_1->fp = VAR_2;
        VAR_1->line_pos = -1;
        VAR_1->rec_pos = -1;
    }

    return VAR_1;
}
