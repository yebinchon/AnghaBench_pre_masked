
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line_pos; int line_len; char* line_buf; scalar_t__ rec_pos; int blank_count; int fp; } ;
typedef TYPE_1__ OVERLAY_HELP_STATE_T ;


 scalar_t__ FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(OVERLAY_HELP_STATE_T *VAR_0)
{
    int VAR_1;

    if (VAR_0->line_pos >= 0)
 return VAR_0->line_len;

get_next_line:
    VAR_0->line_buf[sizeof(VAR_0->line_buf) - 1] = ' ';
    VAR_1 = -1;
    if (FUNC_0(VAR_0->line_buf, sizeof(VAR_0->line_buf), VAR_0->fp))
    {



 VAR_1 = FUNC_1(VAR_0->line_buf);
 if (VAR_1 && (VAR_0->line_buf[VAR_1 - 1] == '\n'))
 {
     VAR_1--;
     VAR_0->line_buf[VAR_1] = '\0';
 }
    }

    if (VAR_0->rec_pos >= 0)
    {
 if (VAR_1 == 0)
 {
     VAR_0->blank_count++;
     if (VAR_0->blank_count >= 2)
  return -1;
     VAR_0->line_pos = 0;
     goto get_next_line;
 }
 else if (VAR_0->blank_count)
 {


     VAR_0->blank_count = 0;
     return 0;
 }
    }

    VAR_0->line_len = VAR_1;
    VAR_0->line_pos = (VAR_1 >= 0) ? 0 : -1;
    return VAR_1;
}
