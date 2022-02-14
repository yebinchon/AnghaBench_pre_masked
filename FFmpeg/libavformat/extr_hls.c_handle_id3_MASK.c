
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist {int id3_found; int id3_changed; int * id3_deferred_extra; int parent; int * id3_initial; TYPE_1__* ctx; scalar_t__ id3_offset; scalar_t__ id3_mpegts_timestamp; } ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {int metadata; scalar_t__ nb_streams; } ;
typedef int ID3v2ExtraMetaAPIC ;
typedef int ID3v2ExtraMeta ;
typedef int AVIOContext ;
typedef int AVDictionary ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_1__*,int **) ;
 int FUNC_6 (int **,int **) ;
 scalar_t__ FUNC_7 (struct playlist*,int *,int *) ;
 int FUNC_8 (TYPE_1__*,int *,int **,scalar_t__*,int **,int **) ;

__attribute__((used)) static void FUNC_9(AVIOContext *VAR_1, struct playlist *VAR_2)
{
    AVDictionary *VAR_3 = ((void*)0);
    ID3v2ExtraMetaAPIC *VAR_4 = ((void*)0);
    ID3v2ExtraMeta *VAR_5 = ((void*)0);
    int64_t VAR_6 = VAR_0;

    FUNC_8(VAR_2->ctx, VAR_1, &VAR_3, &VAR_6, &VAR_4, &VAR_5);

    if (VAR_6 != VAR_0) {
        VAR_2->id3_mpegts_timestamp = VAR_6;
        VAR_2->id3_offset = 0;
    }

    if (!VAR_2->id3_found) {

        FUNC_0(!VAR_2->id3_deferred_extra);
        VAR_2->id3_found = 1;


        if (VAR_2->ctx->nb_streams)
            FUNC_5(VAR_2->ctx, &VAR_5);
        else

            VAR_2->id3_deferred_extra = VAR_5;

        FUNC_6(&VAR_3, &VAR_5);
        FUNC_1(&VAR_2->ctx->metadata, VAR_3, 0);
        VAR_2->id3_initial = VAR_3;

    } else {
        if (!VAR_2->id3_changed && FUNC_7(VAR_2, VAR_3, VAR_4)) {
            FUNC_3(VAR_2->parent, "Changing ID3 metadata in HLS audio elementary stream");
            VAR_2->id3_changed = 1;
        }
        FUNC_2(&VAR_3);
    }

    if (!VAR_2->id3_deferred_extra)
        FUNC_4(&VAR_5);
}
