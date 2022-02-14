
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int track_duration; int entry; int timescale; TYPE_1__* cluster; } ;
struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_2__ MOVTrack ;



__attribute__((used)) static unsigned FUNC_0(MOVTrack *VAR_0)
{
    uint64_t VAR_1 = 0;
    int VAR_2;
    if (!VAR_0->track_duration)
        return 0;
    for (VAR_2 = 0; VAR_2 < VAR_0->entry; VAR_2++)
        VAR_1 += VAR_0->cluster[VAR_2].size;
    return VAR_1 * 8 * VAR_0->timescale / VAR_0->track_duration;
}
