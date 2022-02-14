
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_12__ {int height; int width; } ;
struct TYPE_11__ {int const* linesize; scalar_t__* data; } ;
struct TYPE_9__ {int const w; int* data; int h; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1, const AVFrame *VAR_2, opj_image_t *VAR_3)
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    int *VAR_7;
    int VAR_8;
    const int VAR_9 = VAR_3->numcomps;
    uint16_t *VAR_10 = (uint16_t*)VAR_2->data[0];

    for (VAR_4 = 0; VAR_4 < VAR_9; ++VAR_4) {
        if (VAR_3->comps[VAR_4].w > VAR_2->linesize[0] / VAR_9) {
            FUNC_0(VAR_1, VAR_0, "Error: frame's linesize is too small for the image\n");
            return 0;
        }
    }

    for (VAR_4 = 0; VAR_4 < VAR_9; ++VAR_4) {
        for (VAR_6 = 0; VAR_6 < VAR_1->height; ++VAR_6) {
            VAR_7 = VAR_3->comps[VAR_4].data + VAR_6 * VAR_3->comps[VAR_4].w;
            VAR_8 = VAR_6 * (VAR_2->linesize[0] / 2) + VAR_4;
            for (VAR_5 = 0; VAR_5 < VAR_1->width; ++VAR_5) {
                VAR_7[VAR_5] = VAR_10[VAR_8];
                VAR_8 += VAR_9;
            }
            for (; VAR_5 < VAR_3->comps[VAR_4].w; ++VAR_5) {
                VAR_7[VAR_5] = VAR_7[VAR_5 - 1];
            }
        }
        for (; VAR_6 < VAR_3->comps[VAR_4].h; ++VAR_6) {
            VAR_7 = VAR_3->comps[VAR_4].data + VAR_6 * VAR_3->comps[VAR_4].w;
            for (VAR_5 = 0; VAR_5 < VAR_3->comps[VAR_4].w; ++VAR_5) {
                VAR_7[VAR_5] = VAR_7[VAR_5 - (int)VAR_3->comps[VAR_4].w];
            }
        }
    }

    return 1;
}
