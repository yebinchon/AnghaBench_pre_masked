
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pb; scalar_t__ type; scalar_t__ buf_len; scalar_t__ buf_pos; } ;
typedef TYPE_1__ FFTextReader ;
typedef int AVIOContext ;
typedef int AVBPrint ;


 int FUNC_0 (TYPE_1__*,int *) ;

void FUNC_1(AVIOContext *VAR_0, AVBPrint *VAR_1)
{
    FFTextReader VAR_2;
    VAR_2.buf_pos = VAR_2.buf_len = 0;
    VAR_2.type = 0;
    VAR_2.pb = VAR_0;
    FUNC_0(&VAR_2, VAR_1);
}
