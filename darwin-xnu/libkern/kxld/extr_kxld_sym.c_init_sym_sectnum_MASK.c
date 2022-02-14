
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_4__ {int is_absolute; scalar_t__ is_section; scalar_t__ sectnum; } ;
typedef TYPE_1__ KXLDSym ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(KXLDSym *VAR_0, u_int VAR_1)
{






    if (FUNC_0(VAR_0)) {
        if (VAR_1) {

            VAR_0->sectnum = VAR_1 - 1;
        } else {
            VAR_0->is_absolute = 1;
            VAR_0->is_section = 0;
        }
    }

}
