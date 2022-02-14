
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_8__ {scalar_t__ nitems; } ;
struct TYPE_7__ {scalar_t__ idx; TYPE_1__* symtab; scalar_t__ (* test ) (int ) ;} ;
struct TYPE_6__ {TYPE_4__ syms; } ;
typedef TYPE_2__ KXLDSymtabIterator ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

u_int
FUNC_3(const KXLDSymtabIterator *VAR_0)
{
    u_int VAR_1 = 0;
    u_int VAR_2 = 0;

    FUNC_0(VAR_0);

    for (VAR_1 = VAR_0->idx; VAR_1 < VAR_0->symtab->syms.nitems; ++VAR_1) {
        VAR_2 += VAR_0->test(FUNC_1(&VAR_0->symtab->syms, VAR_1));
    }

    return VAR_2;
}
