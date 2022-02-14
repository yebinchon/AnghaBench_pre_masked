
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subtype; } ;
typedef TYPE_1__ esp_partition_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
    VAR_4++;
    FUNC_0(VAR_3, "boot count %d", VAR_4);
    const esp_partition_t *VAR_5 = FUNC_5();
    switch (VAR_4) {
        case 2:
            FUNC_0(VAR_3, "Factory");
            FUNC_1(VAR_0, VAR_5->subtype);
            FUNC_3();
            break;
        case 3:
            FUNC_0(VAR_3, "OTA0");
            FUNC_1(VAR_1, VAR_5->subtype);
            FUNC_6();
            FUNC_3();
            break;
        case 4:
            FUNC_0(VAR_3, "OTA1");
            FUNC_1(VAR_2, VAR_5->subtype);
            FUNC_6();
            FUNC_3();
            break;
        case 5:
            FUNC_0(VAR_3, "OTA0");
            FUNC_6();
            FUNC_1(VAR_1, VAR_5->subtype);
            FUNC_4();
            break;
        default:
            FUNC_4();
            FUNC_2("Unexpected stage");
            break;
    }
}
