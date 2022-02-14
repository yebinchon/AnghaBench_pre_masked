
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_15__ {int pb; TYPE_6__* avctx; void* last_time_base; TYPE_4__** reordered_input_picture; TYPE_2__* current_picture_ptr; } ;
struct TYPE_13__ {int num; int den; } ;
struct TYPE_14__ {int flags; TYPE_5__ time_base; } ;
struct TYPE_12__ {TYPE_3__* f; } ;
struct TYPE_11__ {int pts; } ;
struct TYPE_10__ {TYPE_1__* f; } ;
struct TYPE_9__ {int pts; } ;
typedef TYPE_7__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void FUNC_5(MpegEncContext *VAR_2)
{
    int64_t VAR_3, VAR_4, VAR_5;
    int64_t VAR_6;

    FUNC_4(&VAR_2->pb, 16, 0);
    FUNC_4(&VAR_2->pb, 16, VAR_1);

    VAR_6 = VAR_2->current_picture_ptr->f->pts;
    if (VAR_2->reordered_input_picture[1])
        VAR_6 = FUNC_0(VAR_6, VAR_2->reordered_input_picture[1]->f->pts);
    VAR_6 = VAR_6 * VAR_2->avctx->time_base.num;
    VAR_2->last_time_base = FUNC_1(VAR_6, VAR_2->avctx->time_base.den);

    VAR_5 = FUNC_1(VAR_6, VAR_2->avctx->time_base.den);
    VAR_4 = FUNC_1(VAR_5, 60); VAR_5 = FUNC_2(VAR_5, 60);
    VAR_3 = FUNC_1(VAR_4, 60); VAR_4 = FUNC_2(VAR_4, 60);
    VAR_3 = FUNC_2(VAR_3 , 24);

    FUNC_4(&VAR_2->pb, 5, VAR_3);
    FUNC_4(&VAR_2->pb, 6, VAR_4);
    FUNC_4(&VAR_2->pb, 1, 1);
    FUNC_4(&VAR_2->pb, 6, VAR_5);

    FUNC_4(&VAR_2->pb, 1, !!(VAR_2->avctx->flags & VAR_0));
    FUNC_4(&VAR_2->pb, 1, 0);

    FUNC_3(&VAR_2->pb);
}
