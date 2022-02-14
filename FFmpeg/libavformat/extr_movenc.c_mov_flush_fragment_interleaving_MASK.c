
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
struct TYPE_9__ {int mdat_buf; } ;
struct TYPE_8__ {int entries_flushed; int entry; TYPE_1__* cluster; int * mdat_buf; } ;
struct TYPE_7__ {int pos; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ MOVMuxContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0, MOVTrack *VAR_1)
{
    MOVMuxContext *VAR_2 = VAR_0->priv_data;
    int VAR_3, VAR_4;
    uint8_t *VAR_5;
    int VAR_6, VAR_7;

    if (!VAR_1->mdat_buf)
        return 0;
    if (!VAR_2->mdat_buf) {
        if ((VAR_3 = FUNC_2(&VAR_2->mdat_buf)) < 0)
            return VAR_3;
    }
    VAR_4 = FUNC_1(VAR_1->mdat_buf, &VAR_5);
    VAR_1->mdat_buf = ((void*)0);

    VAR_7 = FUNC_3(VAR_2->mdat_buf);
    FUNC_4(VAR_2->mdat_buf, VAR_5, VAR_4);
    FUNC_0(VAR_5);

    for (VAR_6 = VAR_1->entries_flushed; VAR_6 < VAR_1->entry; VAR_6++)
        VAR_1->cluster[VAR_6].pos += VAR_7;
    VAR_1->entries_flushed = VAR_1->entry;
    return 0;
}
