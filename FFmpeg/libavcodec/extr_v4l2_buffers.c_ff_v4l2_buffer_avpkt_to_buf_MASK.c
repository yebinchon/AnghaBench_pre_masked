
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ V4L2Buffer ;
struct TYPE_8__ {int flags; int pts; int buf; int size; int data; } ;
typedef TYPE_2__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(const AVPacket *VAR_2, V4L2Buffer *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0(VAR_3, 0, VAR_2->data, VAR_2->size, 0, VAR_2->buf);
    if (VAR_4)
        return VAR_4;

    FUNC_1(VAR_3, VAR_2->pts);

    if (VAR_2->flags & VAR_0)
        VAR_3->flags = VAR_1;

    return 0;
}
