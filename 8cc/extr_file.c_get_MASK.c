
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t buflen; int* buf; int column; int line; scalar_t__ file; } ;
typedef TYPE_1__ File ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3() {
    File *VAR_2 = FUNC_2(VAR_1);
    int VAR_3;
    if (VAR_2->buflen > 0) {
        VAR_3 = VAR_2->buf[--VAR_2->buflen];
    } else if (VAR_2->file) {
        VAR_3 = FUNC_0(VAR_2);
    } else {
        VAR_3 = FUNC_1(VAR_2);
    }
    if (VAR_3 == '\n') {
        VAR_2->line++;
        VAR_2->column = 1;
    } else if (VAR_3 != VAR_0) {
        VAR_2->column++;
    }
    return VAR_3;
}
