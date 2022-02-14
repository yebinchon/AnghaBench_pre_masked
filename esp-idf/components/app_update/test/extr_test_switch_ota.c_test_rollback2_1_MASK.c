
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int subtype; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_ota_img_states_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 () ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__ const*,int*) ;
 TYPE_1__* FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
    VAR_6 = 5;
    esp_ota_img_states_t VAR_7 = 0x5555AAAA;
    FUNC_0(VAR_5, "boot count %d", VAR_6);
    const esp_partition_t *VAR_8 = FUNC_9();
    FUNC_0(VAR_5, "OTA0");
    FUNC_1(VAR_3, VAR_8->subtype);

    const esp_partition_t *VAR_9 = FUNC_6();
    FUNC_1(VAR_4, VAR_9->subtype);
    const esp_partition_t* VAR_10 = FUNC_7(((void*)0));
    FUNC_3(VAR_9);
    FUNC_3(VAR_10);
    FUNC_2(VAR_9, VAR_10);
    FUNC_4(FUNC_8(VAR_8, &VAR_7));
    FUNC_1(VAR_2, VAR_7);
    FUNC_4(FUNC_8(VAR_9, &VAR_7));

    FUNC_1(VAR_1, VAR_7);



    FUNC_5();
}
