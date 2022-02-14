
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* f; } ;
struct TYPE_12__ {scalar_t__ start_mb_y; scalar_t__ end_mb_y; int first_slice_line; scalar_t__ mb_y; int linesize; int uvlinesize; int pict_type; TYPE_2__ last_picture; int * dest; scalar_t__ mb_x; scalar_t__ mb_width; int er; } ;
struct TYPE_11__ {TYPE_4__ s; } ;
typedef TYPE_3__ VC1Context ;
struct TYPE_9__ {scalar_t__* data; } ;
typedef TYPE_4__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(VC1Context *VAR_2)
{
    MpegEncContext *VAR_3 = &VAR_2->s;

    if (!VAR_2->s.last_picture.f->data[0])
        return;

    FUNC_0(&VAR_3->er, 0, VAR_3->start_mb_y, VAR_3->mb_width - 1, VAR_3->end_mb_y - 1, VAR_1);
    VAR_3->first_slice_line = 1;
    for (VAR_3->mb_y = VAR_3->start_mb_y; VAR_3->mb_y < VAR_3->end_mb_y; VAR_3->mb_y++) {
        VAR_3->mb_x = 0;
        FUNC_3(VAR_2);
        FUNC_2(VAR_3);
        FUNC_4(VAR_3->dest[0], VAR_3->last_picture.f->data[0] + VAR_3->mb_y * 16 * VAR_3->linesize, VAR_3->linesize * 16);
        FUNC_4(VAR_3->dest[1], VAR_3->last_picture.f->data[1] + VAR_3->mb_y * 8 * VAR_3->uvlinesize, VAR_3->uvlinesize * 8);
        FUNC_4(VAR_3->dest[2], VAR_3->last_picture.f->data[2] + VAR_3->mb_y * 8 * VAR_3->uvlinesize, VAR_3->uvlinesize * 8);
        FUNC_1(VAR_3, VAR_3->mb_y * 16, 16);
        VAR_3->first_slice_line = 0;
    }
    VAR_3->pict_type = VAR_0;
}
