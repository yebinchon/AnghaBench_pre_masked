
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int format; } ;
typedef TYPE_1__ V4L2Context ;
struct TYPE_6__ {int fd; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int *) ;

int FUNC_2(V4L2Context* VAR_1)
{
    return FUNC_1(FUNC_0(VAR_1)->fd, VAR_0, &VAR_1->format);
}
