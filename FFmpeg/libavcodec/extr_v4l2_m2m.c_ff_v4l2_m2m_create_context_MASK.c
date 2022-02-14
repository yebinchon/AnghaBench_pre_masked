
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {TYPE_4__* context; scalar_t__ context_ref; int num_output_buffers; int num_capture_buffers; } ;
typedef TYPE_3__ V4L2m2mPriv ;
struct TYPE_10__ {int num_buffers; } ;
struct TYPE_9__ {int num_buffers; } ;
struct TYPE_12__ {int fd; scalar_t__ self_ref; TYPE_2__ output; TYPE_1__ capture; TYPE_3__* priv; } ;
typedef TYPE_4__ V4L2m2mContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int,int *,int *,int ) ;
 int FUNC_2 (TYPE_4__**) ;
 TYPE_4__* FUNC_3 (int) ;
 int VAR_1 ;

int FUNC_4(V4L2m2mPriv *VAR_2, V4L2m2mContext **VAR_3)
{
    *VAR_3 = FUNC_3(sizeof(V4L2m2mContext));
    if (!*VAR_3)
        return FUNC_0(VAR_0);

    VAR_2->context_ref = FUNC_1((uint8_t *) *VAR_3, sizeof(V4L2m2mContext),
                                         &VAR_1, ((void*)0), 0);
    if (!VAR_2->context_ref) {
        FUNC_2(VAR_3);
        return FUNC_0(VAR_0);
    }


    VAR_2->context = *VAR_3;
    (*VAR_3)->priv = VAR_2;


    VAR_2->context->capture.num_buffers = VAR_2->num_capture_buffers;
    VAR_2->context->output.num_buffers = VAR_2->num_output_buffers;
    VAR_2->context->self_ref = VAR_2->context_ref;
    VAR_2->context->fd = -1;

    return 0;
}
