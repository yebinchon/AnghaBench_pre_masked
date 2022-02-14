
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t kind; } ;
typedef TYPE_1__ Type ;


 size_t VAR_0 ;
 char** VAR_1 ;

const char *FUNC_0(Type *VAR_2) {
    if (VAR_2->kind < VAR_0) {
        const char *VAR_3 = VAR_1[VAR_2->kind];
        if (VAR_3) {
            return VAR_3;
        }
    }
    return "TYPE_NONE";
}
