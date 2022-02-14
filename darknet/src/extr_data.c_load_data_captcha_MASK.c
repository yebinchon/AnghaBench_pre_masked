
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * vals; } ;
struct TYPE_4__ {TYPE_2__ y; int X; scalar_t__ shallow; int member_0; } ;
typedef TYPE_1__ data ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (char**,int,int) ;
 int FUNC_3 (char**,int,int,int) ;
 TYPE_2__ FUNC_4 (int,int) ;

data FUNC_5(char **VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    if(VAR_3) VAR_1 = FUNC_2(VAR_1, VAR_2, VAR_3);
    data VAR_7 = {0};
    VAR_7.shallow = 0;
    VAR_7.X = FUNC_3(VAR_1, VAR_2, VAR_5, VAR_6);
    VAR_7.y = FUNC_4(VAR_2, VAR_4*VAR_0);
    int VAR_8;
    for(VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8){
        FUNC_0(VAR_1[VAR_8], VAR_4, VAR_7.y.vals[VAR_8]);
    }
    if(VAR_3) FUNC_1(VAR_1);
    return VAR_7;
}
