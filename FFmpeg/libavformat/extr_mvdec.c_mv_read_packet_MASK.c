
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_19__ {size_t nb_streams; TYPE_2__** streams; TYPE_5__* pb; TYPE_1__* priv_data; } ;
struct TYPE_18__ {int seekable; } ;
struct TYPE_17__ {scalar_t__ pos; int timestamp; int size; } ;
struct TYPE_16__ {size_t stream_index; int flags; int pts; } ;
struct TYPE_15__ {int nb_index_entries; TYPE_4__* index_entries; } ;
struct TYPE_14__ {size_t stream_index; int* frame; size_t eof_count; } ;
typedef TYPE_1__ MvContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVIndexEntry ;
typedef TYPE_5__ AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    MvContext *VAR_8 = VAR_6->priv_data;
    AVIOContext *VAR_9 = VAR_6->pb;
    AVStream *VAR_10 = VAR_6->streams[VAR_8->stream_index];
    const AVIndexEntry *VAR_11;
    int VAR_12 = VAR_8->frame[VAR_8->stream_index];
    int64_t VAR_13;
    uint64_t VAR_14;

    if (VAR_12 < VAR_10->nb_index_entries) {
        VAR_11 = &VAR_10->index_entries[VAR_12];
        VAR_14 = FUNC_4(VAR_9);
        if (VAR_11->pos > VAR_14)
            FUNC_3(VAR_9, VAR_11->pos - VAR_14);
        else if (VAR_11->pos < VAR_14) {
            if (!(VAR_9->seekable & VAR_1))
                return FUNC_0(VAR_4);
            VAR_13 = FUNC_2(VAR_9, VAR_11->pos, VAR_5);
            if (VAR_13 < 0)
                return VAR_13;
        }
        VAR_13 = FUNC_1(VAR_9, VAR_7, VAR_11->size);
        if (VAR_13 < 0)
            return VAR_13;

        VAR_7->stream_index = VAR_8->stream_index;
        VAR_7->pts = VAR_11->timestamp;
        VAR_7->flags |= VAR_2;

        VAR_8->frame[VAR_8->stream_index]++;
        VAR_8->eof_count = 0;
    } else {
        VAR_8->eof_count++;
        if (VAR_8->eof_count >= VAR_6->nb_streams)
            return VAR_0;


        return FUNC_0(VAR_3);
    }

    VAR_8->stream_index++;
    if (VAR_8->stream_index >= VAR_6->nb_streams)
        VAR_8->stream_index = 0;

    return 0;
}
