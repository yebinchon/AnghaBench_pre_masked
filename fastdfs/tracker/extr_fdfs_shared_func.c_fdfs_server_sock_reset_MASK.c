
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; TYPE_2__* connections; } ;
typedef TYPE_1__ TrackerServerInfo ;
struct TYPE_5__ {int sock; } ;
typedef TYPE_2__ ConnectionInfo ;



void FUNC_0(TrackerServerInfo *VAR_0)
{
 ConnectionInfo *VAR_1;
 ConnectionInfo *VAR_2;

    if (VAR_0->count == 1)
    {
  VAR_0->connections[0].sock = -1;
    }
    else if (VAR_0->count == 2)
    {
  VAR_0->connections[0].sock = -1;
  VAR_0->connections[1].sock = -1;
    }
    else
    {
        VAR_2 = VAR_0->connections + VAR_0->count;
        for (VAR_1=VAR_0->connections; VAR_1<VAR_2; VAR_1++)
        {
            VAR_1->sock = -1;
        }
    }
}
