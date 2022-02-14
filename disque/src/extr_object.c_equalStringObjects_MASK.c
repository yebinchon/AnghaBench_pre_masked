
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;

int FUNC_1(robj *VAR_1, robj *VAR_2) {
    if (VAR_1->encoding == VAR_0 &&
        VAR_2->encoding == VAR_0){


        return VAR_1->ptr == VAR_2->ptr;
    } else {
        return FUNC_0(VAR_1,VAR_2) == 0;
    }
}
