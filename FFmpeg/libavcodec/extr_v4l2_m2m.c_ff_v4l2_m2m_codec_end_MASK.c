
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int context_ref; TYPE_2__* context; } ;
typedef TYPE_1__ V4L2m2mPriv ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {int * self_ref; TYPE_4__ output; TYPE_4__ capture; } ;
typedef TYPE_2__ V4L2m2mContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;

int FUNC_4(V4L2m2mPriv *VAR_2)
{
    V4L2m2mContext* VAR_3 = VAR_2->context;
    int VAR_4;

    VAR_4 = FUNC_3(&VAR_3->output, VAR_1);
    if (VAR_4)
        FUNC_1(VAR_2, VAR_0, "VIDIOC_STREAMOFF %s\n", VAR_3->output.name);

    VAR_4 = FUNC_3(&VAR_3->capture, VAR_1);
    if (VAR_4)
        FUNC_1(VAR_2, VAR_0, "VIDIOC_STREAMOFF %s\n", VAR_3->capture.name);

    FUNC_2(&VAR_3->output);

    VAR_3->self_ref = ((void*)0);
    FUNC_0(&VAR_2->context_ref);

    return 0;
}
