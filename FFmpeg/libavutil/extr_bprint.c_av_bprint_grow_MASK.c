
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int size; scalar_t__* str; } ;
typedef TYPE_1__ AVBPrint ;


 size_t FUNC_0 (unsigned int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(AVBPrint *VAR_1, unsigned VAR_2)
{

    VAR_2 = FUNC_0(VAR_2, VAR_0 - 5 - VAR_1->len);
    VAR_1->len += VAR_2;
    if (VAR_1->size)
        VAR_1->str[FUNC_0(VAR_1->len, VAR_1->size - 1)] = 0;
}
