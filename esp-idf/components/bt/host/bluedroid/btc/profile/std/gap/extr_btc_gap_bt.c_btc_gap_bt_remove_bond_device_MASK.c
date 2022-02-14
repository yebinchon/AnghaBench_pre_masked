
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_5__ {int address; } ;
struct TYPE_6__ {TYPE_1__ bda; } ;
struct TYPE_7__ {TYPE_2__ rm_bond_device; } ;
typedef TYPE_3__ btc_gap_bt_args_t ;
typedef int BD_ADDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static esp_err_t FUNC_2(btc_gap_bt_args_t *VAR_4)
{
    BD_ADDR VAR_5;
    FUNC_1(VAR_5, VAR_4->rm_bond_device.bda.address, sizeof(BD_ADDR));
    if(FUNC_0(VAR_5, VAR_1) == VAR_0){
        return VAR_3;
    }
    return VAR_2;
}
