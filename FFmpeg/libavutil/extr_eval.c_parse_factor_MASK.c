
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int value; TYPE_1__** param; } ;
struct TYPE_13__ {char* s; } ;
struct TYPE_12__ {int value; } ;
typedef TYPE_2__ Parser ;
typedef TYPE_3__ AVExpr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (int ,int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__**,TYPE_2__*,int*) ;

__attribute__((used)) static int FUNC_4(AVExpr **VAR_2, Parser *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    AVExpr *VAR_7, *VAR_8, *VAR_9;
    if ((VAR_6 = FUNC_3(&VAR_7, VAR_3, &VAR_4)) < 0)
        return VAR_6;
    while(VAR_3->s[0]=='^'){
        VAR_8 = VAR_7;
        VAR_3->s++;
        if ((VAR_6 = FUNC_3(&VAR_9, VAR_3, &VAR_5)) < 0) {
            FUNC_1(VAR_8);
            return VAR_6;
        }
        VAR_7 = FUNC_2(VAR_1, 1, VAR_8, VAR_9);
        if (!VAR_7) {
            FUNC_1(VAR_8);
            FUNC_1(VAR_9);
            return FUNC_0(VAR_0);
        }
        if (VAR_7->param[1]) VAR_7->param[1]->value *= (VAR_5|1);
    }
    if (VAR_7) VAR_7->value *= (VAR_4|1);

    *VAR_2 = VAR_7;
    return 0;
}
