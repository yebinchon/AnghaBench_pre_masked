
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* s; } ;
typedef TYPE_1__ Parser ;
typedef int AVExpr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int * FUNC_2 (int ,int,int *,int *) ;
 int FUNC_3 (int **,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(AVExpr **VAR_2, Parser *VAR_3)
{
    int VAR_4;
    AVExpr *VAR_5, *VAR_6, *VAR_7;
    if ((VAR_4 = FUNC_3(&VAR_5, VAR_3)) < 0)
        return VAR_4;
    while (*VAR_3->s == '+' || *VAR_3->s == '-') {
        VAR_6 = VAR_5;
        if ((VAR_4 = FUNC_3(&VAR_7, VAR_3)) < 0) {
            FUNC_1(VAR_6);
            return VAR_4;
        }
        VAR_5 = FUNC_2(VAR_1, 1, VAR_6, VAR_7);
        if (!VAR_5) {
            FUNC_1(VAR_6);
            FUNC_1(VAR_7);
            return FUNC_0(VAR_0);
        }
    };

    *VAR_2 = VAR_5;
    return 0;
}
