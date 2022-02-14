
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int X; scalar_t__ shallow; int member_0; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (char**) ;
 char** FUNC_1 (char**,int,int) ;
 int FUNC_2 (char**,int,int,int,int,float,float,float,float,float,int ) ;
 int FUNC_3 (char**,int,int) ;

data FUNC_4(char **VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, float VAR_7, float VAR_8, float VAR_9, float VAR_10, float VAR_11)
{
    if(VAR_2) VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2);
    data VAR_12 = {0};
    VAR_12.shallow = 0;
    VAR_12.X = FUNC_2(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, 0);
    VAR_12.y = FUNC_3(VAR_0, VAR_1, VAR_3);
    if(VAR_2) FUNC_0(VAR_0);
    return VAR_12;
}
