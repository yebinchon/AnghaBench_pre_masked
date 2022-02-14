
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* seen; } ;
typedef TYPE_1__ network ;


 int FUNC_0 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_1 (char*) ;

network *FUNC_2(char *VAR_0, char *VAR_1, int VAR_2)
{
    network *VAR_3 = FUNC_1(VAR_0);
    if(VAR_1 && VAR_1[0] != 0){
        FUNC_0(VAR_3, VAR_1);
    }
    if(VAR_2) (*VAR_3->seen) = 0;
    return VAR_3;
}
