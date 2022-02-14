
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int chunkCount; int entry; TYPE_1__* cluster; } ;
struct TYPE_4__ {int samples_in_chunk; int chunkNum; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_1, MOVTrack *VAR_2)
{
    int VAR_3 = 0, VAR_4 = -1, VAR_5;
    int64_t VAR_6, VAR_7;

    int64_t VAR_8 = FUNC_1(VAR_1);
    FUNC_2(VAR_1, 0);
    FUNC_3(VAR_1, "stsc");
    FUNC_2(VAR_1, 0);
    VAR_6 = FUNC_1(VAR_1);
    FUNC_2(VAR_1, VAR_2->chunkCount);
    for (VAR_5 = 0; VAR_5 < VAR_2->entry; VAR_5++) {
        if (VAR_4 != VAR_2->cluster[VAR_5].samples_in_chunk && VAR_2->cluster[VAR_5].chunkNum) {
            FUNC_2(VAR_1, VAR_2->cluster[VAR_5].chunkNum);
            FUNC_2(VAR_1, VAR_2->cluster[VAR_5].samples_in_chunk);
            FUNC_2(VAR_1, 0x1);
            VAR_4 = VAR_2->cluster[VAR_5].samples_in_chunk;
            VAR_3++;
        }
    }
    VAR_7 = FUNC_1(VAR_1);
    FUNC_0(VAR_1, VAR_6, VAR_0);
    FUNC_2(VAR_1, VAR_3);
    FUNC_0(VAR_1, VAR_7, VAR_0);

    return FUNC_4(VAR_1, VAR_8);
}
