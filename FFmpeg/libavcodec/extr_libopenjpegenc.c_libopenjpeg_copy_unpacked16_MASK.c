
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
struct TYPE_12__ {int width; int height; } ;
struct TYPE_11__ {int* linesize; scalar_t__* data; } ;
struct TYPE_9__ {int w; int dx; int dy; int* data; int h; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1, const AVFrame *VAR_2, opj_image_t *VAR_3)
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;
    int *VAR_9;
    int VAR_10;
    const int VAR_11 = VAR_3->numcomps;
    uint16_t *VAR_12;

    for (VAR_4 = 0; VAR_4 < VAR_11; ++VAR_4) {
        if (VAR_3->comps[VAR_4].w > VAR_2->linesize[VAR_4]) {
            FUNC_0(VAR_1, VAR_0, "Error: frame's linesize is too small for the image\n");
            return 0;
        }
    }

    for (VAR_4 = 0; VAR_4 < VAR_11; ++VAR_4) {
        VAR_7 = (VAR_1->width + VAR_3->comps[VAR_4].dx - 1) / VAR_3->comps[VAR_4].dx;
        VAR_8 = (VAR_1->height + VAR_3->comps[VAR_4].dy - 1) / VAR_3->comps[VAR_4].dy;
        VAR_12 = (uint16_t *)VAR_2->data[VAR_4];
        for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6) {
            VAR_9 = VAR_3->comps[VAR_4].data + VAR_6 * VAR_3->comps[VAR_4].w;
            VAR_10 = VAR_6 * (VAR_2->linesize[VAR_4] / 2);
            for (VAR_5 = 0; VAR_5 < VAR_7; ++VAR_5)
                VAR_9[VAR_5] = VAR_12[VAR_10++];
            for (; VAR_5 < VAR_3->comps[VAR_4].w; ++VAR_5) {
                VAR_9[VAR_5] = VAR_9[VAR_5 - 1];
            }
        }
        for (; VAR_6 < VAR_3->comps[VAR_4].h; ++VAR_6) {
            VAR_9 = VAR_3->comps[VAR_4].data + VAR_6 * VAR_3->comps[VAR_4].w;
            for (VAR_5 = 0; VAR_5 < VAR_3->comps[VAR_4].w; ++VAR_5) {
                VAR_9[VAR_5] = VAR_9[VAR_5 - (int)VAR_3->comps[VAR_4].w];
            }
        }
    }

    return 1;
}
