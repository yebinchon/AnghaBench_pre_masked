
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ redisContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(redisContext *VAR_0) {
    if (VAR_0 && VAR_0->fd >= 0) {
        FUNC_0(VAR_0->fd);
        VAR_0->fd = -1;
    }
}
