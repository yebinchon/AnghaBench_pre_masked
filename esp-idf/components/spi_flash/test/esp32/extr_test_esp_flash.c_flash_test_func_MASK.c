
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int host_id; } ;
typedef TYPE_1__ flashtest_config_t ;
typedef int (* flash_test_func_t ) (int *) ;
typedef int esp_flash_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(flash_test_func_t VAR_1, int VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        flashtest_config_t* VAR_4 = &VAR_0[VAR_3];
        esp_flash_t* VAR_5;
        FUNC_0(VAR_4, &VAR_5);
        (*VAR_1)(VAR_5);
        FUNC_2(VAR_5, VAR_4->host_id);
    }
}
