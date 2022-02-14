
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int label; } ;
typedef TYPE_1__ esp_partition_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 () ;

void FUNC_2(void)
{
    FUNC_0(VAR_0, "OTA Tool Example");

    const esp_partition_t *VAR_1 = FUNC_1();


    FUNC_0(VAR_0, "Running partition: %s", VAR_1->label);

    FUNC_0(VAR_0, "Example end");
}
