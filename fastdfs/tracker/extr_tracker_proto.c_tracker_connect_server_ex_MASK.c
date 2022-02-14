
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; int count; int * connections; } ;
typedef TYPE_1__ TrackerServerInfo ;
typedef int ConnectionInfo ;


 int * FUNC_0 (int *,int*) ;

ConnectionInfo *FUNC_1(TrackerServerInfo *VAR_0,
  const int VAR_1, int *VAR_2)
{
 ConnectionInfo *VAR_3;
 ConnectionInfo *VAR_4;
 ConnectionInfo *VAR_5;
    int VAR_6;

    VAR_5 = FUNC_0(VAR_0->connections + VAR_0->index, VAR_2);
    if (VAR_5 != ((void*)0))
    {
        return VAR_5;
    }
    if (VAR_0->count == 1)
    {
        return ((void*)0);
    }

 VAR_4 = VAR_0->connections + VAR_0->count;
 for (VAR_3=VAR_0->connections; VAR_3<VAR_4; VAR_3++)
    {
        VAR_6 = VAR_3 - VAR_0->connections;
        if (VAR_6 != VAR_0->index)
        {
            if ((VAR_5=FUNC_0(VAR_3, VAR_2)) != ((void*)0))
            {
                VAR_0->index = VAR_6;
                return VAR_5;
            }
        }
    }

    return ((void*)0);
}
