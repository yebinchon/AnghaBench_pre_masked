
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int in_use; } ;
typedef TYPE_1__ tGATT_REG ;
typedef int tGATT_IF ;
typedef int UINT8 ;
struct TYPE_5__ {TYPE_1__* cl_rcb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_3__ VAR_1 ;

tGATT_REG *FUNC_1 (tGATT_IF VAR_2)
{
    UINT8 VAR_3 = (UINT8)VAR_2;
    tGATT_REG *VAR_4 = ((void*)0);

    if (VAR_3 < 1 || VAR_3 > VAR_0) {
        FUNC_0("gatt_if out of range [ = %d]", VAR_3);
        return ((void*)0);
    }


    VAR_4 = &VAR_1.cl_rcb[VAR_3 - 1];

    if (!VAR_4->in_use) {
        FUNC_0("gatt_if found but not in use.\n");
        return ((void*)0);
    }

    return VAR_4;
}
