
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t kind; int sym; int typeid; } ;
typedef TYPE_1__ Type ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;
 char const* FUNC_2 (char*,int ) ;
 char** VAR_1 ;

const char *FUNC_3(Type *VAR_2) {
    const char *VAR_3 = VAR_1[VAR_2->kind];
    if (VAR_3) {
        return VAR_3;
    } else if (VAR_2->kind == VAR_0) {
        return FUNC_2("tuple%d", VAR_2->typeid);
    } else {
        FUNC_0(VAR_2->sym);
        return FUNC_1(VAR_2->sym);
    }
}
