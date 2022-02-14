
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int fd; int refsync; int capture; } ;
typedef TYPE_1__ V4L2m2mContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, uint8_t *VAR_1)
{
    V4L2m2mContext *VAR_2 = (V4L2m2mContext*)VAR_1;

    FUNC_2(&VAR_2->capture);
    FUNC_3(&VAR_2->refsync);

    FUNC_1(VAR_2->fd);

    FUNC_0(VAR_2);
}
