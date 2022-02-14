
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* planes; } ;
struct TYPE_16__ {int flags; int bytesused; TYPE_2__ m; int type; } ;
struct TYPE_18__ {TYPE_4__* context; TYPE_3__ buf; } ;
typedef TYPE_5__ V4L2Buffer ;
struct TYPE_20__ {int data; } ;
struct TYPE_19__ {int pts; int dts; int flags; TYPE_9__* buf; int data; int size; } ;
struct TYPE_17__ {int name; } ;
struct TYPE_14__ {int bytesused; } ;
typedef TYPE_6__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,TYPE_9__**) ;
 int FUNC_5 (TYPE_5__*) ;

int FUNC_6(AVPacket *VAR_5, V4L2Buffer *VAR_6)
{
    int VAR_7;

    FUNC_2(VAR_5);
    VAR_7 = FUNC_4(VAR_6, 0, &VAR_5->buf);
    if (VAR_7)
        return VAR_7;

    VAR_5->size = FUNC_0(VAR_6->buf.type) ? VAR_6->buf.m.planes[0].bytesused : VAR_6->buf.bytesused;
    VAR_5->data = VAR_5->buf->data;

    if (VAR_6->buf.flags & VAR_4)
        VAR_5->flags |= VAR_2;

    if (VAR_6->buf.flags & VAR_3) {
        FUNC_1(FUNC_3(VAR_6), VAR_0, "%s driver encode error\n", VAR_6->context->name);
        VAR_5->flags |= VAR_1;
    }

    VAR_5->dts = VAR_5->pts = FUNC_5(VAR_6);

    return 0;
}
