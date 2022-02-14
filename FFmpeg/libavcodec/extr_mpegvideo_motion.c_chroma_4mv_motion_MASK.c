
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int (* op_pixels_func ) (int *,int *,int,int) ;
struct TYPE_6__ {int * edge_emu_buffer; } ;
struct TYPE_5__ {int (* emulated_edge_mc ) (int *,int *,int,int,int,int,int,int,int,int) ;} ;
struct TYPE_7__ {int mb_x; int mb_y; int width; int height; int uvlinesize; int h_edge_pos; int v_edge_pos; TYPE_2__ sc; TYPE_1__ vdsp; } ;
typedef TYPE_3__ MpegEncContext ;


 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int,int,int,int,int,int,int,int) ;
 int FUNC_4 (int *,int *,int,int) ;
 int FUNC_5 (int *,int *,int,int,int,int,int,int,int,int) ;
 int FUNC_6 (int *,int *,int,int) ;

__attribute__((used)) static void FUNC_7(MpegEncContext *VAR_0,
                              uint8_t *VAR_1, uint8_t *VAR_2,
                              uint8_t **VAR_3,
                              op_pixels_func *VAR_4,
                              int VAR_5, int VAR_6)
{
    uint8_t *VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11 = 0;
    ptrdiff_t VAR_12;



    VAR_5 = FUNC_2(VAR_5);
    VAR_6 = FUNC_2(VAR_6);

    VAR_10 = ((VAR_6 & 1) << 1) | (VAR_5 & 1);
    VAR_5 >>= 1;
    VAR_6 >>= 1;

    VAR_8 = VAR_0->mb_x * 8 + VAR_5;
    VAR_9 = VAR_0->mb_y * 8 + VAR_6;
    VAR_8 = FUNC_1(VAR_8, -8, (VAR_0->width >> 1));
    if (VAR_8 == (VAR_0->width >> 1))
        VAR_10 &= ~1;
    VAR_9 = FUNC_1(VAR_9, -8, (VAR_0->height >> 1));
    if (VAR_9 == (VAR_0->height >> 1))
        VAR_10 &= ~2;

    VAR_12 = VAR_9 * VAR_0->uvlinesize + VAR_8;
    VAR_7 = VAR_3[1] + VAR_12;
    if ((unsigned)VAR_8 >= FUNC_0((VAR_0->h_edge_pos >> 1) - (VAR_10 & 1) - 7, 0) ||
        (unsigned)VAR_9 >= FUNC_0((VAR_0->v_edge_pos >> 1) - (VAR_10 >> 1) - 7, 0)) {
        VAR_0->vdsp.emulated_edge_mc(VAR_0->sc.edge_emu_buffer, VAR_7,
                                 VAR_0->uvlinesize, VAR_0->uvlinesize,
                                 9, 9, VAR_8, VAR_9,
                                 VAR_0->h_edge_pos >> 1, VAR_0->v_edge_pos >> 1);
        VAR_7 = VAR_0->sc.edge_emu_buffer;
        VAR_11 = 1;
    }
    VAR_4[VAR_10](VAR_1, VAR_7, VAR_0->uvlinesize, 8);

    VAR_7 = VAR_3[2] + VAR_12;
    if (VAR_11) {
        VAR_0->vdsp.emulated_edge_mc(VAR_0->sc.edge_emu_buffer, VAR_7,
                                 VAR_0->uvlinesize, VAR_0->uvlinesize,
                                 9, 9, VAR_8, VAR_9,
                                 VAR_0->h_edge_pos >> 1, VAR_0->v_edge_pos >> 1);
        VAR_7 = VAR_0->sc.edge_emu_buffer;
    }
    VAR_4[VAR_10](VAR_2, VAR_7, VAR_0->uvlinesize, 8);
}
