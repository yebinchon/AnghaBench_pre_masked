
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int redisDisconnectCallback ;
struct TYPE_3__ {int * onDisconnect; } ;
typedef TYPE_1__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(redisAsyncContext *VAR_2, redisDisconnectCallback *VAR_3) {
    if (VAR_2->onDisconnect == ((void*)0)) {
        VAR_2->onDisconnect = VAR_3;
        return VAR_1;
    }
    return VAR_0;
}
