
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; scalar_t__ str; } ;
typedef TYPE_1__ AVBPrint ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,char,unsigned int) ;

void FUNC_5(AVBPrint *VAR_0, char VAR_1, unsigned VAR_2)
{
    unsigned VAR_3, VAR_4;

    while (1) {
        VAR_3 = FUNC_3(VAR_0);
        if (VAR_2 < VAR_3)
            break;
        if (FUNC_1(VAR_0, VAR_2))
            break;
    }
    if (VAR_3) {
        VAR_4 = FUNC_0(VAR_2, VAR_3 - 1);
        FUNC_4(VAR_0->str + VAR_0->len, VAR_1, VAR_4);
    }
    FUNC_2(VAR_0, VAR_2);
}
