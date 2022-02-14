
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rec_pos; char* line_buf; int line_pos; scalar_t__ end_of_field; int fp; } ;
typedef TYPE_1__ OVERLAY_HELP_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*) ;

int FUNC_4(OVERLAY_HELP_STATE_T *VAR_2, const char *VAR_3)
{
    int VAR_4 = FUNC_3(VAR_3);
    int VAR_5 = 0;

    if (VAR_2->rec_pos >= 0)
        FUNC_0(VAR_2->fp, VAR_2->rec_pos, VAR_1);

    while (!VAR_5)
    {
        int VAR_6 = FUNC_2(VAR_2);
        if (VAR_6 < 0)
            break;


        if ((VAR_6 >= (VAR_4 + 1)) &&
            (VAR_2->line_buf[VAR_4] == ':') &&
            (FUNC_1(VAR_2->line_buf, VAR_3, VAR_4) == 0))
        {


            if (VAR_6 > VAR_0)
                VAR_2->line_pos = VAR_0;
            else
                VAR_2->line_pos = -1;
            VAR_2->end_of_field = 0;
            VAR_5 = 1;
        }
        else
        {
            VAR_2->line_pos = -1;
        }
    }

    return VAR_5;
}
