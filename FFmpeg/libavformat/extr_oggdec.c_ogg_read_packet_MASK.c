
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct ogg_stream {int pflags; int new_metadata_size; scalar_t__ new_metadata; scalar_t__ end_trimming; int pduration; scalar_t__ buf; scalar_t__ keyframe_seek; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef void* int64_t ;
struct TYPE_13__ {struct ogg* priv_data; int * streams; scalar_t__ io_repositioned; } ;
struct TYPE_12__ {int stream_index; int flags; void* pos; int duration; void* dts; void* pts; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int * FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,scalar_t__,int) ;
 void* FUNC_7 (TYPE_2__*,int,void**) ;
 int FUNC_8 (TYPE_2__*,int*,int*,int*,void**) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    struct ogg *VAR_6;
    struct ogg_stream *VAR_7;
    int VAR_8, VAR_9;
    int VAR_10, VAR_11;
    int64_t VAR_12, VAR_13, VAR_14;

    if (VAR_4->io_repositioned) {
        FUNC_9(VAR_4);
        VAR_4->io_repositioned = 0;
    }


retry:
    do {
        VAR_9 = FUNC_8(VAR_4, &VAR_8, &VAR_10, &VAR_11, &VAR_12);
        if (VAR_9 < 0)
            return VAR_9;
    } while (VAR_8 < 0 || !VAR_4->streams[VAR_8]);

    VAR_6 = VAR_4->priv_data;
    VAR_7 = VAR_6->streams + VAR_8;


    VAR_13 = FUNC_7(VAR_4, VAR_8, &VAR_14);
    FUNC_10(VAR_4, VAR_8, VAR_10, VAR_11);

    if (VAR_7->keyframe_seek && !(VAR_7->pflags & VAR_2))
        goto retry;
    VAR_7->keyframe_seek = 0;


    VAR_9 = FUNC_3(VAR_5, VAR_11);
    if (VAR_9 < 0)
        return VAR_9;
    VAR_5->stream_index = VAR_8;
    FUNC_6(VAR_5->data, VAR_7->buf + VAR_10, VAR_11);

    VAR_5->pts = VAR_13;
    VAR_5->dts = VAR_14;
    VAR_5->flags = VAR_7->pflags;
    VAR_5->duration = VAR_7->pduration;
    VAR_5->pos = VAR_12;

    if (VAR_7->end_trimming) {
        uint8_t *VAR_15 = FUNC_4(VAR_5,
                                                     VAR_1,
                                                     10);
        if(!VAR_15)
            goto fail;
        FUNC_1(VAR_15 + 4, VAR_7->end_trimming);
        VAR_7->end_trimming = 0;
    }

    if (VAR_7->new_metadata) {
        uint8_t *VAR_16 = FUNC_4(VAR_5,
                                                     VAR_0,
                                                     VAR_7->new_metadata_size);
        if(!VAR_16)
            goto fail;

        FUNC_6(VAR_16, VAR_7->new_metadata, VAR_7->new_metadata_size);
        FUNC_2(&VAR_7->new_metadata);
        VAR_7->new_metadata_size = 0;
    }

    return VAR_11;
fail:
    FUNC_5(VAR_5);
    return FUNC_0(VAR_3);
}
