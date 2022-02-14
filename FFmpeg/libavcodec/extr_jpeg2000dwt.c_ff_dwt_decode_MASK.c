
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ndeclevels; int type; } ;
typedef TYPE_1__ DWTContext ;





 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*,void*) ;

int FUNC_3(DWTContext *VAR_0, void *VAR_1)
{
    if (VAR_0->ndeclevels == 0)
        return 0;

    switch (VAR_0->type) {
    case 129:
        FUNC_1(VAR_0, VAR_1);
        break;
    case 128:
        FUNC_2(VAR_0, VAR_1);
        break;
    case 130:
        FUNC_0(VAR_0, VAR_1);
        break;
    default:
        return -1;
    }
    return 0;
}
