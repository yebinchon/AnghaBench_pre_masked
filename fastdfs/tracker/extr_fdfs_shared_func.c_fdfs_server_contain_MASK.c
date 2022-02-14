
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * connections; } ;
typedef TYPE_1__ TrackerServerInfo ;
typedef int ConnectionInfo ;


 int FUNC_0 (int ,char const*,int const) ;

bool FUNC_1(TrackerServerInfo *VAR_0,
        const char *VAR_1, const int VAR_2)
{
 ConnectionInfo *VAR_3;
 ConnectionInfo *VAR_4;

    if (VAR_0->count == 1)
    {
  return FUNC_0(VAR_0->connections[0],
                VAR_1, VAR_2);
    }
    else if (VAR_0->count == 2)
    {
  return FUNC_0(VAR_0->connections[0],
                VAR_1, VAR_2) ||
            FUNC_0(VAR_0->connections[1],
                    VAR_1, VAR_2);
    }

 VAR_4 = VAR_0->connections + VAR_0->count;
 for (VAR_3=VAR_0->connections; VAR_3<VAR_4; VAR_3++)
    {
  if (FUNC_0(*VAR_3, VAR_1, VAR_2))
        {
            return 1;
        }
    }

    return 0;
}
