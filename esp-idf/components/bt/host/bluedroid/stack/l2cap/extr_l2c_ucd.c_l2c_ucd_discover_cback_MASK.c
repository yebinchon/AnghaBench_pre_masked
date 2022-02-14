
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* pL2CA_UCD_Discover_Cb ) (int ,int ,int ) ;} ;
struct TYPE_6__ {int state; TYPE_1__ cb_info; } ;
struct TYPE_7__ {TYPE_2__ ucd; scalar_t__ in_use; } ;
typedef TYPE_3__ tL2C_RCB ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_8__ {TYPE_3__* rcb_pool; } ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3 (BD_ADDR VAR_6, UINT8 VAR_7, UINT32 VAR_8)
{
    tL2C_RCB *VAR_9 = &VAR_5.rcb_pool[0];
    UINT16 VAR_10;

    FUNC_0 ("L2CAP - l2c_ucd_discover_cback");

    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++, VAR_9++) {
        if (VAR_9->in_use) {

            if (( VAR_7 == VAR_1 )
                    && ( VAR_9->ucd.state & VAR_3 )) {
                VAR_9->ucd.cb_info.pL2CA_UCD_Discover_Cb (VAR_6, VAR_7, VAR_8);
                VAR_9->ucd.state &= ~(VAR_3);
            }


            if (( VAR_7 == VAR_0 )
                    && ( VAR_9->ucd.state & VAR_2 )) {
                VAR_9->ucd.cb_info.pL2CA_UCD_Discover_Cb (VAR_6, VAR_7, VAR_8);
                VAR_9->ucd.state &= ~(VAR_2);
            }
        }
    }
}
