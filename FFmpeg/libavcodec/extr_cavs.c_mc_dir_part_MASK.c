
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int (* qpel_mc_func ) (int *,int *,int) ;
typedef int (* h264_chroma_mc_func ) (int *,int *,int const,int,int const,int const) ;
struct TYPE_9__ {int x; int y; } ;
typedef TYPE_2__ cavs_vector ;
struct TYPE_11__ {int ** data; } ;
struct TYPE_8__ {int (* emulated_edge_mc ) (int *,int *,int const,int const,int,int,int const,int const,int const,int const) ;} ;
struct TYPE_10__ {int const l_stride; int const c_stride; int mb_width; int mb_height; int * edge_emu_buffer; TYPE_1__ vdsp; } ;
typedef TYPE_3__ AVSContext ;
typedef TYPE_4__ AVFrame ;


 int FUNC_0 (int *,int *,int,int,int,int,int const,int const,int const,int const) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int const,int const,int,int,int const,int const,int const,int const) ;
 int FUNC_3 (int *,int *,int const,int const,int,int,int const,int const,int const,int const) ;

__attribute__((used)) static inline void FUNC_4(AVSContext *VAR_0, AVFrame *VAR_1, int VAR_2,
                               int VAR_3, int VAR_4, uint8_t *VAR_5,
                               uint8_t *VAR_6, uint8_t *VAR_7,
                               int VAR_8, int VAR_9,
                               qpel_mc_func *VAR_10,
                               h264_chroma_mc_func VAR_11, cavs_vector *VAR_12)
{
    const int VAR_13 = VAR_12->x + VAR_8 * 8;
    const int VAR_14 = VAR_12->y + VAR_9 * 8;
    const int VAR_15 = (VAR_13 & 3) + ((VAR_14 & 3) << 2);
    uint8_t *VAR_16 = VAR_1->data[0] + (VAR_13 >> 2) + (VAR_14 >> 2) * VAR_0->l_stride;
    uint8_t *VAR_17 = VAR_1->data[1] + (VAR_13 >> 3) + (VAR_14 >> 3) * VAR_0->c_stride;
    uint8_t *VAR_18 = VAR_1->data[2] + (VAR_13 >> 3) + (VAR_14 >> 3) * VAR_0->c_stride;
    int VAR_19 = 0;
    int VAR_20 = VAR_19;
    const int VAR_21 = VAR_13 >> 2;
    const int VAR_22 = VAR_14 >> 2;
    const int VAR_23 = 16 * VAR_0->mb_width;
    const int VAR_24 = 16 * VAR_0->mb_height;
    int VAR_25 = 0;

    if (!VAR_1->data[0])
        return;
    if (VAR_13 & 7)
        VAR_19 -= 3;
    if (VAR_14 & 7)
        VAR_20 -= 3;

    if (VAR_21 < 0 - VAR_19 ||
        VAR_22 < 0 - VAR_20 ||
        VAR_21 + 16 > VAR_23 + VAR_19 ||
        VAR_22 + 16 > VAR_24 + VAR_20) {
        VAR_0->vdsp.emulated_edge_mc(VAR_0->edge_emu_buffer,
                                 VAR_16 - 2 - 2 * VAR_0->l_stride,
                                 VAR_0->l_stride, VAR_0->l_stride,
                                 16 + 5, 16 + 5 ,
                                 VAR_21 - 2, VAR_22 - 2,
                                 VAR_23, VAR_24);
        VAR_16 = VAR_0->edge_emu_buffer + 2 + 2 * VAR_0->l_stride;
        VAR_25 = 1;
    }


    VAR_10[VAR_15](VAR_5, VAR_16, VAR_0->l_stride);

    if (VAR_25) {
        VAR_0->vdsp.emulated_edge_mc(VAR_0->edge_emu_buffer, VAR_17,
                                 VAR_0->c_stride, VAR_0->c_stride,
                                 9, 9 ,
                                 VAR_13 >> 3, VAR_14 >> 3,
                                 VAR_23 >> 1, VAR_24 >> 1);
        VAR_17 = VAR_0->edge_emu_buffer;
    }
    VAR_11(VAR_6, VAR_17, VAR_0->c_stride, VAR_2, VAR_13 & 7, VAR_14 & 7);

    if (VAR_25) {
        VAR_0->vdsp.emulated_edge_mc(VAR_0->edge_emu_buffer, VAR_18,
                                 VAR_0->c_stride, VAR_0->c_stride,
                                 9, 9 ,
                                 VAR_13 >> 3, VAR_14 >> 3,
                                 VAR_23 >> 1, VAR_24 >> 1);
        VAR_18 = VAR_0->edge_emu_buffer;
    }
    VAR_11(VAR_7, VAR_18, VAR_0->c_stride, VAR_2, VAR_13 & 7, VAR_14 & 7);
}
