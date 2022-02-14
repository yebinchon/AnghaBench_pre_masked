
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int subtype; } ;
typedef TYPE_1__ esp_partition_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__ const*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_1__* FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(void)
{
    VAR_5++;
    FUNC_0(VAR_4, "boot count %d", VAR_5);
    const esp_partition_t *VAR_6 = FUNC_8();
    switch (VAR_5) {
        case 2:
            FUNC_0(VAR_4, "Factory");
            FUNC_1(VAR_1, VAR_6->subtype);
            FUNC_4();
            break;
        case 3:
            FUNC_0(VAR_4, "OTA0");
            FUNC_1(VAR_2, VAR_6->subtype);
            FUNC_9();
            FUNC_4();
            break;
        case 4:
            FUNC_0(VAR_4, "OTA1");
            FUNC_1(VAR_3, VAR_6->subtype);
            FUNC_9();
            FUNC_3(VAR_6, FUNC_7());
            FUNC_5(VAR_0);
            FUNC_10();
            break;
        case 5:
            FUNC_0(VAR_4, "OTA0");
            FUNC_1(VAR_2, VAR_6->subtype);
            FUNC_6();
            break;
        default:
            FUNC_6();
            FUNC_2("Unexpected stage");
            break;
    }
}
