
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int * linesize; int const** data; } ;
struct TYPE_6__ {scalar_t__ big_endian; } ;
typedef TYPE_1__ DPXContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_0, const AVFrame *VAR_1, uint8_t *VAR_2)
{
    DPXContext *VAR_3 = VAR_0->priv_data;
    const uint8_t *VAR_4[3] = {VAR_1->data[0], VAR_1->data[1], VAR_1->data[2]};
    int VAR_5, VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_0->height; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_0->width; VAR_5++) {
            int VAR_8;
            if (VAR_3->big_endian) {
                VAR_8 = (FUNC_0(VAR_4[0] + 2*VAR_5) << 12)
                      | (FUNC_0(VAR_4[1] + 2*VAR_5) << 2)
                      | ((unsigned)FUNC_0(VAR_4[2] + 2*VAR_5) << 22);
            } else {
                VAR_8 = (FUNC_1(VAR_4[0] + 2*VAR_5) << 12)
                      | (FUNC_1(VAR_4[1] + 2*VAR_5) << 2)
                      | ((unsigned)FUNC_1(VAR_4[2] + 2*VAR_5) << 22);
            }
            FUNC_2(VAR_2, VAR_8);
            VAR_2 += 4;
        }
        for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
            VAR_4[VAR_7] += VAR_1->linesize[VAR_7];
    }
}
