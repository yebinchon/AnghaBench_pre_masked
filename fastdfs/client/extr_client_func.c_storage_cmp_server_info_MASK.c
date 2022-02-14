
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int * connections; } ;
typedef TYPE_1__ TrackerServerInfo ;
typedef int ConnectionInfo ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 TrackerServerInfo *VAR_2;
 TrackerServerInfo *VAR_3;
 ConnectionInfo *VAR_4;
 ConnectionInfo *VAR_5;
 ConnectionInfo *VAR_6;
 int VAR_7;

    VAR_2 = (TrackerServerInfo *)VAR_0;
    VAR_3 = (TrackerServerInfo *)VAR_1;

    VAR_7 = VAR_2->count - VAR_3->count;
    if (VAR_7 != 0)
    {
        return VAR_7;
    }

    if (VAR_2->count == 1)
    {
        return FUNC_0(VAR_2->connections + 0,
                VAR_3->connections + 0);
    }

    VAR_6 = VAR_2->connections + VAR_2->count;
    for (VAR_4=VAR_2->connections,VAR_5=VAR_3->connections; VAR_4<VAR_6; VAR_4++,VAR_5++)
    {
        if ((VAR_7=FUNC_0(VAR_4, VAR_5)) != 0)
        {
            return VAR_7;
        }
    }

    return 0;
}
