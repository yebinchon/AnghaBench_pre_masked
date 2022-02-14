
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int * linesize; int ** data; } ;
struct TYPE_6__ {scalar_t__ big_endian; } ;
typedef TYPE_1__ DPXContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_0, const AVFrame *VAR_1,
                               uint8_t *VAR_2)
{
    DPXContext *VAR_3 = VAR_0->priv_data;
    const uint8_t *VAR_4 = VAR_1->data[0];
    int VAR_5, VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0->height; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_0->width; VAR_5++) {
            int VAR_7;
            if (VAR_3->big_endian) {
                VAR_7 = ((FUNC_0(VAR_4 + 6*VAR_5 + 4) & 0xFFC0U) >> 4)
                      | ((FUNC_0(VAR_4 + 6*VAR_5 + 2) & 0xFFC0U) << 6)
                      | ((FUNC_0(VAR_4 + 6*VAR_5 + 0) & 0xFFC0U) << 16);
            } else {
                VAR_7 = ((FUNC_1(VAR_4 + 6*VAR_5 + 4) & 0xFFC0U) >> 4)
                      | ((FUNC_1(VAR_4 + 6*VAR_5 + 2) & 0xFFC0U) << 6)
                      | ((FUNC_1(VAR_4 + 6*VAR_5 + 0) & 0xFFC0U) << 16);
            }
            FUNC_2(VAR_2, VAR_7);
            VAR_2 += 4;
        }
        VAR_4 += VAR_1->linesize[0];
    }
}
