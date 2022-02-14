
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int subtype; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_ota_img_states_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 () ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__ const*,int*) ;
 TYPE_1__* FUNC_10 () ;

__attribute__((used)) static void FUNC_11(void)
{
    VAR_4 = 5;
    esp_ota_img_states_t VAR_5 = 0x5555AAAA;
    FUNC_0(VAR_3, "boot count %d", VAR_4);
    const esp_partition_t *VAR_6 = FUNC_10();
    FUNC_0(VAR_3, "Factory");
    FUNC_1(VAR_2, VAR_6->subtype);

    const esp_partition_t *VAR_7 = FUNC_7();
    const esp_partition_t* VAR_8 = FUNC_8(((void*)0));
    FUNC_3(VAR_7);
    FUNC_3(VAR_8);
    FUNC_2(VAR_7, VAR_8);
    FUNC_4(VAR_0, FUNC_9(VAR_6, &VAR_5));
    FUNC_5(FUNC_9(VAR_7, &VAR_5));
    FUNC_1(VAR_1, VAR_5);

    FUNC_6();
}
