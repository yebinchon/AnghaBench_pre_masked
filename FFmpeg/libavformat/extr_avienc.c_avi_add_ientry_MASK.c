
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {unsigned int flags; unsigned int len; scalar_t__ pos; int tag; } ;
struct TYPE_14__ {TYPE_1__** streams; int * pb; TYPE_4__* priv_data; } ;
struct TYPE_13__ {scalar_t__ movi_list; } ;
struct TYPE_12__ {int entry; int ents_allocated; TYPE_7__** cluster; } ;
struct TYPE_11__ {int max_size; TYPE_3__ indexes; } ;
struct TYPE_10__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ AVIStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVIIndex ;
typedef int AVIIentry ;
typedef TYPE_4__ AVIContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned int) ;
 TYPE_7__* FUNC_2 (int) ;
 TYPE_7__** FUNC_3 (TYPE_7__**,int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2, int VAR_3, char *VAR_4,
                          unsigned int VAR_5, unsigned int VAR_6)
{
    AVIContext *VAR_7 = VAR_2->priv_data;
    AVIOContext *VAR_8 = VAR_2->pb;
    AVIStream *VAR_9 = VAR_2->streams[VAR_3]->priv_data;
    AVIIndex *VAR_10 = &VAR_9->indexes;
    int VAR_11 = VAR_10->entry / VAR_0;
    int VAR_12 = VAR_10->entry % VAR_0;

    if (VAR_10->ents_allocated <= VAR_10->entry) {
        VAR_10->cluster = FUNC_3(VAR_10->cluster, sizeof(void*), VAR_11+1);
        if (!VAR_10->cluster) {
            VAR_10->ents_allocated = 0;
            VAR_10->entry = 0;
            return FUNC_0(VAR_1);
        }
        VAR_10->cluster[VAR_11] =
            FUNC_2(VAR_0 * sizeof(AVIIentry));
        if (!VAR_10->cluster[VAR_11])
            return FUNC_0(VAR_1);
        VAR_10->ents_allocated += VAR_0;
    }

    if (VAR_4)
        FUNC_5(VAR_10->cluster[VAR_11][VAR_12].tag, VAR_4, 4);
    else
        FUNC_6(VAR_10->cluster[VAR_11][VAR_12].tag, 0, 4);
    VAR_10->cluster[VAR_11][VAR_12].flags = VAR_5;
    VAR_10->cluster[VAR_11][VAR_12].pos = FUNC_4(VAR_8) - VAR_7->movi_list;
    VAR_10->cluster[VAR_11][VAR_12].len = VAR_6;
    VAR_9->max_size = FUNC_1(VAR_9->max_size, VAR_6);
    VAR_10->entry++;

    return 0;
}
