
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct TYPE_3__ {scalar_t__ addr; int * uuid; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__* VAR_0 ;

u8_t *FUNC_4(u16_t VAR_1)
{
    int VAR_2;

    FUNC_1("addr 0x%04x", VAR_1);

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        if (VAR_0[VAR_2].addr == VAR_1) {
            FUNC_1("Found Label UUID for 0x%04x: %s", VAR_1,
                   FUNC_3(VAR_0[VAR_2].uuid, 16));
            return VAR_0[VAR_2].uuid;
        }
    }

    FUNC_2("No matching Label UUID for 0x%04x", VAR_1);

    return ((void*)0);
}
