
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* s; } ;
typedef TYPE_1__ Parser ;
typedef int AVExpr ;


 int FUNC_0 (int **,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(AVExpr **VAR_0, Parser *VAR_1, int *VAR_2)
{
    *VAR_2= (*VAR_1->s == '+') - (*VAR_1->s == '-');
    VAR_1->s += *VAR_2&1;
    return FUNC_0(VAR_0, VAR_1);
}
