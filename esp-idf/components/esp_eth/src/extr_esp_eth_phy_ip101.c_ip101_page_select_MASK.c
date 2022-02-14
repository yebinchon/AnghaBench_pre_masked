
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int addr; TYPE_3__* eth; } ;
typedef TYPE_1__ phy_ip101_t ;
struct TYPE_7__ {int val; int register_page_select; } ;
typedef TYPE_2__ pcr_reg_t ;
struct TYPE_8__ {scalar_t__ (* phy_reg_write ) (TYPE_3__*,int ,int ,int ) ;} ;
typedef TYPE_3__ esp_eth_mediator_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ,int ) ;

__attribute__((used)) static esp_err_t FUNC_2(phy_ip101_t *VAR_4, uint32_t VAR_5)
{
    esp_eth_mediator_t *VAR_6 = VAR_4->eth;
    pcr_reg_t VAR_7 = {
        .register_page_select = VAR_5
    };
    FUNC_0(VAR_6->phy_reg_write(VAR_6, VAR_4->addr, VAR_2, VAR_7.val) == VAR_1, "write PCR failed", VAR_3);
    return VAR_1;
err:
    return VAR_0;
}
