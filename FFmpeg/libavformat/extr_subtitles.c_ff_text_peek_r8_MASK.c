
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf_pos; int buf_len; int* buf; int pb; } ;
typedef TYPE_1__ FFTextReader ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(FFTextReader *VAR_0)
{
    int VAR_1;
    if (VAR_0->buf_pos < VAR_0->buf_len)
        return VAR_0->buf[VAR_0->buf_pos];
    VAR_1 = FUNC_1(VAR_0);
    if (!FUNC_0(VAR_0->pb)) {
        VAR_0->buf_pos = 0;
        VAR_0->buf_len = 1;
        VAR_0->buf[0] = VAR_1;
    }
    return VAR_1;
}
