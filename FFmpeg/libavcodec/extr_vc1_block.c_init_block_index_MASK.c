
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* current_picture_ptr; int * dest; } ;
struct TYPE_9__ {int second_field; int tff; scalar_t__ field_mode; TYPE_4__ s; } ;
typedef TYPE_3__ VC1Context ;
struct TYPE_8__ {TYPE_1__* f; } ;
struct TYPE_7__ {scalar_t__* linesize; } ;
typedef TYPE_4__ MpegEncContext ;


 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static inline void FUNC_1(VC1Context *VAR_0)
{
    MpegEncContext *VAR_1 = &VAR_0->s;
    FUNC_0(VAR_1);
    if (VAR_0->field_mode && !(VAR_0->second_field ^ VAR_0->tff)) {
        VAR_1->dest[0] += VAR_1->current_picture_ptr->f->linesize[0];
        VAR_1->dest[1] += VAR_1->current_picture_ptr->f->linesize[1];
        VAR_1->dest[2] += VAR_1->current_picture_ptr->f->linesize[2];
    }
}
