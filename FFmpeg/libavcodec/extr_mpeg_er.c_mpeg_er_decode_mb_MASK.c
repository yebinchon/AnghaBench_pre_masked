
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* f; } ;
struct TYPE_8__ {int (* clear_blocks ) (int ) ;} ;
struct TYPE_11__ {int mv_dir; int mv_type; int mb_intra; int mb_skipped; int mb_x; int mb_y; int chroma_y_shift; int linesize; int uvlinesize; int chroma_x_shift; int * block; int avctx; TYPE_3__ current_picture; scalar_t__* dest; TYPE_1__ bdsp; int mv; scalar_t__ mcsel; } ;
struct TYPE_9__ {scalar_t__* data; } ;
typedef TYPE_4__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int****,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_1, int VAR_2, int VAR_3, int VAR_4,
                              int (*VAR_5)[2][4][2], int VAR_6, int VAR_7,
                              int VAR_8, int VAR_9)
{
    MpegEncContext *VAR_10 = VAR_1;

    VAR_10->mv_dir = VAR_3;
    VAR_10->mv_type = VAR_4;
    VAR_10->mb_intra = VAR_8;
    VAR_10->mb_skipped = VAR_9;
    VAR_10->mb_x = VAR_6;
    VAR_10->mb_y = VAR_7;
    VAR_10->mcsel = 0;
    FUNC_4(VAR_10->mv, VAR_5, sizeof(*VAR_5));

    FUNC_1(VAR_10);
    FUNC_3(VAR_10);

    VAR_10->bdsp.clear_blocks(VAR_10->block[0]);
    if (!VAR_10->chroma_y_shift)
        VAR_10->bdsp.clear_blocks(VAR_10->block[6]);

    VAR_10->dest[0] = VAR_10->current_picture.f->data[0] +
                 VAR_10->mb_y * 16 * VAR_10->linesize +
                 VAR_10->mb_x * 16;
    VAR_10->dest[1] = VAR_10->current_picture.f->data[1] +
                 VAR_10->mb_y * (16 >> VAR_10->chroma_y_shift) * VAR_10->uvlinesize +
                 VAR_10->mb_x * (16 >> VAR_10->chroma_x_shift);
    VAR_10->dest[2] = VAR_10->current_picture.f->data[2] +
                 VAR_10->mb_y * (16 >> VAR_10->chroma_y_shift) * VAR_10->uvlinesize +
                 VAR_10->mb_x * (16 >> VAR_10->chroma_x_shift);

    if (VAR_2)
        FUNC_0(VAR_10->avctx, VAR_0,
               "Interlaced error concealment is not fully implemented\n");
    FUNC_2(VAR_10, VAR_10->block);
}
