
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; scalar_t__* seen; } ;
typedef TYPE_1__ network ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int,int ) ;
 TYPE_1__* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;

void FUNC_3(char *VAR_1, char *VAR_2, char *VAR_3, int VAR_4)
{
    VAR_0 = -1;
    network *VAR_5 = FUNC_1(VAR_1);
    if(VAR_2){
        FUNC_0(VAR_5, VAR_2, 0, VAR_5->n);
        FUNC_0(VAR_5, VAR_2, VAR_4, VAR_5->n);
    }
    *VAR_5->seen = 0;
    FUNC_2(VAR_5, VAR_3, VAR_5->n);
}
