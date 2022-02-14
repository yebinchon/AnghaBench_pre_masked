
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int partitioned_frame; int quarter_sample; int pb_time; int pp_time; int last_pic; int next_pic; int cur_pic; } ;
struct TYPE_5__ {int partitioned_frame; int quarter_sample; int pb_time; int pp_time; int last_picture_ptr; int next_picture_ptr; int current_picture_ptr; TYPE_2__ er; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ ERContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(MpegEncContext *VAR_0)
{
    ERContext *VAR_1 = &VAR_0->er;

    FUNC_1(&VAR_1->cur_pic, VAR_0->current_picture_ptr);
    FUNC_1(&VAR_1->next_pic, VAR_0->next_picture_ptr);
    FUNC_1(&VAR_1->last_pic, VAR_0->last_picture_ptr);

    VAR_1->pp_time = VAR_0->pp_time;
    VAR_1->pb_time = VAR_0->pb_time;
    VAR_1->quarter_sample = VAR_0->quarter_sample;
    VAR_1->partitioned_frame = VAR_0->partitioned_frame;

    FUNC_0(VAR_1);
}
