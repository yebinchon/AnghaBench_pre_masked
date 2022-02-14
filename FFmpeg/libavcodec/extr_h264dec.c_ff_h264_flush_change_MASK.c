
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int prev_frame_num; } ;
struct TYPE_9__ {int prev_interlaced_frame; int recovery_frame; int mmco_reset; scalar_t__ current_slice; scalar_t__ frame_recovered; scalar_t__ first_field; int last_pic_for_ec; TYPE_2__** delayed_pic; TYPE_2__* cur_pic_ptr; TYPE_1__ poc; int next_outputed_poc; } ;
struct TYPE_8__ {scalar_t__ reference; } ;
typedef TYPE_3__ H264Context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(H264Context *VAR_1)
{
    int VAR_2, VAR_3;

    VAR_1->next_outputed_poc = VAR_0;
    VAR_1->prev_interlaced_frame = 1;
    FUNC_1(VAR_1);

    VAR_1->poc.prev_frame_num = -1;
    if (VAR_1->cur_pic_ptr) {
        VAR_1->cur_pic_ptr->reference = 0;
        for (VAR_3=VAR_2=0; VAR_1->delayed_pic[VAR_2]; VAR_2++)
            if (VAR_1->delayed_pic[VAR_2] != VAR_1->cur_pic_ptr)
                VAR_1->delayed_pic[VAR_3++] = VAR_1->delayed_pic[VAR_2];
        VAR_1->delayed_pic[VAR_3] = ((void*)0);
    }
    FUNC_0(VAR_1, &VAR_1->last_pic_for_ec);

    VAR_1->first_field = 0;
    VAR_1->recovery_frame = -1;
    VAR_1->frame_recovered = 0;
    VAR_1->current_slice = 0;
    VAR_1->mmco_reset = 1;
}
