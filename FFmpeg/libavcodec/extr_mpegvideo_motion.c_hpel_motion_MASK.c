
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int (* op_pixels_func ) (int *,int *,int,int) ;
struct TYPE_6__ {int * edge_emu_buffer; } ;
struct TYPE_5__ {int (* emulated_edge_mc ) (int *,int *,int,int,int,int,int,int,int,int) ;} ;
struct TYPE_7__ {int width; int height; int linesize; int h_edge_pos; int v_edge_pos; TYPE_2__ sc; TYPE_1__ vdsp; } ;
typedef TYPE_3__ MpegEncContext ;


 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int *,int *,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (int *,int *,int,int) ;

__attribute__((used)) static inline int FUNC_4(MpegEncContext *VAR_0,
                              uint8_t *VAR_1, uint8_t *VAR_2,
                              int VAR_3, int VAR_4,
                              op_pixels_func *VAR_5,
                              int VAR_6, int VAR_7)
{
    int VAR_8 = 0;
    int VAR_9 = 0;

    VAR_3 += VAR_6 >> 1;
    VAR_4 += VAR_7 >> 1;


    VAR_3 = FUNC_1(VAR_3, -16, VAR_0->width);
    if (VAR_3 != VAR_0->width)
        VAR_8 |= VAR_6 & 1;
    VAR_4 = FUNC_1(VAR_4, -16, VAR_0->height);
    if (VAR_4 != VAR_0->height)
        VAR_8 |= (VAR_7 & 1) << 1;
    VAR_2 += VAR_4 * VAR_0->linesize + VAR_3;

        if ((unsigned)VAR_3 >= FUNC_0(VAR_0->h_edge_pos - (VAR_6 & 1) - 7, 0) ||
            (unsigned)VAR_4 >= FUNC_0(VAR_0->v_edge_pos - (VAR_7 & 1) - 7, 0)) {
            VAR_0->vdsp.emulated_edge_mc(VAR_0->sc.edge_emu_buffer, VAR_2,
                                     VAR_0->linesize, VAR_0->linesize,
                                     9, 9,
                                     VAR_3, VAR_4,
                                     VAR_0->h_edge_pos, VAR_0->v_edge_pos);
            VAR_2 = VAR_0->sc.edge_emu_buffer;
            VAR_9 = 1;
        }
    VAR_5[VAR_8](VAR_1, VAR_2, VAR_0->linesize, 8);
    return VAR_9;
}
