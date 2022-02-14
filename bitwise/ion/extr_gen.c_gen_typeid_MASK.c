
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; int typeid; } ;
typedef TYPE_1__ Type ;


 int FUNC_0 (char*,int ,int ,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(Type *VAR_0) {
    if (VAR_0->size == 0 || FUNC_1(VAR_0)) {
        FUNC_0("TYPEID0(%d, %s)", VAR_0->typeid, FUNC_3(VAR_0));
    } else {
        FUNC_0("TYPEID(%d, %s, %s)", VAR_0->typeid, FUNC_3(VAR_0), FUNC_2(VAR_0, ""));
    }
}
