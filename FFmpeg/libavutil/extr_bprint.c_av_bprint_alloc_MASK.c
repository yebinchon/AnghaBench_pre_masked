
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int size_max; int len; char* str; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (char*,unsigned int) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6(AVBPrint *VAR_4, unsigned VAR_5)
{
    char *VAR_6, *VAR_7;
    unsigned VAR_8, VAR_9;

    if (VAR_4->size == VAR_4->size_max)
        return FUNC_0(VAR_1);
    if (!FUNC_3(VAR_4))
        return VAR_0;
    VAR_8 = VAR_4->len + 1 + FUNC_1(VAR_3 - VAR_4->len - 1, VAR_5);
    VAR_9 = VAR_4->size > VAR_4->size_max / 2 ? VAR_4->size_max : VAR_4->size * 2;
    if (VAR_9 < VAR_8)
        VAR_9 = FUNC_1(VAR_4->size_max, VAR_8);
    VAR_6 = FUNC_2(VAR_4) ? VAR_4->str : ((void*)0);
    VAR_7 = FUNC_4(VAR_6, VAR_9);
    if (!VAR_7)
        return FUNC_0(VAR_2);
    if (!VAR_6)
        FUNC_5(VAR_7, VAR_4->str, VAR_4->len + 1);
    VAR_4->str = VAR_7;
    VAR_4->size = VAR_9;
    return 0;
}
