
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; int * connections; } ;
typedef TYPE_1__ TrackerServerInfo ;
typedef int ConnectionInfo ;


 int FUNC_0 (TYPE_1__*,int *) ;

bool FUNC_1(TrackerServerInfo *VAR_0,
        TrackerServerInfo *VAR_1)
{
 ConnectionInfo *VAR_2;
 ConnectionInfo *VAR_3;

    if (VAR_0->count == 1)
    {
        return FUNC_0(VAR_1, VAR_0->connections + 0);
    }
    else if (VAR_0->count == 2)
    {
        if (FUNC_0(VAR_1, VAR_0->connections + 0))
        {
            return 1;
        }
        return FUNC_0(VAR_1, VAR_0->connections + 1);
    }

 VAR_3 = VAR_0->connections + VAR_0->count;
 for (VAR_2=VAR_0->connections; VAR_2<VAR_3; VAR_2++)
    {
  if (FUNC_0(VAR_1, VAR_2))
        {
            return 1;
        }
    }

    return 0;
}
