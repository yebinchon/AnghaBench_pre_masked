
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* uuid16; } ;
struct TYPE_10__ {void* len; TYPE_1__ uu; } ;
typedef TYPE_2__ tSDP_UUID ;
typedef int tSDP_DISCOVERY_DB ;
typedef int tBTA_SERVICE_MASK ;
struct TYPE_11__ {scalar_t__ role; scalar_t__ hsp_version; int * p_disc_db; int peer_addr; } ;
typedef TYPE_3__ tBTA_AG_SCB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 scalar_t__ FUNC_0 (int *,int ,int,TYPE_2__*,int,int*) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int * VAR_17 ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(tBTA_AG_SCB *VAR_18, tBTA_SERVICE_MASK VAR_19)
{
    tSDP_UUID VAR_20[2];
    UINT16 VAR_21 = 1;
    UINT16 VAR_22[4];
    UINT8 VAR_23;
    BOOLEAN VAR_24 = VAR_11;


    if (VAR_19 & VAR_9 && VAR_18->role == VAR_8) {
        VAR_22[0] = VAR_3;
        VAR_22[1] = VAR_1;
        VAR_22[2] = VAR_0;
        VAR_22[3] = VAR_4;
        VAR_23 = 4;
        VAR_20[0].uu.uuid16 = VAR_16;
    } else if (VAR_19 & VAR_9 && VAR_18->role == VAR_5) {

        VAR_22[0] = VAR_3;
        VAR_22[1] = VAR_0;
        VAR_22[2] = VAR_4;
        VAR_23 = 3;
        VAR_20[0].uu.uuid16 = VAR_16;
    } else if (VAR_19 & VAR_10 && VAR_18->role == VAR_8) {

        VAR_22[0] = VAR_3;
        VAR_22[1] = VAR_1;
        VAR_22[2] = VAR_0;
        VAR_22[3] = VAR_2;
        VAR_23 = 4;
        VAR_20[0].uu.uuid16 = VAR_14;
        if (VAR_18->hsp_version >= VAR_12) {
            VAR_20[1].uu.uuid16 = VAR_15;
            VAR_21 = 2;
        }
    } else {

        return;
    }


    VAR_18->p_disc_db = (tSDP_DISCOVERY_DB *) FUNC_5(VAR_6);
    if(VAR_18->p_disc_db) {

        VAR_20[0].len = VAR_13;
        VAR_20[1].len = VAR_13;
        VAR_24 = FUNC_0(VAR_18->p_disc_db, VAR_6, VAR_21,
                            VAR_20, VAR_23, VAR_22);
    }

    if(VAR_24) {

        VAR_24 = FUNC_1(VAR_18->peer_addr, VAR_18->p_disc_db,
                                      VAR_17[FUNC_3(VAR_18) - 1]);
    }
    if(!VAR_24) {

        FUNC_2(VAR_18, ((void*)0));

        FUNC_4(VAR_18, VAR_7, ((void*)0));
    }
}
