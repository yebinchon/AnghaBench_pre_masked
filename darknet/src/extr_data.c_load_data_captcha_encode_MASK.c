
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cols; } ;
struct TYPE_4__ {TYPE_2__ X; TYPE_2__ y; scalar_t__ shallow; int member_0; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (char**) ;
 char** FUNC_1 (char**,int,int) ;
 TYPE_2__ FUNC_2 (char**,int,int,int) ;

data FUNC_3(char **VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    if(VAR_2) VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2);
    data VAR_5 = {0};
    VAR_5.shallow = 0;
    VAR_5.X = FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4);
    VAR_5.X.cols = 17100;
    VAR_5.y = VAR_5.X;
    if(VAR_2) FUNC_0(VAR_0);
    return VAR_5;
}
