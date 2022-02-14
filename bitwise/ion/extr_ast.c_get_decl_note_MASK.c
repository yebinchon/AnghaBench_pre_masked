
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t num_notes; TYPE_2__* notes; } ;
struct TYPE_8__ {TYPE_1__ notes; } ;
struct TYPE_7__ {char const* name; } ;
typedef TYPE_2__ Note ;
typedef TYPE_3__ Decl ;



Note *FUNC_0(Decl *VAR_0, const char *VAR_1) {
    if (!VAR_0) {
        return ((void*)0);
    }
    for (size_t VAR_2 = 0; VAR_2 < VAR_0->notes.num_notes; VAR_2++) {
        Note *VAR_3 = VAR_0->notes.notes + VAR_2;
        if (VAR_3->name == VAR_1) {
            return VAR_3;
        }
    }
    return ((void*)0);
}
