
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {int * vals; } ;
typedef TYPE_1__ matrix ;


 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (char*,char**,int,int ) ;
 TYPE_1__ FUNC_2 (int,int) ;

matrix FUNC_3(char **VAR_0, int VAR_1, char **VAR_2, int VAR_3, tree *VAR_4)
{
    matrix VAR_5 = FUNC_2(VAR_1, VAR_3);
    int VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_1 && VAR_2; ++VAR_6){
        FUNC_1(VAR_0[VAR_6], VAR_2, VAR_3, VAR_5.vals[VAR_6]);
        if(VAR_4){
            FUNC_0(VAR_5.vals[VAR_6], VAR_3, VAR_4);
        }
    }
    return VAR_5;
}
