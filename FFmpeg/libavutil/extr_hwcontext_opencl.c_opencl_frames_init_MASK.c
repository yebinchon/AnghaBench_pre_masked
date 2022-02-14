
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cl_mem ;
struct TYPE_7__ {TYPE_1__* internal; int pool; } ;
struct TYPE_6__ {int pool_internal; } ;
typedef TYPE_2__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(AVHWFramesContext *VAR_2)
{
    if (!VAR_2->pool) {
        VAR_2->internal->pool_internal =
            FUNC_1(sizeof(cl_mem), VAR_2,
                                 &VAR_1, ((void*)0));
        if (!VAR_2->internal->pool_internal)
            return FUNC_0(VAR_0);
    }

    return FUNC_2(VAR_2);
}
