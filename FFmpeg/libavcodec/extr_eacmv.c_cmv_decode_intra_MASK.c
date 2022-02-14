
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {unsigned char** data; int * linesize; } ;
struct TYPE_7__ {TYPE_1__* avctx; } ;
struct TYPE_6__ {int height; int width; } ;
typedef TYPE_2__ CmvContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (unsigned char*,int const*,int) ;

__attribute__((used)) static void FUNC_1(CmvContext * VAR_0, AVFrame *VAR_1,
                             const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    unsigned char *VAR_4 = VAR_1->data[0];
    int VAR_5;

    for (VAR_5=0; VAR_5 < VAR_0->avctx->height && VAR_3 - VAR_2 >= VAR_0->avctx->width; VAR_5++) {
        FUNC_0(VAR_4, VAR_2, VAR_0->avctx->width);
        VAR_4 += VAR_1->linesize[0];
        VAR_2 += VAR_0->avctx->width;
    }
}
