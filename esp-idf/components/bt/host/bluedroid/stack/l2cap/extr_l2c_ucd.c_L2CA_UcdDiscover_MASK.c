
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int state; } ;
struct TYPE_8__ {TYPE_1__ ucd; } ;
typedef TYPE_2__ tL2C_RCB ;
struct TYPE_9__ {scalar_t__ link_state; } ;
typedef TYPE_3__ tL2C_LCB ;
typedef int tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;
typedef int* BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,int,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int*) ;
 int * FUNC_4 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_5 (int*,int ) ;
 TYPE_2__* FUNC_6 (int ) ;

BOOLEAN FUNC_7 ( UINT16 VAR_10, BD_ADDR VAR_11, UINT8 VAR_12 )
{
    tL2C_LCB *VAR_13;
    tL2C_CCB *VAR_14;
    tL2C_RCB *VAR_15;

    FUNC_0 ("L2CA_UcdDiscover()  PSM: 0x%04x  BDA: %08x%04x, InfoType=0x%02x", VAR_10,
                     (VAR_11[0] << 24) + (VAR_11[1] << 16) + (VAR_11[2] << 8) + VAR_11[3],
                     (VAR_11[4] << 8) + VAR_11[5], VAR_12);


    if (((VAR_15 = FUNC_6 (VAR_10)) == ((void*)0))
            || ( VAR_15->ucd.state == VAR_5 )) {
        FUNC_1 ("L2CAP - no RCB for L2CA_UcdDiscover, PSM: 0x%04x", VAR_10);
        return (VAR_1);
    }



    if (((VAR_13 = FUNC_5 (VAR_11, VAR_0)) == ((void*)0))
            || ((VAR_14 = FUNC_4 (VAR_13, VAR_2)) == ((void*)0))) {
        if ( FUNC_3 (VAR_11) == VAR_1 ) {
            return (VAR_1);
        }
    }



    if ( VAR_12 & VAR_4 ) {
        VAR_15->ucd.state |= VAR_7;
    }

    if ( VAR_12 & VAR_3 ) {
        VAR_15->ucd.state |= VAR_6;
    }


    if ((VAR_13) && (VAR_13->link_state == VAR_8)) {
        if (!VAR_14) {
            VAR_14 = FUNC_4 (VAR_13, VAR_2);
        }
        FUNC_2(VAR_14);
    }
    return (VAR_9);
}
