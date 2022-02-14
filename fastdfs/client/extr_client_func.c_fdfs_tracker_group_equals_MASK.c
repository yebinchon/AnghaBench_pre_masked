
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_4__ {scalar_t__ server_count; int * servers; } ;
typedef TYPE_1__ TrackerServerGroup ;


 int FUNC_0 (int *,int *) ;

bool FUNC_1(TrackerServerGroup *VAR_0,
        TrackerServerGroup *VAR_1)
{
    TrackerServerInfo *VAR_2;
    TrackerServerInfo *VAR_3;
    TrackerServerInfo *VAR_4;

    if (VAR_0->server_count != VAR_1->server_count)
    {
        return 0;
    }

    VAR_4 = VAR_0->servers + VAR_0->server_count;
    VAR_2 = VAR_0->servers;
    VAR_3 = VAR_1->servers;
    while (VAR_2 < VAR_4)
    {
        if (!FUNC_0(VAR_2, VAR_3))
        {
            return 0;
        }

        VAR_2++;
        VAR_3++;
    }

    return 1;
}
