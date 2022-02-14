
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_9__ {scalar_t__ nitems; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {TYPE_6__ syms; } ;
typedef TYPE_1__ KXLDSymtab ;
typedef TYPE_2__ KXLDSym ;


 TYPE_2__* FUNC_0 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char const*) ;

KXLDSym *
FUNC_2(const KXLDSymtab *VAR_0, const char *VAR_1)
{
    KXLDSym *VAR_2 = ((void*)0);
    u_int VAR_3 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_0->syms.nitems; ++VAR_3) {
        VAR_2 = FUNC_0(&VAR_0->syms, VAR_3);

        if (FUNC_1(VAR_2->name, VAR_1)) {
            return VAR_2;
        }
    }

    return ((void*)0);
}
