
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int extradata_size; int* extradata; } ;
struct TYPE_9__ {int width; int height; TYPE_4__* avctx; } ;
struct TYPE_11__ {int max_rpr; int orig_width; int orig_height; TYPE_1__ s; } ;
struct TYPE_10__ {int type; int width; int height; void* start; void* pts; void* quant; } ;
typedef TYPE_2__ SliceInfo ;
typedef TYPE_3__ RV34DecContext ;
typedef int GetBitContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(RV34DecContext *VAR_3, GetBitContext *VAR_4, SliceInfo *VAR_5)
{
    AVCodecContext *VAR_6 = VAR_3->s.avctx;
    int VAR_7;
    int VAR_8 = VAR_3->s.width, VAR_9 = VAR_3->s.height;
    int VAR_10;
    int VAR_11;

    FUNC_6(VAR_5, 0, sizeof(SliceInfo));
    if(FUNC_4(VAR_4, 3))
        return -1;
    VAR_5->type = FUNC_4(VAR_4, 2);
    if(VAR_5->type == 1) VAR_5->type = 0;
    if(FUNC_5(VAR_4))
        return -1;
    VAR_5->quant = FUNC_4(VAR_4, 5);
    FUNC_7(VAR_4);
    VAR_5->pts = FUNC_4(VAR_4, 13);
    VAR_11 = FUNC_4(VAR_4, FUNC_2(VAR_3->max_rpr) + 1);
    if(VAR_11){
        if (VAR_11 > VAR_3->max_rpr) {
            FUNC_1(VAR_6, VAR_1, "rpr too large\n");
            return VAR_0;
        }

        if (VAR_6->extradata_size < VAR_11 * 2 + 8) {
            FUNC_1(VAR_6, VAR_1,
                   "Insufficient extradata - need at least %d bytes, got %d\n",
                   8 + VAR_11 * 2, VAR_6->extradata_size);
            return FUNC_0(VAR_2);
        }

        VAR_8 = VAR_3->s.avctx->extradata[6 + VAR_11*2] << 2;
        VAR_9 = VAR_3->s.avctx->extradata[7 + VAR_11*2] << 2;
    } else {
        VAR_8 = VAR_3->orig_width;
        VAR_9 = VAR_3->orig_height;
    }
    VAR_5->width = VAR_8;
    VAR_5->height = VAR_9;
    VAR_10 = ((VAR_8 + 15) >> 4) * ((VAR_9 + 15) >> 4);
    VAR_7 = FUNC_3(VAR_4, VAR_10);
    VAR_5->start = FUNC_4(VAR_4, VAR_7);
    FUNC_7(VAR_4);
    return 0;
}
