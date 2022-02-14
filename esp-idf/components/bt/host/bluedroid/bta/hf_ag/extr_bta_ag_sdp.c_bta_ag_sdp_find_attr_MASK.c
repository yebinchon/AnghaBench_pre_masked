
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__* params; } ;
typedef TYPE_3__ tSDP_PROTOCOL_ELEM ;
typedef int tSDP_DISC_REC ;
struct TYPE_9__ {scalar_t__ u8; int u16; } ;
struct TYPE_10__ {TYPE_1__ v; } ;
struct TYPE_12__ {TYPE_2__ attr_value; } ;
typedef TYPE_4__ tSDP_DISC_ATTR ;
typedef int tBTA_SERVICE_MASK ;
struct TYPE_13__ {int peer_version; scalar_t__ role; int peer_features; scalar_t__ peer_scn; int p_disc_db; } ;
typedef TYPE_5__ tBTA_AG_SCB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_3__*) ;
 int * FUNC_3 (int ,scalar_t__,int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

BOOLEAN FUNC_4(tBTA_AG_SCB *VAR_13, tBTA_SERVICE_MASK VAR_14)
{
    tSDP_DISC_REC *VAR_15 = ((void*)0);
    tSDP_DISC_ATTR *VAR_16;
    tSDP_PROTOCOL_ELEM VAR_17;
    UINT16 VAR_18;
    BOOLEAN VAR_19 = VAR_6;

    if (VAR_14 & VAR_4) {
        VAR_18 = VAR_12;
        VAR_13->peer_version = VAR_7;
    } else if (VAR_14 & VAR_5 && VAR_13->role == VAR_2) {
        VAR_18 = VAR_11;
        VAR_13->peer_version = 0x0100;
    } else {
        return VAR_19;
    }


    while (VAR_8)
    {

        if ((VAR_15 = FUNC_3(VAR_13->p_disc_db, VAR_18, VAR_15)) == ((void*)0)) {
            if (VAR_18 == VAR_11) {

                VAR_18 = VAR_10;
                if ((VAR_15 = FUNC_3(VAR_13->p_disc_db, VAR_18, VAR_15)) == ((void*)0)) {
                    break;
                }
            } else {
                break;
            }
        }


        if (VAR_13->role == VAR_2) {
            if (FUNC_2(VAR_15, VAR_9, &VAR_17)) {
                VAR_13->peer_scn = (UINT8) VAR_17.params[0];
            } else {
                continue;
            }
        }

        FUNC_1(VAR_15, VAR_18, &VAR_13->peer_version);

        if (VAR_14 & VAR_4) {
            if ((VAR_16 = FUNC_0(VAR_15, VAR_1)) != ((void*)0)) {



                if (VAR_13->peer_features == 0)
                    VAR_13->peer_features = VAR_16->attr_value.v.u16;
            }
        } else {

            if ((VAR_16 = FUNC_0(VAR_15, VAR_0)) != ((void*)0)) {

                if (VAR_16->attr_value.v.u8) {
                    VAR_13->peer_features |= VAR_3;
                } else {
                    VAR_13->peer_features &= ~VAR_3;
                }
            }
        }

        VAR_19 = VAR_8;
        break;
    }
    return VAR_19;
}
