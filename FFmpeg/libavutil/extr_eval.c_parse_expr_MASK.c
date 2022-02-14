
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stack_index; char* s; } ;
typedef TYPE_1__ Parser ;
typedef int AVExpr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int * FUNC_2 (int ,int,int *,int *) ;
 int FUNC_3 (int **,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(AVExpr **VAR_3, Parser *VAR_4)
{
    int VAR_5;
    AVExpr *VAR_6, *VAR_7, *VAR_8;
    if (VAR_4->stack_index <= 0)
        return FUNC_0(VAR_0);
    VAR_4->stack_index--;

    if ((VAR_5 = FUNC_3(&VAR_6, VAR_4)) < 0)
        return VAR_5;
    while (*VAR_4->s == ';') {
        VAR_4->s++;
        VAR_7 = VAR_6;
        if ((VAR_5 = FUNC_3(&VAR_8, VAR_4)) < 0) {
            FUNC_1(VAR_7);
            return VAR_5;
        }
        VAR_6 = FUNC_2(VAR_2, 1, VAR_7, VAR_8);
        if (!VAR_6) {
            FUNC_1(VAR_7);
            FUNC_1(VAR_8);
            return FUNC_0(VAR_1);
        }
    };

    VAR_4->stack_index++;
    *VAR_3 = VAR_6;
    return 0;
}
