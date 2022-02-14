
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_capability {int card; int driver; } ;
typedef int cap ;
struct TYPE_6__ {char* name; int type; scalar_t__ done; } ;
struct TYPE_5__ {char* name; int type; scalar_t__ done; } ;
struct TYPE_7__ {TYPE_2__ output; TYPE_1__ capture; int fd; int refsync; int refcount; void* priv; } ;
typedef TYPE_3__ V4L2m2mContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (void*,int ,char*,int ,int ,char*) ;
 int FUNC_3 (int ,int ,struct v4l2_capability*) ;
 int FUNC_4 (struct v4l2_capability*,int ,int) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (struct v4l2_capability*) ;
 scalar_t__ FUNC_7 (struct v4l2_capability*) ;

__attribute__((used)) static int FUNC_8(V4L2m2mContext* VAR_8, int VAR_9)
{
    struct v4l2_capability VAR_10;
    void *VAR_11 = VAR_8->priv;
    int VAR_12;

    VAR_8->capture.done = VAR_8->output.done = 0;
    VAR_8->capture.name = "capture";
    VAR_8->output.name = "output";
    FUNC_1(&VAR_8->refcount, 0);
    FUNC_5(&VAR_8->refsync, 0, 0);

    FUNC_4(&VAR_10, 0, sizeof(VAR_10));
    VAR_12 = FUNC_3(VAR_8->fd, VAR_7, &VAR_10);
    if (VAR_12 < 0)
        return VAR_12;

    FUNC_2(VAR_11, VAR_9 ? VAR_0 : VAR_1,
                     "driver '%s' on card '%s' in %s mode\n", VAR_10.driver, VAR_10.card,
                     FUNC_6(&VAR_10) ? "mplane" :
                     FUNC_7(&VAR_10) ? "splane" : "unknown");

    if (FUNC_6(&VAR_10)) {
        VAR_8->capture.type = VAR_4;
        VAR_8->output.type = VAR_6;
        return 0;
    }

    if (FUNC_7(&VAR_10)) {
        VAR_8->capture.type = VAR_3;
        VAR_8->output.type = VAR_5;
        return 0;
    }

    return FUNC_0(VAR_2);
}
