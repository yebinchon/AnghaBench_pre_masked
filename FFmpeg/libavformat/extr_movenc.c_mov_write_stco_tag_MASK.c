
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int entry; scalar_t__ data_offset; TYPE_1__* cluster; scalar_t__ chunkCount; } ;
struct TYPE_5__ {scalar_t__ pos; int chunkNum; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    int VAR_2;
    int VAR_3 = FUNC_3(VAR_1);
    int64_t VAR_4 = FUNC_0(VAR_0);
    FUNC_1(VAR_0, 0);
    if (VAR_3)
        FUNC_4(VAR_0, "co64");
    else
        FUNC_4(VAR_0, "stco");
    FUNC_1(VAR_0, 0);
    FUNC_1(VAR_0, VAR_1->chunkCount);
    for (VAR_2 = 0; VAR_2 < VAR_1->entry; VAR_2++) {
        if (!VAR_1->cluster[VAR_2].chunkNum)
            continue;
        if (VAR_3 == 1)
            FUNC_2(VAR_0, VAR_1->cluster[VAR_2].pos + VAR_1->data_offset);
        else
            FUNC_1(VAR_0, VAR_1->cluster[VAR_2].pos + VAR_1->data_offset);
    }
    return FUNC_5(VAR_0, VAR_4);
}
