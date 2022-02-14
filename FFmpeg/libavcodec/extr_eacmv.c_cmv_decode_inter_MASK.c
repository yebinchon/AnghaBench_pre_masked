
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {unsigned char** data; int* linesize; } ;
struct TYPE_11__ {TYPE_3__* avctx; TYPE_2__* last_frame; TYPE_1__* last2_frame; } ;
struct TYPE_10__ {int width; int height; } ;
struct TYPE_9__ {int * linesize; scalar_t__* data; } ;
struct TYPE_8__ {int * linesize; scalar_t__* data; } ;
typedef TYPE_4__ CmvContext ;
typedef TYPE_5__ AVFrame ;


 int FUNC_0 (unsigned char*,int,scalar_t__,int ,int,int,int,int,int,int) ;
 int FUNC_1 (unsigned char*,int const*,int) ;

__attribute__((used)) static void FUNC_2(CmvContext *VAR_0, AVFrame *VAR_1, const uint8_t *VAR_2,
                             const uint8_t *VAR_3)
{
    const uint8_t *VAR_4 = VAR_2 + (VAR_0->avctx->width*VAR_0->avctx->height/16);
    int VAR_5,VAR_6,VAR_7;

    VAR_7 = 0;
    for(VAR_6=0; VAR_6<VAR_0->avctx->height/4; VAR_6++)
    for(VAR_5=0; VAR_5<VAR_0->avctx->width/4 && VAR_3 - VAR_2 > VAR_7; VAR_5++) {
        if (VAR_2[VAR_7]==0xFF) {
            unsigned char *VAR_8 = VAR_1->data[0] + (VAR_6*4)*VAR_1->linesize[0] + VAR_5*4;
            if (VAR_4+16<VAR_3 && *VAR_4==0xFF) {
                VAR_4++;
                FUNC_1(VAR_8, VAR_4, 4);
                FUNC_1(VAR_8 + VAR_1->linesize[0], VAR_4+4, 4);
                FUNC_1(VAR_8 + 2 * VAR_1->linesize[0], VAR_4+8, 4);
                FUNC_1(VAR_8 + 3 * VAR_1->linesize[0], VAR_4+12, 4);
                VAR_4+=16;
            }else if(VAR_4<VAR_3) {
                int VAR_9 = (*VAR_4 & 0xF) - 7;
                int VAR_10 = ((*VAR_4 >> 4)) - 7;
                if (VAR_0->last2_frame->data[0])
                    FUNC_0(VAR_1->data[0], VAR_1->linesize[0],
                                VAR_0->last2_frame->data[0], VAR_0->last2_frame->linesize[0],
                                VAR_5*4, VAR_6*4, VAR_9, VAR_10, VAR_0->avctx->width, VAR_0->avctx->height);
                VAR_4++;
            }
        }else{
            int VAR_11 = (VAR_2[VAR_7] & 0xF) - 7;
            int VAR_12 = ((VAR_2[VAR_7] >> 4)) - 7;
            if (VAR_0->last_frame->data[0])
                FUNC_0(VAR_1->data[0], VAR_1->linesize[0],
                            VAR_0->last_frame->data[0], VAR_0->last_frame->linesize[0],
                            VAR_5*4, VAR_6*4, VAR_11, VAR_12, VAR_0->avctx->width, VAR_0->avctx->height);
        }
        VAR_7++;
    }
}
