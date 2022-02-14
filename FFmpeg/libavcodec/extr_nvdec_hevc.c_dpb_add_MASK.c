
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


struct TYPE_14__ {int* RefPicIdx; int* IsLongTerm; int * PicOrderCntVal; } ;
struct TYPE_13__ {TYPE_3__* hwaccel_priv; } ;
struct TYPE_12__ {int flags; int poc; TYPE_2__* frame; } ;
struct TYPE_11__ {int idx; } ;
struct TYPE_10__ {TYPE_1__* private_ref; } ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_3__ NVDECFrame ;
typedef TYPE_4__ HEVCFrame ;
typedef TYPE_5__ FrameDecodeData ;
typedef TYPE_6__ CUVIDHEVCPICPARAMS ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(CUVIDHEVCPICPARAMS *VAR_1, int VAR_2, const HEVCFrame *VAR_3)
{
    FrameDecodeData *VAR_4 = (FrameDecodeData*)VAR_3->frame->private_ref->data;
    const NVDECFrame *VAR_5 = VAR_4->hwaccel_priv;

    VAR_1->RefPicIdx[VAR_2] = VAR_5 ? VAR_5->idx : -1;
    VAR_1->PicOrderCntVal[VAR_2] = VAR_3->poc;
    VAR_1->IsLongTerm[VAR_2] = !!(VAR_3->flags & VAR_0);
}
