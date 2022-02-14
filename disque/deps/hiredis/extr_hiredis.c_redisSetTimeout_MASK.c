
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct timeval const) ;

int FUNC_1(redisContext *VAR_2, const struct timeval VAR_3) {
    if (VAR_2->flags & VAR_0)
        return FUNC_0(VAR_2,VAR_3);
    return VAR_1;
}
