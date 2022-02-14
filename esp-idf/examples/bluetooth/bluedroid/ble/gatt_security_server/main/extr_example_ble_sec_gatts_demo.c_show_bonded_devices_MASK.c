
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bd_addr; } ;
typedef TYPE_1__ esp_ble_bond_dev_t ;
typedef int esp_bd_addr_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int*,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,void*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
    int VAR_1 = FUNC_2();

    esp_ble_bond_dev_t *VAR_2 = (esp_ble_bond_dev_t *)FUNC_5(sizeof(esp_ble_bond_dev_t) * VAR_1);
    FUNC_1(&VAR_1, VAR_2);
    FUNC_0(VAR_0, "Bonded devices number : %d\n", VAR_1);

    FUNC_0(VAR_0, "Bonded devices list : %d\n", VAR_1);
    for (int VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        FUNC_3(VAR_0, (void *)VAR_2[VAR_3].bd_addr, sizeof(esp_bd_addr_t));
    }

    FUNC_4(VAR_2);
}
