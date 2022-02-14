
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int width; int height; int* linesize; int ** data; } ;
struct TYPE_8__ {int h_pos; int v_pos; int bytes; int nb_planes; int* planeheight; int* planewidth; int h_speed; int v_speed; TYPE_1__* desc; } ;
struct TYPE_7__ {int log2_chroma_w; int log2_chroma_h; } ;
typedef TYPE_2__ ScrollContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int,int ) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int const*,int const) ;

__attribute__((used)) static void FUNC_3(ScrollContext *VAR_0, AVFrame *VAR_1, AVFrame *VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5[4], VAR_6[4];

    VAR_0->h_pos = FUNC_1(VAR_0->h_pos, VAR_1->width);
    VAR_0->v_pos = FUNC_1(VAR_0->v_pos, VAR_1->height);

    VAR_3 = VAR_0->h_pos;
    VAR_4 = VAR_0->v_pos;

    if (VAR_3 < 0)
        VAR_3 += VAR_1->width;
    if (VAR_4 < 0)
        VAR_4 += VAR_1->height;

    VAR_6[1] = VAR_6[2] = FUNC_0(VAR_4, VAR_0->desc->log2_chroma_h);
    VAR_6[0] = VAR_6[3] = VAR_4;
    VAR_5[1] = VAR_5[2] = FUNC_0(VAR_3, VAR_0->desc->log2_chroma_w) * VAR_0->bytes;
    VAR_5[0] = VAR_5[3] = VAR_3 * VAR_0->bytes;

    for (int VAR_7 = 0; VAR_7 < VAR_0->nb_planes; VAR_7++) {
        const uint8_t *VAR_8 = VAR_1->data[VAR_7];
        uint8_t *VAR_9 = VAR_2->data[VAR_7];
        const int VAR_10 = VAR_0->planeheight[VAR_7];
        const int VAR_11 = VAR_0->planewidth[VAR_7] * VAR_0->bytes;

        for (int VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
            int VAR_13 = (VAR_12 + VAR_6[VAR_7]) % VAR_10;
            const uint8_t *VAR_14 = VAR_8 + VAR_13 * VAR_1->linesize[VAR_7];

            if (VAR_5[VAR_7] < VAR_11)
                FUNC_2(VAR_9, VAR_14 + VAR_5[VAR_7], VAR_11 - VAR_5[VAR_7]);
            if (VAR_5[VAR_7] > 0)
                FUNC_2(VAR_9 + VAR_11 - VAR_5[VAR_7], VAR_14, VAR_5[VAR_7]);

            VAR_9 += VAR_2->linesize[VAR_7];
        }
    }

    VAR_0->h_pos += VAR_0->h_speed * VAR_1->width;
    VAR_0->v_pos += VAR_0->v_speed * VAR_1->height;
}
