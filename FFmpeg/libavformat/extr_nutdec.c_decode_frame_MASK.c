
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_18__ {TYPE_1__** streams; int * pb; } ;
struct TYPE_17__ {void* pos; int size; int stream_index; scalar_t__ pts; int flags; scalar_t__ data; } ;
struct TYPE_16__ {scalar_t__* header_len; scalar_t__* header; TYPE_2__* stream; TYPE_5__* avf; } ;
struct TYPE_15__ {int last_flags; scalar_t__ skip_until_key_frame; } ;
struct TYPE_14__ {int discard; scalar_t__ last_IP_pts; } ;
typedef TYPE_2__ StreamContext ;
typedef TYPE_3__ NUTContext ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,scalar_t__*,int*,size_t*,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int *,TYPE_4__*,int,void*) ;

__attribute__((used)) static int FUNC_9(NUTContext *VAR_8, AVPacket *VAR_9, int VAR_10)
{
    AVFormatContext *VAR_11 = VAR_8->avf;
    AVIOContext *VAR_12 = VAR_11->pb;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    int64_t VAR_17, VAR_18;
    StreamContext *VAR_19;
    uint8_t VAR_20;

    VAR_13 = FUNC_6(VAR_8, &VAR_17, &VAR_14, &VAR_20, VAR_10);
    if (VAR_13 < 0)
        return VAR_13;

    VAR_19 = &VAR_8->stream[VAR_14];

    if (VAR_19->last_flags & VAR_6)
        VAR_19->skip_until_key_frame = 0;

    VAR_15 = VAR_11->streams[VAR_14]->discard;
    VAR_18 = VAR_11->streams[VAR_14]->last_IP_pts;
    if ((VAR_15 >= VAR_2 && !(VAR_19->last_flags & VAR_6)) ||
        (VAR_15 >= VAR_1 && VAR_18 != VAR_4 &&
         VAR_18 > VAR_17) ||
        VAR_15 >= VAR_0 ||
        VAR_19->skip_until_key_frame) {
        FUNC_4(VAR_12, VAR_13);
        return 1;
    }

    VAR_16 = FUNC_0(VAR_9, VAR_13 + VAR_8->header_len[VAR_20]);
    if (VAR_16 < 0)
        return VAR_16;
    if (VAR_8->header[VAR_20])
        FUNC_7(VAR_9->data, VAR_8->header[VAR_20], VAR_8->header_len[VAR_20]);
    VAR_9->pos = FUNC_5(VAR_12);
    if (VAR_19->last_flags & VAR_7) {
        int VAR_21;
        if (FUNC_8(VAR_11, VAR_12, VAR_9, 0, VAR_9->pos + VAR_13) < 0) {
            VAR_16 = VAR_3;
            goto fail;
        }
        if (FUNC_8(VAR_11, VAR_12, VAR_9, 1, VAR_9->pos + VAR_13) < 0) {
            VAR_16 = VAR_3;
            goto fail;
        }
        VAR_21 = FUNC_5(VAR_12) - VAR_9->pos;
        VAR_13 -= VAR_21;
        VAR_9->size -= VAR_21;
    }

    VAR_16 = FUNC_3(VAR_12, VAR_9->data + VAR_8->header_len[VAR_20], VAR_13);
    if (VAR_16 != VAR_13) {
        if (VAR_16 < 0)
            goto fail;
    }
    FUNC_2(VAR_9, VAR_8->header_len[VAR_20] + VAR_16);

    VAR_9->stream_index = VAR_14;
    if (VAR_19->last_flags & VAR_6)
        VAR_9->flags |= VAR_5;
    VAR_9->pts = VAR_17;

    return 0;
fail:
    FUNC_1(VAR_9);
    return VAR_16;
}
