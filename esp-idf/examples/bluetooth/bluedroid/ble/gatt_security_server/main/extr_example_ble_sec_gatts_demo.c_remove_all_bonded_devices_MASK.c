
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bd_addr; } ;
typedef TYPE_1__ esp_ble_bond_dev_t ;


 int FUNC_0 (int*,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void __attribute__((unused)) FUNC_5(void)
{
    int VAR_0 = FUNC_1();

    esp_ble_bond_dev_t *VAR_1 = (esp_ble_bond_dev_t *)FUNC_4(sizeof(esp_ble_bond_dev_t) * VAR_0);
    FUNC_0(&VAR_0, VAR_1);
    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        FUNC_2(VAR_1[VAR_2].bd_addr);
    }

    FUNC_3(VAR_1);
}
