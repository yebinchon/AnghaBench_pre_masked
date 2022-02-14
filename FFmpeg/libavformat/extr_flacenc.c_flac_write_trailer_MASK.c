
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct AVFormatContext {TYPE_2__** streams; TYPE_3__* priv_data; TYPE_4__* pb; } ;
typedef int int64_t ;
struct TYPE_12__ {int seekable; } ;
struct TYPE_11__ {size_t audio_stream_idx; int write_header; scalar_t__ waiting_pics; int * streaminfo; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int * extradata; } ;
typedef TYPE_3__ FlacMuxerContext ;
typedef TYPE_4__ AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct AVFormatContext*,int ,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *,int ) ;
 int FUNC_5 (struct AVFormatContext*) ;

__attribute__((used)) static int FUNC_6(struct AVFormatContext *VAR_4)
{
    AVIOContext *VAR_5 = VAR_4->pb;
    int64_t VAR_6;
    FlacMuxerContext *VAR_7 = VAR_4->priv_data;
    uint8_t *VAR_8 = VAR_7->streaminfo ? VAR_7->streaminfo :
                                          VAR_4->streams[VAR_7->audio_stream_idx]->codecpar->extradata;

    if (VAR_7->waiting_pics) {
        FUNC_0(VAR_4, VAR_1, "No packets were sent for some of the "
               "attached pictures.\n");
        FUNC_5(VAR_4);
    }

    if (!VAR_7->write_header || !VAR_8)
        return 0;

    if (VAR_5->seekable & VAR_0) {

        VAR_6 = FUNC_3(VAR_5);
        FUNC_2(VAR_5, 8, VAR_3);
        FUNC_4(VAR_5, VAR_8, VAR_2);
        FUNC_2(VAR_5, VAR_6, VAR_3);
        FUNC_1(VAR_5);
    } else {
        FUNC_0(VAR_4, VAR_1, "unable to rewrite FLAC header.\n");
    }

    return 0;
}
