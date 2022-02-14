
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_8__ {scalar_t__ nitems; } ;
struct TYPE_7__ {scalar_t__ idx; int (* test ) (int *) ;scalar_t__ negate; TYPE_1__* symtab; } ;
struct TYPE_6__ {TYPE_4__ syms; } ;
typedef TYPE_2__ KXLDSymtabIterator ;
typedef int KXLDSym ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_4__*,scalar_t__) ;
 int FUNC_2 (int *) ;

KXLDSym *
FUNC_3(KXLDSymtabIterator *VAR_1)
{
    KXLDSym *VAR_2 = ((void*)0);
    KXLDSym *VAR_3 = ((void*)0);
    boolean_t VAR_4 = VAR_0;

    FUNC_0(VAR_1);

    for (; VAR_1->idx < VAR_1->symtab->syms.nitems; ++VAR_1->idx) {
        VAR_3 = FUNC_1(&VAR_1->symtab->syms, VAR_1->idx);
        VAR_4 = VAR_1->test(VAR_3);
        if (VAR_1->negate) VAR_4 = !VAR_4;

        if (VAR_4) {
            VAR_2 = VAR_3;
            ++VAR_1->idx;
            break;
        }
    }

    return VAR_2;
}
