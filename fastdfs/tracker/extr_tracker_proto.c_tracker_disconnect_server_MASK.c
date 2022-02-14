
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * connections; } ;
typedef TYPE_1__ TrackerServerInfo ;
typedef int ConnectionInfo ;


 int FUNC_0 (int *,int) ;

void FUNC_1(TrackerServerInfo *VAR_0)
{
 ConnectionInfo *VAR_1;
 ConnectionInfo *VAR_2;

    if (VAR_0->count == 1)
    {
        FUNC_0(VAR_0->connections + 0, 1);
        return;
    }

 VAR_2 = VAR_0->connections + VAR_0->count;
 for (VAR_1=VAR_0->connections; VAR_1<VAR_2; VAR_1++)
    {
        FUNC_0(VAR_1, 1);
    }
}
