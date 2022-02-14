
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_15__ {TYPE_3__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_14__ {int pos; scalar_t__ stream_index; int flags; int size; int data; int duration; } ;
struct TYPE_13__ {TYPE_1__* codecpar; } ;
struct TYPE_12__ {int body_end; int body_size; int body_pos; } ;
struct TYPE_11__ {scalar_t__ codec_tag; scalar_t__ codec_type; int block_align; } ;
typedef TYPE_2__ IffDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_12,
                           AVPacket *VAR_13)
{
    IffDemuxContext *VAR_14 = VAR_12->priv_data;
    AVIOContext *VAR_15 = VAR_12->pb;
    AVStream *VAR_16 = VAR_12->streams[0];
    int VAR_17;
    int64_t VAR_18 = FUNC_7(VAR_15);

    if (FUNC_3(VAR_15))
        return VAR_0;
    if (VAR_16->codecpar->codec_tag != VAR_5 && VAR_18 >= VAR_14->body_end)
        return VAR_0;

    if (VAR_16->codecpar->codec_type == VAR_2) {
        if (VAR_16->codecpar->codec_tag == VAR_6 || VAR_16->codecpar->codec_tag == VAR_10) {
            VAR_17 = FUNC_2(VAR_15, VAR_13, FUNC_0(VAR_14->body_end - VAR_18, 1024 * VAR_16->codecpar->block_align));
        } else if (VAR_16->codecpar->codec_tag == VAR_7) {
            return FUNC_9(VAR_12, VAR_13);
        } else {
            if (VAR_14->body_size > VAR_11)
                return VAR_1;
            VAR_17 = FUNC_2(VAR_15, VAR_13, VAR_14->body_size);
        }
    } else if (VAR_16->codecpar->codec_type == VAR_3 &&
               VAR_16->codecpar->codec_tag == VAR_5) {
        uint64_t VAR_19, VAR_20;
        uint32_t VAR_21, VAR_22;

        while (!FUNC_3(VAR_15)) {
            if (FUNC_3(VAR_15))
                return VAR_0;

            VAR_20 = FUNC_7(VAR_15);
            VAR_21 = FUNC_5(VAR_15);
            VAR_19 = FUNC_4(VAR_15);
            VAR_22 = FUNC_5(VAR_15);

            if (VAR_21 == VAR_8 &&
                VAR_22 == VAR_9) {
                FUNC_6(VAR_15, -4);
                break;
            } else if (VAR_21 == VAR_8 &&
                       VAR_22 == VAR_5) {
                continue;
            } else {
                FUNC_6(VAR_15, VAR_19);
            }
        }
        VAR_17 = FUNC_2(VAR_15, VAR_13, VAR_19);
        VAR_13->pos = VAR_20;
        VAR_13->duration = FUNC_8(VAR_13->data, VAR_13->size);
        if (VAR_18 == 12)
            VAR_13->flags |= VAR_4;
    } else if (VAR_16->codecpar->codec_type == VAR_3 &&
               VAR_16->codecpar->codec_tag != VAR_5) {
        VAR_17 = FUNC_2(VAR_15, VAR_13, VAR_14->body_size);
        VAR_13->pos = VAR_18;
        if (VAR_18 == VAR_14->body_pos)
            VAR_13->flags |= VAR_4;
    } else {
        FUNC_1(0);
    }

    if (VAR_17 < 0)
        return VAR_17;
    VAR_13->stream_index = 0;
    return VAR_17;
}
