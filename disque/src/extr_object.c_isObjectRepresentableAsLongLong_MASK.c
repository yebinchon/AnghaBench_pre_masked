
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,long long*) ;

int FUNC_3(robj *VAR_4, long long *VAR_5) {
    FUNC_1(((void*)0),VAR_4,VAR_4->type == VAR_3);
    if (VAR_4->encoding == VAR_2) {
        if (VAR_5) *VAR_5 = (long) VAR_4->ptr;
        return VAR_1;
    } else {
        return FUNC_2(VAR_4->ptr,FUNC_0(VAR_4->ptr),VAR_5) ? VAR_1 : VAR_0;
    }
}
