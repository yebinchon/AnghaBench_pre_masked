
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* uuid16; } ;
struct TYPE_8__ {void* len; TYPE_1__ uu; } ;
typedef TYPE_3__ tSDP_UUID ;
typedef int tSDP_DISCOVERY_DB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_7__ {scalar_t__ role; int * p_disc_db; int peer_addr; } ;
struct TYPE_9__ {TYPE_2__ scb; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (int *,int ,int,TYPE_3__*,int,int*) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 void* VAR_9 ;
 TYPE_4__ VAR_10 ;
 int FUNC_2 (int *) ;
 int VAR_11 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(void)
{
    tSDP_UUID VAR_12[2];
    UINT16 VAR_13 = 1;
    UINT16 VAR_14[4];
    UINT8 VAR_15;
    BOOLEAN VAR_16 = VAR_7;


    if (VAR_10.scb.role == VAR_5) {
        VAR_14[0] = VAR_2;
        VAR_14[1] = VAR_1;
        VAR_14[2] = VAR_0;
        VAR_14[3] = VAR_3;
        VAR_15 = 4;
        VAR_12[0].uu.uuid16 = VAR_9;
    }

    else {
        VAR_14[0] = VAR_2;
        VAR_14[1] = VAR_0;
        VAR_14[2] = VAR_3;
        VAR_15 = 3;
        VAR_12[0].uu.uuid16 = VAR_9;
    }


    VAR_10.scb.p_disc_db = (tSDP_DISCOVERY_DB *) FUNC_4(VAR_6);

    if (VAR_10.scb.p_disc_db) {

        VAR_12[0].len = VAR_8;
        VAR_12[1].len = VAR_8;
        VAR_16 = FUNC_0(VAR_10.scb.p_disc_db, VAR_6, VAR_13,
                                        VAR_12, VAR_15, VAR_14);
    }

    if (VAR_16) {

        VAR_16 = FUNC_1(VAR_10.scb.peer_addr,
                    VAR_10.scb.p_disc_db, VAR_11);
    }

    if (!VAR_16) {

        FUNC_2(((void*)0));

        FUNC_3(VAR_4, ((void*)0));
    }

}
