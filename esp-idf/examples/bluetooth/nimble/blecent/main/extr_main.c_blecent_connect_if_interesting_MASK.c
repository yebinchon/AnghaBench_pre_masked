
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; int type; } ;
struct ble_gap_disc_desc {TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int,int *,int ,int *) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (struct ble_gap_disc_desc const*) ;

__attribute__((used)) static void
FUNC_5(const struct ble_gap_disc_desc *VAR_4)
{
    int VAR_5;


    if (!FUNC_4(VAR_4)) {
        return;
    }


    VAR_5 = FUNC_3();
    if (VAR_5 != 0) {
        FUNC_0(VAR_1, "Failed to cancel scan; rc=%d\n", VAR_5);
        return;
    }





    VAR_5 = FUNC_2(VAR_0, &VAR_4->addr, 30000, ((void*)0),
                         VAR_3, ((void*)0));
    if (VAR_5 != 0) {
        FUNC_0(VAR_2, "Error: Failed to connect to device; addr_type=%d "
                    "addr=%s\n",
                    VAR_4->addr.type, FUNC_1(VAR_4->addr.val));
        return;
    }
}
