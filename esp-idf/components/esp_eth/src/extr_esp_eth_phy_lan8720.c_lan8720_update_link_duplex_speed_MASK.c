
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int speed_indication; int val; } ;
typedef TYPE_1__ pscsr_reg_t ;
struct TYPE_12__ {scalar_t__ link_status; int addr; TYPE_3__* eth; } ;
typedef TYPE_2__ phy_lan8720_t ;
typedef scalar_t__ eth_speed_t ;
typedef scalar_t__ eth_link_t ;
typedef scalar_t__ eth_duplex_t ;
struct TYPE_13__ {scalar_t__ (* phy_reg_read ) (TYPE_3__*,int ,int ,int *) ;scalar_t__ (* on_state_changed ) (TYPE_3__*,int ,void*) ;} ;
typedef TYPE_3__ esp_eth_mediator_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_14__ {scalar_t__ link_status; int val; } ;
typedef TYPE_4__ bmsr_reg_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,void*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,void*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,void*) ;

__attribute__((used)) static esp_err_t FUNC_6(phy_lan8720_t *VAR_14)
{
    esp_eth_mediator_t *VAR_15 = VAR_14->eth;
    eth_speed_t VAR_16 = VAR_9;
    eth_duplex_t VAR_17 = VAR_3;
    bmsr_reg_t VAR_18;
    pscsr_reg_t VAR_19;
    FUNC_0(VAR_15->phy_reg_read(VAR_15, VAR_14->addr, VAR_6, &(VAR_18.val)) == VAR_1,
              "read BMSR failed", VAR_13);
    eth_link_t VAR_20 = VAR_18.link_status ? VAR_5 : VAR_4;

    if (VAR_14->link_status != VAR_20) {

        if (VAR_20 == VAR_5) {
            FUNC_0(VAR_15->phy_reg_read(VAR_15, VAR_14->addr, VAR_7, &(VAR_19.val)) == VAR_1,
                      "read PSCSR failed", VAR_13);
            switch (VAR_19.speed_indication) {
            case 1:
                VAR_16 = VAR_9;
                VAR_17 = VAR_3;
                break;
            case 2:
                VAR_16 = VAR_8;
                VAR_17 = VAR_3;
                break;
            case 5:
                VAR_16 = VAR_9;
                VAR_17 = VAR_2;
                break;
            case 6:
                VAR_16 = VAR_8;
                VAR_17 = VAR_2;
                break;
            default:
                break;
            }
            FUNC_0(VAR_15->on_state_changed(VAR_15, VAR_12, (void *)VAR_16) == VAR_1,
                      "change speed failed", VAR_13);
            FUNC_0(VAR_15->on_state_changed(VAR_15, VAR_10, (void *)VAR_17) == VAR_1,
                      "change duplex failed", VAR_13);
        }
        FUNC_0(VAR_15->on_state_changed(VAR_15, VAR_11, (void *)VAR_20) == VAR_1,
                  "change link failed", VAR_13);
        VAR_14->link_status = VAR_20;
    }
    return VAR_1;
err:
    return VAR_0;
}
