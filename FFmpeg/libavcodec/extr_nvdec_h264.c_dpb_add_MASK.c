
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


struct TYPE_14__ {int PicIdx; int FrameIdx; int used_for_reference; int * FieldOrderCnt; scalar_t__ not_existing; int is_long_term; } ;
struct TYPE_13__ {TYPE_3__* hwaccel_priv; } ;
struct TYPE_12__ {int reference; int * field_poc; int long_ref; TYPE_2__* f; } ;
struct TYPE_11__ {int idx; } ;
struct TYPE_10__ {TYPE_1__* private_ref; } ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_3__ NVDECFrame ;
typedef TYPE_4__ H264Picture ;
typedef int H264Context ;
typedef TYPE_5__ FrameDecodeData ;
typedef TYPE_6__ CUVIDH264DPBENTRY ;



__attribute__((used)) static void FUNC_0(const H264Context *VAR_0, CUVIDH264DPBENTRY *VAR_1, const H264Picture *VAR_2,
                    int VAR_3)
{
    FrameDecodeData *VAR_4 = (FrameDecodeData*)VAR_2->f->private_ref->data;
    const NVDECFrame *VAR_5 = VAR_4->hwaccel_priv;

    VAR_1->PicIdx = VAR_5 ? VAR_5->idx : -1;
    VAR_1->FrameIdx = VAR_3;
    VAR_1->is_long_term = VAR_2->long_ref;
    VAR_1->not_existing = 0;
    VAR_1->used_for_reference = VAR_2->reference & 3;
    VAR_1->FieldOrderCnt[0] = VAR_2->field_poc[0];
    VAR_1->FieldOrderCnt[1] = VAR_2->field_poc[1];
}
