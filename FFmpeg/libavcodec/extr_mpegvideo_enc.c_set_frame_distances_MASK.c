
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int time; scalar_t__ pict_type; scalar_t__ pb_time; scalar_t__ pp_time; scalar_t__ last_non_b_time; scalar_t__ picture_number; TYPE_4__* avctx; TYPE_2__* current_picture_ptr; } ;
struct TYPE_9__ {int num; } ;
struct TYPE_10__ {TYPE_3__ time_base; } ;
struct TYPE_8__ {TYPE_1__* f; } ;
struct TYPE_7__ {int pts; } ;
typedef TYPE_5__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(MpegEncContext * VAR_2){
    FUNC_0(VAR_2->current_picture_ptr->f->pts != VAR_0);
    VAR_2->time = VAR_2->current_picture_ptr->f->pts * VAR_2->avctx->time_base.num;

    if(VAR_2->pict_type==VAR_1){
        VAR_2->pb_time= VAR_2->pp_time - (VAR_2->last_non_b_time - VAR_2->time);
        FUNC_0(VAR_2->pb_time > 0 && VAR_2->pb_time < VAR_2->pp_time);
    }else{
        VAR_2->pp_time= VAR_2->time - VAR_2->last_non_b_time;
        VAR_2->last_non_b_time= VAR_2->time;
        FUNC_0(VAR_2->picture_number==0 || VAR_2->pp_time > 0);
    }
}
