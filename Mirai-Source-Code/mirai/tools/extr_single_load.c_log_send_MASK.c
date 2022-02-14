
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,void*,int) ;
 int FUNC_1 (int,void*,int,int) ;
 int FUNC_2 (char*,char*,int,int) ;
 TYPE_1__* VAR_2 ;

int FUNC_3(int VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
    if (VAR_1)
    {
        char VAR_7[32] = {0};
        FUNC_2(VAR_7, "state %d - send: %d", VAR_2[VAR_3].state, VAR_5);
        FUNC_0(VAR_7, VAR_4, VAR_5);
    }
    VAR_0+=VAR_5;
    return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
}
