
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int esp_efuse_coding_scheme_t ;
struct TYPE_5__ {int device_role; int module_version; int setting_1; int setting_2; int custom_secure_version; int member_0; } ;
typedef TYPE_1__ device_desc_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

void FUNC_6(void)
{
    esp_efuse_coding_scheme_t VAR_1 = FUNC_2();

    device_desc_t VAR_2 = { 0 };
    FUNC_4(&VAR_2);

    FUNC_1(VAR_0, "This example does not burn any efuse in reality only virtually");
    FUNC_1(VAR_0, "The part of the code that writes efuse fields is disabled");


    FUNC_0(VAR_0, "Done");
}
