
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int end_of_field; int line_len; int line_pos; char* line_buf; } ;
typedef TYPE_1__ OVERLAY_HELP_STATE_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

const char *FUNC_1(OVERLAY_HELP_STATE_T *VAR_1)
{
    int VAR_2, VAR_3;

    if (VAR_1->end_of_field)
        return ((void*)0);

    VAR_2 = VAR_1->line_len;

    if ((VAR_1->line_pos < 0) ||
        (VAR_1->line_pos >= VAR_2))
    {
        VAR_2 = FUNC_0(VAR_1);


        if ((VAR_2 < 0) || (VAR_1->line_buf[0] != ' '))
        {
            VAR_1->end_of_field = 1;
            return ((void*)0);
        }

        if (VAR_2 == 0)
            return "";
    }


    VAR_3 = VAR_2;
    if (VAR_3 > VAR_0)
        VAR_3 = VAR_0;

    VAR_1->line_pos = -1;
    return &VAR_1->line_buf[VAR_3];
}
