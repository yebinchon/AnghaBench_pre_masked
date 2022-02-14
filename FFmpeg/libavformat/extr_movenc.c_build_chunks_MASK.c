
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int size; int chunkNum; scalar_t__ pos; scalar_t__ entries; int samples_in_chunk; } ;
struct TYPE_4__ {int chunkCount; int entry; TYPE_2__* cluster; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ MOVIentry ;



__attribute__((used)) static void FUNC_0(MOVTrack *VAR_0)
{
    int VAR_1;
    MOVIentry *VAR_2 = &VAR_0->cluster[0];
    uint64_t VAR_3 = VAR_2->size;
    VAR_2->chunkNum = 1;
    if (VAR_0->chunkCount)
        return;
    VAR_0->chunkCount = 1;
    for (VAR_1 = 1; VAR_1<VAR_0->entry; VAR_1++){
        if (VAR_2->pos + VAR_3 == VAR_0->cluster[VAR_1].pos &&
            VAR_3 + VAR_0->cluster[VAR_1].size < (1<<20)){
            VAR_3 += VAR_0->cluster[VAR_1].size;
            VAR_2->samples_in_chunk += VAR_0->cluster[VAR_1].entries;
        } else {
            VAR_0->cluster[VAR_1].chunkNum = VAR_2->chunkNum+1;
            VAR_2=&VAR_0->cluster[VAR_1];
            VAR_3 = VAR_2->size;
            VAR_0->chunkCount++;
        }
    }
}
