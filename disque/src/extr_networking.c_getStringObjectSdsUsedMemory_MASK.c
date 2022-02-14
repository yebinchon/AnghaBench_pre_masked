
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int encoding; int ptr; } ;
typedef TYPE_1__ robj ;




 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

size_t FUNC_3(robj *VAR_1) {
    FUNC_1(((void*)0),VAR_1,VAR_1->type == VAR_0);
    switch(VAR_1->encoding) {
    case 128: return FUNC_0(VAR_1->ptr);
    case 129: return FUNC_2(VAR_1)-sizeof(robj);
    default: return 0;
    }
}
