
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_gatt_svc_def {struct ble_gatt_chr_def* characteristics; int type; } ;
struct ble_gatt_chr_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct ble_gatt_svc_def *VAR_4, int VAR_5)
{


    VAR_3 = VAR_5;
    VAR_4->type = VAR_0;




    VAR_4->characteristics = (struct ble_gatt_chr_def *) FUNC_1((VAR_5 + 1),
                                    sizeof(struct ble_gatt_chr_def));
    if (VAR_4->characteristics == ((void*)0)) {
        FUNC_0(VAR_2, "Memory allocation for GATT characteristics failed");
        return VAR_1;
    }
    return 0;
}
