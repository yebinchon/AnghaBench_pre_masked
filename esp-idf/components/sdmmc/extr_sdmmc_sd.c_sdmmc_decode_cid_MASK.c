
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sdmmc_response_t ;
struct TYPE_3__ {int date; int serial; int revision; int name; int oem_id; int mfg_id; } ;
typedef TYPE_1__ sdmmc_cid_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

esp_err_t FUNC_6(sdmmc_response_t VAR_1, sdmmc_cid_t* VAR_2)
{
    VAR_2->mfg_id = FUNC_1(VAR_1);
    VAR_2->oem_id = FUNC_2(VAR_1);
    FUNC_3(VAR_1, VAR_2->name);
    VAR_2->revision = FUNC_5(VAR_1);
    VAR_2->serial = FUNC_4(VAR_1);
    VAR_2->date = FUNC_0(VAR_1);
    return VAR_0;
}
