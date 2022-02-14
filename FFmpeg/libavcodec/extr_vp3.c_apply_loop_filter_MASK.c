
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_10__ {int (* v_loop_filter ) (int *,int,int*) ;int (* h_loop_filter ) (int *,int,int*) ;} ;
struct TYPE_8__ {TYPE_1__* f; } ;
struct TYPE_11__ {int* bounding_values_array; int* fragment_width; int* fragment_height; int* fragment_start; TYPE_4__ vp3dsp; TYPE_3__* all_fragments; scalar_t__* data_offset; int flipped_image; TYPE_2__ current_frame; } ;
typedef TYPE_5__ Vp3DecodeContext ;
struct TYPE_9__ {scalar_t__ coding_method; } ;
struct TYPE_7__ {int* linesize; int ** data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *,int,int*) ;

__attribute__((used)) static void FUNC_4(Vp3DecodeContext *VAR_1, int VAR_2,
                              int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    int *VAR_7 = VAR_1->bounding_values_array + 127;

    int VAR_8 = VAR_1->fragment_width[!!VAR_2];
    int VAR_9 = VAR_1->fragment_height[!!VAR_2];
    int VAR_10 = VAR_1->fragment_start[VAR_2] + VAR_3 * VAR_8;
    ptrdiff_t VAR_11 = VAR_1->current_frame.f->linesize[VAR_2];
    uint8_t *VAR_12 = VAR_1->current_frame.f->data[VAR_2];
    if (!VAR_1->flipped_image)
        VAR_11 = -VAR_11;
    VAR_12 += VAR_1->data_offset[VAR_2] + 8 * VAR_3 * VAR_11;

    for (VAR_6 = VAR_3; VAR_6 < VAR_4; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {




            if (VAR_1->all_fragments[VAR_10].coding_method != VAR_0) {

                if (VAR_5 > 0) {
                    VAR_1->vp3dsp.h_loop_filter(
                        VAR_12 + 8 * VAR_5,
                        VAR_11, VAR_7);
                }


                if (VAR_6 > 0) {
                    VAR_1->vp3dsp.v_loop_filter(
                        VAR_12 + 8 * VAR_5,
                        VAR_11, VAR_7);
                }




                if ((VAR_5 < VAR_8 - 1) &&
                    (VAR_1->all_fragments[VAR_10 + 1].coding_method == VAR_0)) {
                    VAR_1->vp3dsp.h_loop_filter(
                        VAR_12 + 8 * VAR_5 + 8,
                        VAR_11, VAR_7);
                }




                if ((VAR_6 < VAR_9 - 1) &&
                    (VAR_1->all_fragments[VAR_10 + VAR_8].coding_method == VAR_0)) {
                    VAR_1->vp3dsp.v_loop_filter(
                        VAR_12 + 8 * VAR_5 + 8 * VAR_11,
                        VAR_11, VAR_7);
                }
            }

            VAR_10++;
        }
        VAR_12 += 8 * VAR_11;
    }
}
