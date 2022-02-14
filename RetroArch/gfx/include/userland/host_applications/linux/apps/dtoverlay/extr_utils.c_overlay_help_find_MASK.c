
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int line_pos; int rec_pos; int fp; scalar_t__ blank_count; } ;
typedef TYPE_1__ OVERLAY_HELP_STATE_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

int FUNC_5(OVERLAY_HELP_STATE_T *VAR_1, const char *VAR_2)
{
    VAR_1->line_pos = -1;
    VAR_1->rec_pos = -1;
    VAR_1->blank_count = 0;

    FUNC_0(VAR_1->fp, 0, VAR_0);

    while (FUNC_3(VAR_1, "Name"))
    {
        const char *VAR_3 = FUNC_2(VAR_1);
        if (VAR_3 && (FUNC_4(VAR_3, VAR_2) == 0))
        {
            VAR_1->rec_pos = (long)FUNC_1(VAR_1->fp);
            return 1;
        }
    }

    return 0;
}
