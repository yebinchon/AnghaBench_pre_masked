
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_18__ {int len; } ;
struct TYPE_17__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_16__ {int size; int pts; scalar_t__ data; int flags; scalar_t__ stream_index; } ;
struct TYPE_15__ {int pts; scalar_t__ first_image; } ;
typedef int FITSHeader ;
typedef TYPE_1__ FITSContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVBPrint ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_4__*,char**) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char**) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_1__*,int *,TYPE_4__*,scalar_t__*) ;
 int FUNC_11 (scalar_t__,char*,int) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    int64_t VAR_8, VAR_9;
    uint64_t VAR_10;
    FITSContext *VAR_11 = VAR_6->priv_data;
    FITSHeader VAR_12;
    AVBPrint VAR_13;
    char *VAR_14;

    if (VAR_11->first_image) {
        FUNC_9(&VAR_12, VAR_4);
    } else {
        FUNC_9(&VAR_12, VAR_5);
    }

    FUNC_2(&VAR_13, VAR_3, VAR_0);
    while ((VAR_9 = FUNC_10(VAR_6, VAR_11, &VAR_12, &VAR_13, &VAR_10)) == 0) {
        VAR_8 = FUNC_8(VAR_6->pb, VAR_10);
        if (VAR_8 < 0)
            return VAR_8;

        FUNC_1(&VAR_13, ((void*)0));
        FUNC_2(&VAR_13, VAR_3, VAR_0);
        FUNC_9(&VAR_12, VAR_5);
    }
    if (VAR_9 < 0)
        goto fail;

    if (!FUNC_3(&VAR_13)) {
        VAR_9 = FUNC_0(VAR_2);
        goto fail;
    }


    VAR_9 = FUNC_5(VAR_7, VAR_13.len - 80 + VAR_10);
    if (VAR_9 < 0)
        goto fail;

    VAR_7->stream_index = 0;
    VAR_7->flags |= VAR_1;

    VAR_9 = FUNC_1(&VAR_13, &VAR_14);
    if (VAR_9 < 0) {
        FUNC_6(VAR_7);
        return VAR_9;
    }

    FUNC_11(VAR_7->data, VAR_14 + 80, VAR_13.len - 80);
    VAR_7->size = VAR_13.len - 80;
    FUNC_4(&VAR_14);
    VAR_9 = FUNC_7(VAR_6->pb, VAR_7->data + VAR_7->size, VAR_10);
    if (VAR_9 < 0) {
        FUNC_6(VAR_7);
        return VAR_9;
    }

    VAR_7->size += VAR_9;
    VAR_7->pts = VAR_11->pts;
    VAR_11->pts++;

    return 0;

fail:
    FUNC_1(&VAR_13, ((void*)0));
    return VAR_9;
}
