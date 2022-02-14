
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ reinit; scalar_t__ draining; int capture; int refsync; int refcount; void* priv; } ;
typedef TYPE_1__ V4L2m2mContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (void*,int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(V4L2m2mContext* VAR_5)
{
    void *VAR_6 = VAR_5->priv;
    int VAR_7;

    FUNC_1(VAR_6, VAR_0, "reinit context\n");


    VAR_7 = FUNC_5(&VAR_5->capture, VAR_3);
    if (VAR_7)
        FUNC_1(VAR_6, VAR_1, "capture VIDIOC_STREAMOFF\n");





    FUNC_1(VAR_6, VAR_0, "waiting for user to release AVBufferRefs\n");
    if (FUNC_0(&VAR_5->refcount))
        while(FUNC_6(&VAR_5->refsync) == -1 && VAR_4 == VAR_2);

    FUNC_3(&VAR_5->capture);


    VAR_7 = FUNC_2(&VAR_5->capture, 0);
    if (VAR_7) {
        FUNC_1(VAR_6, VAR_1, "query the new capture format\n");
        return VAR_7;
    }


    VAR_7 = FUNC_4(&VAR_5->capture);
    if (VAR_7) {
        FUNC_1(VAR_6, VAR_1, "setting capture format\n");
        return VAR_7;
    }


    VAR_5->draining = 0;
    VAR_5->reinit = 0;

    return 0;
}
