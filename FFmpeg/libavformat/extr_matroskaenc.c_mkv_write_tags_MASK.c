
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


struct TYPE_21__ {size_t stream_idx; int fileuid; } ;
typedef TYPE_4__ mkv_attachment ;
typedef int ebml_master ;
struct TYPE_25__ {int id; int metadata; } ;
struct TYPE_24__ {int nb_streams; int nb_chapters; TYPE_13__* pb; TYPE_6__** streams; TYPE_8__** chapters; int metadata; TYPE_5__* priv_data; } ;
struct TYPE_23__ {int metadata; TYPE_1__* codecpar; } ;
struct TYPE_22__ {scalar_t__ mode; int chapter_id_offset; int * tags_bc; int tags_pos; int is_live; TYPE_3__* attachments; scalar_t__ have_attachments; TYPE_2__* tracks; } ;
struct TYPE_20__ {int num_entries; TYPE_4__* entries; } ;
struct TYPE_19__ {int duration_offset; } ;
struct TYPE_18__ {scalar_t__ codec_type; } ;
struct TYPE_17__ {int seekable; } ;
typedef TYPE_5__ MatroskaMuxContext ;
typedef TYPE_6__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_7__ AVFormatContext ;
typedef TYPE_8__ AVChapter ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_13__*,int **,TYPE_5__*) ;
 int FUNC_3 (TYPE_13__*,int **,TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_7__*,int ,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_7__*,int ,int ,int) ;
 int FUNC_7 (TYPE_7__*,int ,int,int *) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_9)
{
    MatroskaMuxContext *VAR_10 = VAR_9->priv_data;
    int VAR_11, VAR_12;

    FUNC_4(VAR_9, VAR_8, ((void*)0));

    if (FUNC_5(VAR_9->metadata, 0)) {
        VAR_12 = FUNC_6(VAR_9, VAR_9->metadata, 0, 0);
        if (VAR_12 < 0) return VAR_12;
    }

    for (VAR_11 = 0; VAR_11 < VAR_9->nb_streams; VAR_11++) {
        AVStream *VAR_13 = VAR_9->streams[VAR_11];

        if (VAR_13->codecpar->codec_type == VAR_1)
            continue;

        if (!FUNC_5(VAR_13->metadata, VAR_6))
            continue;

        VAR_12 = FUNC_6(VAR_9, VAR_13->metadata, VAR_6, VAR_11 + 1);
        if (VAR_12 < 0) return VAR_12;
    }

    if ((VAR_9->pb->seekable & VAR_0) && !VAR_10->is_live) {
        for (VAR_11 = 0; VAR_11 < VAR_9->nb_streams; VAR_11++) {
            AVIOContext *VAR_14;
            AVStream *VAR_15 = VAR_9->streams[VAR_11];
            ebml_master VAR_16;
            ebml_master VAR_17;

            if (VAR_15->codecpar->codec_type == VAR_1)
                continue;

            FUNC_7(VAR_9, VAR_6, VAR_11 + 1, &VAR_16);
            VAR_14 = VAR_10->tags_bc;

            VAR_17 = FUNC_10(VAR_14, VAR_2, 0);
            FUNC_8(VAR_14, VAR_3, "DURATION");
            VAR_10->tracks[VAR_11].duration_offset = FUNC_0(VAR_14);



            FUNC_9(VAR_14, 23);
            FUNC_1(VAR_14, VAR_17);
            FUNC_1(VAR_14, VAR_16);
        }
    }

    if (VAR_10->mode != VAR_7) {
        for (VAR_11 = 0; VAR_11 < VAR_9->nb_chapters; VAR_11++) {
            AVChapter *VAR_18 = VAR_9->chapters[VAR_11];

            if (!FUNC_5(VAR_18->metadata, VAR_5))
                continue;

            VAR_12 = FUNC_6(VAR_9, VAR_18->metadata, VAR_5, VAR_18->id + VAR_10->chapter_id_offset);
            if (VAR_12 < 0)
                return VAR_12;
        }
    }

    if (VAR_10->have_attachments && VAR_10->mode != VAR_7) {
        for (VAR_11 = 0; VAR_11 < VAR_10->attachments->num_entries; VAR_11++) {
            mkv_attachment *VAR_19 = &VAR_10->attachments->entries[VAR_11];
            AVStream *VAR_20 = VAR_9->streams[VAR_19->stream_idx];

            if (!FUNC_5(VAR_20->metadata, VAR_4))
                continue;

            VAR_12 = FUNC_6(VAR_9, VAR_20->metadata, VAR_4, VAR_19->fileuid);
            if (VAR_12 < 0)
                return VAR_12;
        }
    }

    if (VAR_10->tags_bc) {
        if ((VAR_9->pb->seekable & VAR_0) && !VAR_10->is_live)
            FUNC_3(VAR_9->pb, &VAR_10->tags_bc, VAR_10, &VAR_10->tags_pos);
        else
            FUNC_2(VAR_9->pb, &VAR_10->tags_bc, VAR_10);
    }
    return 0;
}
