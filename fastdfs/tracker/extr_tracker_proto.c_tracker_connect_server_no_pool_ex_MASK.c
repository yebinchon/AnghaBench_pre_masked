
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t index; int count; TYPE_2__* connections; } ;
typedef TYPE_1__ TrackerServerInfo ;
struct TYPE_7__ {scalar_t__ sock; } ;
typedef TYPE_2__ ConnectionInfo ;


 int FUNC_0 (TYPE_2__*,int ,char const*,int const) ;
 int VAR_0 ;

ConnectionInfo *FUNC_1(TrackerServerInfo *VAR_1,
        const char *VAR_2, int *VAR_3, const bool VAR_4)
{
 ConnectionInfo *VAR_5;
 ConnectionInfo *VAR_6;
    int VAR_7;

 if (VAR_1->connections[VAR_1->index].sock >= 0)
 {
        *VAR_3 = 0;
  return VAR_1->connections + VAR_1->index;
 }

 *VAR_3 = FUNC_0(VAR_1->connections
            + VAR_1->index, VAR_0,
            VAR_2, VAR_4);
    if (*VAR_3 == 0)
    {
  return VAR_1->connections + VAR_1->index;
    }

    if (VAR_1->count == 1)
    {
        return ((void*)0);
    }

 VAR_6 = VAR_1->connections + VAR_1->count;
 for (VAR_5=VAR_1->connections; VAR_5<VAR_6; VAR_5++)
    {
        VAR_7 = VAR_5 - VAR_1->connections;
        if (VAR_7 != VAR_1->index)
        {
            if ((*VAR_3=FUNC_0(VAR_5,
                            VAR_0, VAR_2,
                            VAR_4)) == 0)
            {
                VAR_1->index = VAR_7;
                return VAR_1->connections + VAR_1->index;
            }
        }
    }

    return ((void*)0);
}
