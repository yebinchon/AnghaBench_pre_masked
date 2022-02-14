
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ redisContext ;
struct TYPE_9__ {int (* onConnect ) (TYPE_2__*,int) ;TYPE_1__ c; } ;
typedef TYPE_2__ redisAsyncContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(redisAsyncContext *VAR_5) {
    redisContext *VAR_6 = &(VAR_5->c);

    if (FUNC_1(VAR_6) == VAR_2) {

        if (VAR_4 == VAR_0)
            return VAR_3;

        if (VAR_5->onConnect) VAR_5->onConnect(VAR_5,VAR_2);
        FUNC_0(VAR_5);
        return VAR_2;
    }


    VAR_6->flags |= VAR_1;
    if (VAR_5->onConnect) VAR_5->onConnect(VAR_5,VAR_3);
    return VAR_3;
}
