
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ogg {int nstreams; TYPE_1__* streams; } ;
struct TYPE_2__ {int serial; } ;



__attribute__((used)) static inline int
FUNC_0 (struct ogg * VAR_0, int VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->nstreams; VAR_2++)
        if (VAR_0->streams[VAR_2].serial == VAR_1)
            return VAR_2;

    return -1;
}
