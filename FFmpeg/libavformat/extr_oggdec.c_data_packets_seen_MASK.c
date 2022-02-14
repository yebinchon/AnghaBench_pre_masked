
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ogg {int nstreams; TYPE_1__* streams; } ;
struct TYPE_2__ {scalar_t__ got_data; } ;



__attribute__((used)) static int FUNC_0(const struct ogg *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->nstreams; VAR_1++)
        if (VAR_0->streams[VAR_1].got_data)
            return 1;
    return 0;
}
