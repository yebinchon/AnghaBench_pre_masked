
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct aom_image {int d_w; int d_h; int x_chroma_shift; int y_chroma_shift; int* stride; scalar_t__* planes; } ;
struct TYPE_6__ {int* linesize; int ** data; int format; } ;
struct TYPE_5__ {int nb_components; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVFrame ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(AVFrame *VAR_0, struct aom_image *VAR_1)
{
    const AVPixFmtDescriptor *VAR_2 = FUNC_0(VAR_0->format);
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2->nb_components; VAR_3++) {
        int VAR_4 = VAR_1->d_w;
        int VAR_5 = VAR_1->d_h;
        int VAR_6, VAR_7;

        if (VAR_3) {
            VAR_4 = (VAR_4 + VAR_1->x_chroma_shift) >> VAR_1->x_chroma_shift;
            VAR_5 = (VAR_5 + VAR_1->y_chroma_shift) >> VAR_1->y_chroma_shift;
        }

        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            uint16_t *VAR_8 = (uint16_t *)(VAR_1->planes[VAR_3] + VAR_7 * VAR_1->stride[VAR_3]);
            uint8_t *VAR_9 = VAR_0->data[VAR_3] + VAR_7 * VAR_0->linesize[VAR_3];
            for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
                *VAR_9++ = *VAR_8++;
        }
    }
}
