
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int X; scalar_t__ shallow; int member_0; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (char**) ;
 char** FUNC_1 (char**,int,int) ;
 int FUNC_2 (char**,int,int,int) ;
 int FUNC_3 (char**,int,char**,int,int ) ;

data FUNC_4(char **VAR_0, int VAR_1, int VAR_2, char **VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    if(VAR_2) VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2);
    data VAR_7 = {0};
    VAR_7.shallow = 0;
    VAR_7.X = FUNC_2(VAR_0, VAR_1, VAR_5, VAR_6);
    VAR_7.y = FUNC_3(VAR_0, VAR_1, VAR_3, VAR_4, 0);
    if(VAR_2) FUNC_0(VAR_0);
    return VAR_7;
}
