
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sds ;
struct TYPE_4__ {int type; int encoding; int refcount; int ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

void FUNC_6(robj *VAR_2) {
    FUNC_5(VAR_0,"Object type: %u", VAR_2->type);
    FUNC_5(VAR_0,"Object encoding: %u", VAR_2->encoding);
    FUNC_5(VAR_0,"Object refcount: %d", VAR_2->refcount);
    if (VAR_2->type == VAR_1 && FUNC_0(VAR_2)) {
        FUNC_5(VAR_0,"Object raw string len: %zu", FUNC_4(VAR_2->ptr));
        if (FUNC_4(VAR_2->ptr) < 4096) {
            sds VAR_3 = FUNC_1(FUNC_2(),VAR_2->ptr,FUNC_4(VAR_2->ptr));
            FUNC_5(VAR_0,"Object raw string content: %s", VAR_3);
            FUNC_3(VAR_3);
        }
    }
}
