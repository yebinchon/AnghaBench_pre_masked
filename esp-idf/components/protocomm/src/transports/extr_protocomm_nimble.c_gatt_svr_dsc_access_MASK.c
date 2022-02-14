
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ble_gatt_access_ctxt {scalar_t__ op; int om; TYPE_1__* dsc; } ;
typedef int ssize_t ;
struct TYPE_2__ {int arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(uint16_t VAR_4, uint16_t VAR_5, struct
                    ble_gatt_access_ctxt *VAR_6, void *VAR_7)
{
    if (VAR_6->op != VAR_2) {
        FUNC_0(VAR_3, "Invalid operation on Read-only Descriptor");
        return VAR_1;
    }

    int VAR_8;
    char *VAR_9 = FUNC_3(VAR_6->dsc->arg);
    if (VAR_9 == ((void*)0)) {
        FUNC_0(VAR_3, "Error duplicating user description of characteristic");
        return VAR_0;
    }

    ssize_t VAR_10 = FUNC_4(VAR_9);
    VAR_8 = FUNC_2(VAR_6->om, VAR_9, VAR_10);
    FUNC_1(VAR_9);
    return VAR_8;
}
