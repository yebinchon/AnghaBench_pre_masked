
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {int w; int h; int y; int X; scalar_t__ shallow; int member_0; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (char**) ;
 char** FUNC_1 (char**,int,int) ;
 int FUNC_2 (char**,int,int,int,int,float,float,float,float,float,int) ;
 int FUNC_3 (char**,int,char**,int,int *) ;

data FUNC_4(char **VAR_0, int VAR_1, int VAR_2, char **VAR_3, int VAR_4, tree *VAR_5, int VAR_6, int VAR_7, int VAR_8, float VAR_9, float VAR_10, float VAR_11, float VAR_12, float VAR_13, int VAR_14)
{
    if(VAR_2) VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2);
    data VAR_15 = {0};
    VAR_15.shallow = 0;
    VAR_15.w=VAR_8;
    VAR_15.h=VAR_8;
    VAR_15.X = FUNC_2(VAR_0, VAR_1, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
    VAR_15.y = FUNC_3(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5);
    if(VAR_2) FUNC_0(VAR_0);
    return VAR_15;
}
