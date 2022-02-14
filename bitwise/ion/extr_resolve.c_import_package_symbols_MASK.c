
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t num_items; TYPE_3__* items; } ;
struct TYPE_11__ {int pos; TYPE_1__ import; } ;
struct TYPE_10__ {scalar_t__ name; scalar_t__ rename; } ;
struct TYPE_9__ {int path; } ;
typedef int Sym ;
typedef TYPE_2__ Package ;
typedef TYPE_3__ ImportItem ;
typedef TYPE_4__ Decl ;


 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int * FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;

void FUNC_3(Decl *VAR_0, Package *VAR_1) {
    for (size_t VAR_2 = 0; VAR_2 < VAR_0->import.num_items; VAR_2++) {
        ImportItem VAR_3 = VAR_0->import.items[VAR_2];
        Sym *VAR_4 = FUNC_1(VAR_1, VAR_3.name);
        if (!VAR_4) {
            FUNC_0(VAR_0->pos, "Symbol '%s' does not exist in package '%s'", VAR_3.name, VAR_1->path);
        }
        FUNC_2(VAR_3.rename ? VAR_3.rename : VAR_3.name, VAR_4);
    }
}
