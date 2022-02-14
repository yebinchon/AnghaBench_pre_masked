
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int subtype; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_ota_img_states_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 () ;
 int VAR_9 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__ const*,int*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 TYPE_1__* FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(void)
{
    VAR_9++;
    FUNC_0(VAR_8, "boot count %d", VAR_9);
    const esp_partition_t *VAR_10 = FUNC_12();
    esp_ota_img_states_t VAR_11 = 0x5555AAAA;
    const esp_partition_t* VAR_12 = ((void*)0);
    switch (VAR_9) {
        case 2:
            FUNC_0(VAR_8, "Factory");
            FUNC_1(VAR_5, VAR_10->subtype);
            FUNC_2(FUNC_8());
            FUNC_3(VAR_0, FUNC_9(VAR_10, &VAR_11));
            VAR_12 = FUNC_6();
            FUNC_4(FUNC_9(VAR_12, &VAR_11));

            FUNC_1(VAR_3, VAR_11);



            FUNC_13();
            break;
        case 3:
            FUNC_0(VAR_8, "OTA0");
            FUNC_1(VAR_6, VAR_10->subtype);
            FUNC_2(FUNC_8());
            FUNC_4(FUNC_9(VAR_10, &VAR_11));

            FUNC_1(VAR_3, VAR_11);



            FUNC_4(FUNC_11());
            FUNC_2(FUNC_8());
            FUNC_4(FUNC_9(VAR_10, &VAR_11));
            FUNC_1(VAR_4, VAR_11);
            VAR_12 = FUNC_6();
            FUNC_4(FUNC_9(VAR_12, &VAR_11));

            FUNC_1(VAR_3, VAR_11);



            FUNC_13();
            break;
        case 4:
            FUNC_0(VAR_8, "OTA1");
            FUNC_1(VAR_7, VAR_10->subtype);
            FUNC_2(FUNC_8());
            FUNC_4(FUNC_9(VAR_10, &VAR_11));

            FUNC_1(VAR_3, VAR_11);
            FUNC_4(FUNC_10());




            break;
        default:
            FUNC_7();
            FUNC_5("Unexpected stage");
            break;
    }
}
