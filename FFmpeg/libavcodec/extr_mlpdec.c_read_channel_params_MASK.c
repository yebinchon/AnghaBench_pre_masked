
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int huff_lsbs; void* codebook; int huff_offset; TYPE_3__* filter_params; } ;
struct TYPE_9__ {int order; scalar_t__ shift; } ;
struct TYPE_8__ {int avctx; TYPE_1__* substream; } ;
struct TYPE_7__ {int param_presence_flags; TYPE_4__* channel_params; } ;
typedef TYPE_1__ SubStream ;
typedef TYPE_2__ MLPDecodeContext ;
typedef int GetBitContext ;
typedef TYPE_3__ FilterParams ;
typedef TYPE_4__ ChannelParams ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*) ;
 void* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,int *,unsigned int,unsigned int,size_t) ;

__attribute__((used)) static int FUNC_5(MLPDecodeContext *VAR_7, unsigned int VAR_8,
                               GetBitContext *VAR_9, unsigned int VAR_10)
{
    SubStream *VAR_11 = &VAR_7->substream[VAR_8];
    ChannelParams *VAR_12 = &VAR_11->channel_params[VAR_10];
    FilterParams *VAR_13 = &VAR_12->filter_params[VAR_2];
    FilterParams *VAR_14 = &VAR_12->filter_params[VAR_3];
    int VAR_15;

    if (VAR_11->param_presence_flags & VAR_4)
        if (FUNC_2(VAR_9))
            if ((VAR_15 = FUNC_4(VAR_7, VAR_9, VAR_8, VAR_10, VAR_2)) < 0)
                return VAR_15;

    if (VAR_11->param_presence_flags & VAR_6)
        if (FUNC_2(VAR_9))
            if ((VAR_15 = FUNC_4(VAR_7, VAR_9, VAR_8, VAR_10, VAR_3)) < 0)
                return VAR_15;

    if (VAR_13->order + VAR_14->order > 8) {
        FUNC_0(VAR_7->avctx, VAR_1, "Total filter orders too high.\n");
        return VAR_0;
    }

    if (VAR_13->order && VAR_14->order &&
        VAR_13->shift != VAR_14->shift) {
        FUNC_0(VAR_7->avctx, VAR_1,
                "FIR and IIR filters must use the same precision.\n");
        return VAR_0;
    }





    if (!VAR_13->order && VAR_14->order)
        VAR_13->shift = VAR_14->shift;

    if (VAR_11->param_presence_flags & VAR_5)
        if (FUNC_2(VAR_9))
            VAR_12->huff_offset = FUNC_3(VAR_9, 15);

    VAR_12->codebook = FUNC_1(VAR_9, 2);
    VAR_12->huff_lsbs = FUNC_1(VAR_9, 5);

    if (VAR_12->huff_lsbs > 24) {
        FUNC_0(VAR_7->avctx, VAR_1, "Invalid huff_lsbs.\n");
        VAR_12->huff_lsbs = 0;
        return VAR_0;
    }

    return 0;
}
