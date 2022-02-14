
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int type; int streamon; } ;
typedef TYPE_1__ V4L2Context ;
struct TYPE_6__ {int fd; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__,int*) ;

int FUNC_3(V4L2Context* VAR_2, uint32_t VAR_3)
{
    int VAR_4 = VAR_2->type;
    int VAR_5;

    VAR_5 = FUNC_2(FUNC_1(VAR_2)->fd, VAR_3, &VAR_4);
    if (VAR_5 < 0)
        return FUNC_0(VAR_1);

    VAR_2->streamon = (VAR_3 == VAR_0);

    return 0;
}
