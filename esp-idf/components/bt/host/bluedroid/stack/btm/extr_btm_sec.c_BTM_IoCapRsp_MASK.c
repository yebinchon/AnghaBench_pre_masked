
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tBTM_OOB_DATA ;
typedef scalar_t__ tBTM_IO_CAP ;
typedef int tBTM_AUTH_REQ ;
struct TYPE_3__ {int loc_auth_req; scalar_t__ loc_io_caps; } ;
struct TYPE_4__ {scalar_t__ pairing_state; int pairing_flags; TYPE_1__ devcb; int pairing_bda; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

void FUNC_4(BD_ADDR VAR_8, tBTM_IO_CAP VAR_9, tBTM_OOB_DATA VAR_10, tBTM_AUTH_REQ VAR_11)
{

    FUNC_0 ("BTM_IoCapRsp: state: %s  oob: %d io_cap: %d\n",
                     FUNC_1(VAR_7.pairing_state), VAR_10, VAR_9);

    if ( (VAR_7.pairing_state != VAR_6)
            || (FUNC_3 (VAR_7.pairing_bda, VAR_8, VAR_0) != 0) ) {
        return;
    }

    if (VAR_10 < VAR_4 && VAR_9 < VAR_3) {
        VAR_7.devcb.loc_auth_req = VAR_11;
        VAR_7.devcb.loc_io_caps = VAR_9;

        if (VAR_7.pairing_flags & VAR_5) {
            VAR_11 = (VAR_1 | (VAR_11 & VAR_2));
        }

        FUNC_2 (VAR_8, VAR_9, VAR_10, VAR_11);
    }
}
