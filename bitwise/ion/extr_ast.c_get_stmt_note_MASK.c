
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char const* name; } ;
struct TYPE_6__ {size_t num_notes; TYPE_3__* notes; } ;
struct TYPE_7__ {TYPE_1__ notes; } ;
typedef TYPE_2__ Stmt ;
typedef TYPE_3__ Note ;



Note *FUNC_0(Stmt *VAR_0, const char *VAR_1) {
    for (size_t VAR_2 = 0; VAR_2 < VAR_0->notes.num_notes; VAR_2++) {
        Note *VAR_3 = VAR_0->notes.notes + VAR_2;
        if (VAR_3->name == VAR_1) {
            return VAR_3;
        }
    }
    return ((void*)0);
}
