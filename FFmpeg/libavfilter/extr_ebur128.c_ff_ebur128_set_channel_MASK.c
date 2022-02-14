
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int channels; TYPE_1__* d; } ;
struct TYPE_4__ {int* channel_map; } ;
typedef TYPE_2__ FFEBUR128State ;


 int VAR_0 ;

int FUNC_0(FFEBUR128State * VAR_1,
                           unsigned int VAR_2, int VAR_3)
{
    if (VAR_2 >= VAR_1->channels) {
        return 1;
    }
    if (VAR_3 == VAR_0 &&
        (VAR_1->channels != 1 || VAR_2 != 0)) {
        return 1;
    }
    VAR_1->d->channel_map[VAR_2] = VAR_3;
    return 0;
}
