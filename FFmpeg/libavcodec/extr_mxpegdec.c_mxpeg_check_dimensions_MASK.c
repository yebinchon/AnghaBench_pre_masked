
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__* linesize; scalar_t__* data; } ;
struct TYPE_10__ {int width; int height; int avctx; TYPE_1__* picture_ptr; } ;
struct TYPE_9__ {int mb_width; int mb_height; } ;
struct TYPE_8__ {scalar_t__* linesize; int * data; } ;
typedef TYPE_2__ MXpegDecodeContext ;
typedef TYPE_3__ MJpegDecodeContext ;
typedef TYPE_4__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_2(MXpegDecodeContext *VAR_3, MJpegDecodeContext *VAR_4,
                                  AVFrame *VAR_5)
{
    if ((VAR_4->width + 0x0F)>>4 != VAR_3->mb_width ||
        (VAR_4->height + 0x0F)>>4 != VAR_3->mb_height) {
        FUNC_1(VAR_4->avctx, VAR_0,
               "Picture dimensions stored in SOF and MXM mismatch\n");
        return FUNC_0(VAR_1);
    }

    if (VAR_5->data[0]) {
        int VAR_6;
        for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
            if ( (!VAR_5->data[VAR_6] ^ !VAR_4->picture_ptr->data[VAR_6]) ||
                 VAR_5->linesize[VAR_6] != VAR_4->picture_ptr->linesize[VAR_6]) {
                FUNC_1(VAR_4->avctx, VAR_0,
                       "Dimensions of current and reference picture mismatch\n");
                return FUNC_0(VAR_1);
            }
        }
    }

    return 0;
}
