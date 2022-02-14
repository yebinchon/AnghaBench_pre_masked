
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ field_picture; int f; } ;
struct TYPE_9__ {TYPE_3__ cur_pic; TYPE_2__* avctx; } ;
struct TYPE_7__ {TYPE_1__* hwaccel; } ;
struct TYPE_6__ {scalar_t__ decode_slice; } ;
typedef TYPE_4__ ERContext ;



__attribute__((used)) static int FUNC_0(ERContext *VAR_0)
{
    if(VAR_0->avctx->hwaccel && VAR_0->avctx->hwaccel->decode_slice ||
       !VAR_0->cur_pic.f ||
       VAR_0->cur_pic.field_picture
    )
        return 0;
    return 1;
}
