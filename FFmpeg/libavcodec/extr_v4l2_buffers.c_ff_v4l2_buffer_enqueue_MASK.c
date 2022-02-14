
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int status; TYPE_2__ buf; int flags; } ;
typedef TYPE_1__ V4L2Buffer ;
struct TYPE_8__ {int fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;

int FUNC_3(V4L2Buffer* VAR_3)
{
    int VAR_4;

    VAR_3->buf.flags = VAR_3->flags;

    VAR_4 = FUNC_2(FUNC_1(VAR_3)->fd, VAR_1, &VAR_3->buf);
    if (VAR_4 < 0)
        return FUNC_0(VAR_2);

    VAR_3->status = VAR_0;

    return 0;
}
