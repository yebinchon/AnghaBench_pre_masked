
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int low_delay; int first_field; int picture_structure; TYPE_2__* last_picture_ptr; TYPE_1__* current_picture_ptr; int avctx; } ;
struct TYPE_6__ {int * f; } ;
struct TYPE_5__ {int f; } ;
typedef TYPE_3__ MpegEncContext ;


 int FUNC_0 (int ,int ,int *,int,int,int ,int ,int ) ;

void FUNC_1(MpegEncContext *VAR_0, int VAR_1, int VAR_2)
{
    FUNC_0(VAR_0->avctx, VAR_0->current_picture_ptr->f,
                       VAR_0->last_picture_ptr ? VAR_0->last_picture_ptr->f : ((void*)0), VAR_1, VAR_2, VAR_0->picture_structure,
                       VAR_0->first_field, VAR_0->low_delay);
}
