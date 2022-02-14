
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_25__ {int pb; TYPE_3__* iformat; TYPE_1__* internal; TYPE_4__** streams; } ;
struct TYPE_24__ {scalar_t__ timestamp; int pos; } ;
struct TYPE_23__ {int stream_index; scalar_t__ dts; int flags; } ;
struct TYPE_22__ {int nb_index_entries; TYPE_6__* index_entries; TYPE_2__* codecpar; } ;
struct TYPE_21__ {scalar_t__ (* read_seek ) (TYPE_7__*,int,scalar_t__,int) ;} ;
struct TYPE_20__ {scalar_t__ codec_id; } ;
struct TYPE_19__ {int data_offset; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVIndexEntry ;
typedef TYPE_7__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_7__*,int ,char*,int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_5__*) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_7__*,int,scalar_t__,int) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_5, int VAR_6,
                              int64_t VAR_7, int VAR_8)
{
    int VAR_9;
    int64_t VAR_10;
    AVStream *VAR_11;
    AVIndexEntry *VAR_12;

    VAR_11 = VAR_5->streams[VAR_6];

    VAR_9 = FUNC_2(VAR_11, VAR_7, VAR_8);

    if (VAR_9 < 0 && VAR_11->nb_index_entries &&
        VAR_7 < VAR_11->index_entries[0].timestamp)
        return -1;

    if (VAR_9 < 0 || VAR_9 == VAR_11->nb_index_entries - 1) {
        AVPacket VAR_13;
        int VAR_14 = 0;

        if (VAR_11->nb_index_entries) {
            FUNC_1(VAR_11->index_entries);
            VAR_12 = &VAR_11->index_entries[VAR_11->nb_index_entries - 1];
            if ((VAR_10 = FUNC_6(VAR_5->pb, VAR_12->pos, VAR_4)) < 0)
                return VAR_10;
            FUNC_8(VAR_5, VAR_11, VAR_12->timestamp);
        } else {
            if ((VAR_10 = FUNC_6(VAR_5->pb, VAR_5->internal->data_offset, VAR_4)) < 0)
                return VAR_10;
        }
        for (;;) {
            int VAR_15;
            do {
                VAR_15 = FUNC_5(VAR_5, &VAR_13);
            } while (VAR_15 == FUNC_0(VAR_3));
            if (VAR_15 < 0)
                break;
            if (VAR_6 == VAR_13.stream_index && VAR_13.dts > VAR_7) {
                if (VAR_13.flags & VAR_2) {
                    FUNC_4(&VAR_13);
                    break;
                }
                if (VAR_14++ > 1000 && VAR_11->codecpar->codec_id != VAR_0) {
                    FUNC_3(VAR_5, VAR_1,"seek_frame_generic failed as this stream seems to contain no keyframes after the target timestamp, %d non keyframes found\n", VAR_14);
                    FUNC_4(&VAR_13);
                    break;
                }
            }
            FUNC_4(&VAR_13);
        }
        VAR_9 = FUNC_2(VAR_11, VAR_7, VAR_8);
    }
    if (VAR_9 < 0)
        return -1;

    FUNC_7(VAR_5);
    if (VAR_5->iformat->read_seek)
        if (VAR_5->iformat->read_seek(VAR_5, VAR_6, VAR_7, VAR_8) >= 0)
            return 0;
    VAR_12 = &VAR_11->index_entries[VAR_9];
    if ((VAR_10 = FUNC_6(VAR_5->pb, VAR_12->pos, VAR_4)) < 0)
        return VAR_10;
    FUNC_8(VAR_5, VAR_11, VAR_12->timestamp);

    return 0;
}
