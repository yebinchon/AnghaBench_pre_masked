
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {int width; int height; int * linesize; int ** data; int format; } ;
struct TYPE_7__ {int flags; int nb_components; TYPE_1__* comp; int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_6__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int const,int) ;

void FUNC_6(AVFrame *VAR_1, const int VAR_2[4])
{
    const AVPixFmtDescriptor *VAR_3 = FUNC_3(VAR_1->format);
    int VAR_4, VAR_5;

    FUNC_1(VAR_3->flags & VAR_0);

    for (VAR_4 = 0; VAR_4<VAR_3->nb_components; VAR_4++) {
        uint8_t *VAR_6 = VAR_1->data[VAR_4];
        int VAR_7 = VAR_4 == 1 || VAR_4 == 2;
        int VAR_8 = VAR_7 ? FUNC_0(VAR_1->width, VAR_3->log2_chroma_w) : VAR_1->width;
        int VAR_9 = VAR_7 ? FUNC_0(VAR_1->height, VAR_3->log2_chroma_h) : VAR_1->height;
        if (VAR_3->comp[0].depth >= 9) {
            ((uint16_t*)VAR_6)[0] = VAR_2[VAR_4];
            FUNC_2(VAR_6 + 2, 2, VAR_8 - 2);
            VAR_6 += VAR_1->linesize[VAR_4];
            for (VAR_5 = 1; VAR_5 < VAR_9; VAR_5++) {
                FUNC_4(VAR_6, VAR_1->data[VAR_4], 2*VAR_8);
                VAR_6 += VAR_1->linesize[VAR_4];
            }
        } else {
            for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
                FUNC_5(VAR_6, VAR_2[VAR_4], VAR_8);
                VAR_6 += VAR_1->linesize[VAR_4];
            }
        }
    }
}
