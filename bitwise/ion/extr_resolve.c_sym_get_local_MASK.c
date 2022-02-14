
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* name; } ;
typedef TYPE_1__ Sym ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

Sym *FUNC_0(const char *VAR_2) {
    for (Sym *VAR_3 = VAR_1; VAR_3 != VAR_0; VAR_3--) {
        Sym *VAR_4 = VAR_3-1;
        if (VAR_4->name == VAR_2) {
            return VAR_4;
        }
    }
    return ((void*)0);
}
