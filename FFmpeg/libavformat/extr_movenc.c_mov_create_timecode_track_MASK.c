
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_20__ {TYPE_4__** streams; TYPE_2__* priv_data; } ;
struct TYPE_19__ {int stream_index; int size; int data; int flags; } ;
struct TYPE_18__ {int avg_frame_rate; } ;
struct TYPE_17__ {int flags; int start; } ;
struct TYPE_16__ {TYPE_1__* tracks; int mode; } ;
struct TYPE_15__ {int src_track; TYPE_4__* st; int tag; TYPE_13__* par; int timecode_flags; int timescale; int mode; } ;
struct TYPE_14__ {int codec_tag; int codec_type; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ MOVMuxContext ;
typedef TYPE_3__ AVTimecode ;
typedef TYPE_4__ AVStream ;
typedef int AVRational ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (char,char,char,char) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 TYPE_13__* FUNC_6 () ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5, int VAR_6, int VAR_7, AVTimecode VAR_8)
{
    int VAR_9;
    MOVMuxContext *VAR_10 = VAR_5->priv_data;
    MOVTrack *VAR_11 = &VAR_10->tracks[VAR_6];
    AVStream *VAR_12 = VAR_5->streams[VAR_7];
    AVPacket VAR_13 = {.stream_index = VAR_6, .flags = VAR_1, .size = 4};
    AVRational VAR_14 = FUNC_8(VAR_5, VAR_12);


    VAR_11->mode = VAR_10->mode;
    VAR_11->tag = FUNC_2('t','m','c','d');
    VAR_11->src_track = VAR_7;
    VAR_11->timescale = VAR_10->tracks[VAR_7].timescale;
    if (VAR_8.flags & VAR_2)
        VAR_11->timecode_flags |= VAR_4;


    VAR_11->st = VAR_12;


    VAR_11->par = FUNC_6();
    if (!VAR_11->par)
        return FUNC_0(VAR_3);
    VAR_11->par->codec_type = VAR_0;
    VAR_11->par->codec_tag = VAR_11->tag;
    VAR_11->st->avg_frame_rate = FUNC_4(VAR_14);


    VAR_13.data = FUNC_5(VAR_13.size);
    if (!VAR_13.data)
        return FUNC_0(VAR_3);
    FUNC_1(VAR_13.data, VAR_8.start);
    VAR_9 = FUNC_7(VAR_5, &VAR_13);
    FUNC_3(VAR_13.data);
    return VAR_9;
}
