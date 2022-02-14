
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* str; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_0, AVBPrint *VAR_1)
{

    do {
        FUNC_0(VAR_1);
        FUNC_2(VAR_0, VAR_1);
    } while (!FUNC_1(VAR_0) && (VAR_1->str[0] == ';' || VAR_1->str[0] == '#' || VAR_1->str[0] == 0));
}
