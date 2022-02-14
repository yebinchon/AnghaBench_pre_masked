
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buflen; int* buf; int column; int line; } ;
typedef TYPE_1__ File ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;

void FUNC_2(int VAR_2) {
    if (VAR_2 == VAR_0)
        return;
    File *VAR_3 = FUNC_1(VAR_1);
    FUNC_0(VAR_3->buflen < sizeof(VAR_3->buf) / sizeof(VAR_3->buf[0]));
    VAR_3->buf[VAR_3->buflen++] = VAR_2;
    if (VAR_2 == '\n') {
        VAR_3->column = 1;
        VAR_3->line--;
    } else {
        VAR_3->column--;
    }
}
