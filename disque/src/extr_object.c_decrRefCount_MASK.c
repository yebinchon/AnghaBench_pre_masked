
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refcount; int type; } ;
typedef TYPE_1__ robj ;



 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(robj *VAR_0) {
    if (VAR_0->refcount <= 0) FUNC_1("decrRefCount against refcount <= 0");
    if (VAR_0->refcount == 1) {
        switch(VAR_0->type) {
        case 128: FUNC_0(VAR_0); break;
        default: FUNC_1("Unknown object type"); break;
        }
        FUNC_2(VAR_0);
    } else {
        VAR_0->refcount--;
    }
}
