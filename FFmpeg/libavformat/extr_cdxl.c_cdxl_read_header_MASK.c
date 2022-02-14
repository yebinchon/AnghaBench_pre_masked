
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ctx_flags; int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int video_stream_index; int audio_stream_index; int filesize; scalar_t__ read_chunk; scalar_t__ framerate; int fps; } ;
typedef TYPE_1__ CDXLDemuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2)
{
    CDXLDemuxContext *VAR_3 = VAR_2->priv_data;
    int VAR_4;

    if (VAR_3->framerate && (VAR_4 = FUNC_1(&VAR_3->fps, VAR_3->framerate)) < 0) {
        FUNC_0(VAR_2, VAR_1,
               "Could not parse framerate: %s.\n", VAR_3->framerate);
        return VAR_4;
    }

    VAR_3->read_chunk = 0;
    VAR_3->video_stream_index = -1;
    VAR_3->audio_stream_index = -1;

    VAR_3->filesize = FUNC_2(VAR_2->pb);

    VAR_2->ctx_flags |= VAR_0;

    return 0;
}
