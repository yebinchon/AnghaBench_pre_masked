
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_13__ {size_t currentframe; size_t totalframes; int finalframeblocks; int blocksperframe; TYPE_1__* frames; } ;
struct TYPE_12__ {int pb; TYPE_4__* priv_data; } ;
struct TYPE_11__ {scalar_t__ data; scalar_t__ size; scalar_t__ stream_index; int pts; } ;
struct TYPE_10__ {scalar_t__ size; int skip; int pts; int pos; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ APEContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(AVFormatContext * VAR_6, AVPacket * VAR_7)
{
    int VAR_8;
    int VAR_9;
    APEContext *VAR_10 = VAR_6->priv_data;
    uint32_t VAR_11 = 8;

    if (FUNC_5(VAR_6->pb))
        return VAR_0;
    if (VAR_10->currentframe >= VAR_10->totalframes)
        return VAR_0;

    if (FUNC_7(VAR_6->pb, VAR_10->frames[VAR_10->currentframe].pos, VAR_5) < 0)
        return FUNC_0(VAR_2);


    if (VAR_10->currentframe == (VAR_10->totalframes - 1))
        VAR_9 = VAR_10->finalframeblocks;
    else
        VAR_9 = VAR_10->blocksperframe;

    if (VAR_10->frames[VAR_10->currentframe].size <= 0 ||
        VAR_10->frames[VAR_10->currentframe].size > VAR_4 - VAR_11) {
        FUNC_2(VAR_6, VAR_1, "invalid packet size: %d\n",
               VAR_10->frames[VAR_10->currentframe].size);
        VAR_10->currentframe++;
        return FUNC_0(VAR_2);
    }

    if (FUNC_3(VAR_7, VAR_10->frames[VAR_10->currentframe].size + VAR_11) < 0)
        return FUNC_0(VAR_3);

    FUNC_1(VAR_7->data , VAR_9);
    FUNC_1(VAR_7->data + 4, VAR_10->frames[VAR_10->currentframe].skip);
    VAR_8 = FUNC_6(VAR_6->pb, VAR_7->data + VAR_11, VAR_10->frames[VAR_10->currentframe].size);
    if (VAR_8 < 0) {
        FUNC_4(VAR_7);
        return VAR_8;
    }

    VAR_7->pts = VAR_10->frames[VAR_10->currentframe].pts;
    VAR_7->stream_index = 0;



    VAR_7->size = VAR_8 + VAR_11;

    VAR_10->currentframe++;

    return 0;
}
