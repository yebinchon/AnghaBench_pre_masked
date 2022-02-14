
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int custom_secure_version; int setting_2; int setting_1; int device_role; int module_version; } ;
typedef TYPE_1__ device_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(device_desc_t *VAR_5)
{
    FUNC_0(FUNC_1(VAR_2, &VAR_5->module_version, 8));
    FUNC_0(FUNC_1(VAR_1, &VAR_5->device_role, 3));
    FUNC_0(FUNC_1(VAR_3, &VAR_5->setting_1, 6));
    FUNC_0(FUNC_1(VAR_4, &VAR_5->setting_2, 5));
    FUNC_0(FUNC_2(VAR_0, &VAR_5->custom_secure_version));
    FUNC_3(VAR_5);
}
