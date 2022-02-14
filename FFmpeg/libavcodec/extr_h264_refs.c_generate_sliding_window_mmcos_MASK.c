
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* sps; } ;
struct TYPE_14__ {int short_ref_count; scalar_t__ long_ref_count; int nb_mmco; TYPE_4__** short_ref; TYPE_3__* cur_pic_ptr; int first_field; TYPE_2__ ps; TYPE_5__* mmco; } ;
struct TYPE_13__ {int short_pic_num; void* opcode; } ;
struct TYPE_12__ {int frame_num; } ;
struct TYPE_11__ {scalar_t__ reference; } ;
struct TYPE_9__ {scalar_t__ ref_frame_count; } ;
typedef TYPE_5__ MMCO ;
typedef TYPE_6__ H264Context ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 void* VAR_0 ;

__attribute__((used)) static void FUNC_1(H264Context *VAR_1)
{
    MMCO *VAR_2 = VAR_1->mmco;
    int VAR_3 = 0;

    if (VAR_1->short_ref_count &&
        VAR_1->long_ref_count + VAR_1->short_ref_count >= VAR_1->ps.sps->ref_frame_count &&
        !(FUNC_0(VAR_1) && !VAR_1->first_field && VAR_1->cur_pic_ptr->reference)) {
        VAR_2[0].opcode = VAR_0;
        VAR_2[0].short_pic_num = VAR_1->short_ref[VAR_1->short_ref_count - 1]->frame_num;
        VAR_3 = 1;
        if (FUNC_0(VAR_1)) {
            VAR_2[0].short_pic_num *= 2;
            VAR_2[1].opcode = VAR_0;
            VAR_2[1].short_pic_num = VAR_2[0].short_pic_num + 1;
            VAR_3 = 2;
        }
    }

    VAR_1->nb_mmco = VAR_3;
}
