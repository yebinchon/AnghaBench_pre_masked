
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_27__ {TYPE_3__* priv_data; } ;
struct TYPE_26__ {size_t stream_index; scalar_t__ pts; scalar_t__ dts; } ;
struct TYPE_25__ {scalar_t__ cur_dts; int time_base; } ;
struct TYPE_24__ {TYPE_1__* cur_file; TYPE_16__* avf; TYPE_1__* files; scalar_t__ eof; } ;
struct TYPE_23__ {size_t out_stream_index; } ;
struct TYPE_22__ {scalar_t__ start_time; scalar_t__ file_inpoint; scalar_t__ duration; scalar_t__ next_dts; int metadata; TYPE_2__* streams; } ;
struct TYPE_21__ {TYPE_4__** streams; } ;
typedef TYPE_2__ ConcatStream ;
typedef TYPE_3__ ConcatContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (TYPE_6__*,int ,char*,unsigned int,size_t,int ,int ,...) ;
 int * FUNC_3 (TYPE_5__*,int ,int) ;
 char* FUNC_4 (int ,int*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_16__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int *) ;
 int FUNC_10 (TYPE_6__*,TYPE_2__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (TYPE_6__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_7, AVPacket *VAR_8)
{
    ConcatContext *VAR_9 = VAR_7->priv_data;
    int VAR_10;
    int64_t VAR_11;
    ConcatStream *VAR_12;
    AVStream *VAR_13;

    if (VAR_9->eof)
        return VAR_0;

    if (!VAR_9->avf)
        return FUNC_0(VAR_5);

    while (1) {
        VAR_10 = FUNC_6(VAR_9->avf, VAR_8);
        if (VAR_10 == VAR_0) {
            if ((VAR_10 = FUNC_13(VAR_7)) < 0)
                return VAR_10;
            continue;
        }
        if (VAR_10 < 0)
            return VAR_10;
        if ((VAR_10 = FUNC_11(VAR_7)) < 0) {
            FUNC_5(VAR_8);
            return VAR_10;
        }
        if (FUNC_14(VAR_9, VAR_8)) {
            FUNC_5(VAR_8);
            if ((VAR_10 = FUNC_13(VAR_7)) < 0)
                return VAR_10;
            continue;
        }
        VAR_12 = &VAR_9->cur_file->streams[VAR_8->stream_index];
        if (VAR_12->out_stream_index < 0) {
            FUNC_5(VAR_8);
            continue;
        }
        break;
    }
    if ((VAR_10 = FUNC_10(VAR_7, VAR_12, VAR_8)))
        return VAR_10;

    VAR_13 = VAR_9->avf->streams[VAR_8->stream_index];
    FUNC_2(VAR_7, VAR_1, "file:%d stream:%d pts:%s pts_time:%s dts:%s dts_time:%s",
           (unsigned)(VAR_9->cur_file - VAR_9->files), VAR_8->stream_index,
           FUNC_8(VAR_8->pts), FUNC_9(VAR_8->pts, &VAR_13->time_base),
           FUNC_8(VAR_8->dts), FUNC_9(VAR_8->dts, &VAR_13->time_base));

    VAR_11 = FUNC_7(VAR_9->cur_file->start_time - VAR_9->cur_file->file_inpoint,
                         VAR_4,
                         VAR_9->avf->streams[VAR_8->stream_index]->time_base);
    if (VAR_8->pts != VAR_2)
        VAR_8->pts += VAR_11;
    if (VAR_8->dts != VAR_2)
        VAR_8->dts += VAR_11;
    FUNC_2(VAR_7, VAR_1, " -> pts:%s pts_time:%s dts:%s dts_time:%s\n",
           FUNC_8(VAR_8->pts), FUNC_9(VAR_8->pts, &VAR_13->time_base),
           FUNC_8(VAR_8->dts), FUNC_9(VAR_8->dts, &VAR_13->time_base));
    if (VAR_9->cur_file->metadata) {
        uint8_t* VAR_14;
        int VAR_15;
        char* VAR_16 = FUNC_4(VAR_9->cur_file->metadata, &VAR_15);
        if (!VAR_16)
            return FUNC_0(VAR_6);
        if (!(VAR_14 = FUNC_3(VAR_8, VAR_3, VAR_15))) {
            FUNC_1(&VAR_16);
            return FUNC_0(VAR_6);
        }
        FUNC_12(VAR_14, VAR_16, VAR_15);
        FUNC_1(&VAR_16);
    }

    if (VAR_9->cur_file->duration == VAR_2 && VAR_13->cur_dts != VAR_2) {
        int64_t VAR_17 = FUNC_7(VAR_13->cur_dts, VAR_13->time_base, VAR_4);
        if (VAR_9->cur_file->next_dts == VAR_2 || VAR_17 > VAR_9->cur_file->next_dts) {
            VAR_9->cur_file->next_dts = VAR_17;
        }
    }

    VAR_8->stream_index = VAR_12->out_stream_index;
    return VAR_10;
}
