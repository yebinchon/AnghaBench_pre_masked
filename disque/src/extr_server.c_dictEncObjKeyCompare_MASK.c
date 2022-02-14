
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

int FUNC_3(void *VAR_1, const void *VAR_2,
        const void *VAR_3)
{
    robj *VAR_4 = (robj*) VAR_2, *VAR_5 = (robj*) VAR_3;
    int VAR_6;

    if (VAR_4->encoding == VAR_0 &&
        VAR_5->encoding == VAR_0)
            return VAR_4->ptr == VAR_5->ptr;

    VAR_4 = FUNC_2(VAR_4);
    VAR_5 = FUNC_2(VAR_5);
    VAR_6 = FUNC_1(VAR_1,VAR_4->ptr,VAR_5->ptr);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    return VAR_6;
}
