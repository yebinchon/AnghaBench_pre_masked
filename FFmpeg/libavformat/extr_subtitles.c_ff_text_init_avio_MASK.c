
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ buf_pos; void** buf; int * pb; scalar_t__ buf_len; } ;
typedef TYPE_1__ FFTextReader ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*,int ,char*) ;
 void* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,void**,int) ;

void FUNC_3(void *VAR_4, FFTextReader *VAR_5, AVIOContext *VAR_6)
{
    int VAR_7;
    VAR_5->pb = VAR_6;
    VAR_5->buf_pos = VAR_5->buf_len = 0;
    VAR_5->type = VAR_3;
    for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
        VAR_5->buf[VAR_5->buf_len++] = FUNC_1(VAR_5->pb);
    if (FUNC_2("\xFF\xFE", VAR_5->buf, 2) == 0) {
        VAR_5->type = VAR_2;
        VAR_5->buf_pos += 2;
    } else if (FUNC_2("\xFE\xFF", VAR_5->buf, 2) == 0) {
        VAR_5->type = VAR_1;
        VAR_5->buf_pos += 2;
    } else {
        VAR_5->buf[VAR_5->buf_len++] = FUNC_1(VAR_5->pb);
        if (FUNC_2("\xEF\xBB\xBF", VAR_5->buf, 3) == 0) {

            VAR_5->buf_pos += 3;
        }
    }
    if (VAR_4 && (VAR_5->type == VAR_2 || VAR_5->type == VAR_1))
        FUNC_0(VAR_4, VAR_0,
               "UTF16 is automatically converted to UTF8, do not specify a character encoding\n");
}
