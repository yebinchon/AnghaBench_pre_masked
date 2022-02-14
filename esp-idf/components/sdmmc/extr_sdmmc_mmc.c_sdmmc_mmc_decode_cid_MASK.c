
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sdmmc_response_t ;
struct TYPE_3__ {scalar_t__ date; void* serial; scalar_t__ revision; int name; scalar_t__ oem_id; int mfg_id; } ;
typedef TYPE_1__ sdmmc_cid_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

esp_err_t FUNC_7(int VAR_6, sdmmc_response_t VAR_7, sdmmc_cid_t* VAR_8)
{
    if (VAR_6 == VAR_1 ||
            VAR_6 == VAR_2) {
        VAR_8->mfg_id = FUNC_1(VAR_7);
        VAR_8->oem_id = 0;
        FUNC_4(VAR_7, VAR_8->name);
        VAR_8->revision = FUNC_6(VAR_7);
        VAR_8->serial = FUNC_5(VAR_7);
        VAR_8->date = FUNC_0(VAR_7);
    } else if (VAR_6 == VAR_3 ||
            VAR_6 == VAR_4 ||
            VAR_6 == VAR_5) {
        VAR_8->mfg_id = FUNC_2(VAR_7);
        VAR_8->oem_id = FUNC_3(VAR_7);
        FUNC_4(VAR_7, VAR_8->name);
        VAR_8->revision = 0;
        VAR_8->serial = FUNC_5(VAR_7);
        VAR_8->date = 0;
    }
    return VAR_0;
}
