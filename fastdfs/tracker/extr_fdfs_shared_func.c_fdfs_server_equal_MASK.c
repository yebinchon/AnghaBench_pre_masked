
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int count; TYPE_2__* connections; } ;
typedef TYPE_1__ TrackerServerInfo ;
struct TYPE_8__ {scalar_t__ port; int ip_addr; } ;
typedef TYPE_2__ ConnectionInfo ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

bool FUNC_2(TrackerServerInfo *VAR_0,
        TrackerServerInfo *VAR_1)
{
 ConnectionInfo *VAR_2;
 ConnectionInfo *VAR_3;

    if (VAR_0->count != VAR_1->count)
    {
        return 0;
    }

    if (VAR_0->count == 1)
    {
        return (VAR_0->connections->port == VAR_1->connections->port &&
            FUNC_1(VAR_0->connections->ip_addr, VAR_1->connections->ip_addr) == 0);
    }

 VAR_3 = VAR_0->connections + VAR_0->count;
 for (VAR_2=VAR_0->connections; VAR_2<VAR_3; VAR_2++)
    {
  if (!FUNC_0(VAR_1, VAR_2))
        {
            return 0;
        }
    }

    return 1;
}
