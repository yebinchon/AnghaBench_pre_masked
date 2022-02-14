
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int mtu; int mtu_present; } ;
typedef TYPE_1__ tL2CAP_CFG_INFO ;
struct TYPE_10__ {int att_lcid; } ;
typedef TYPE_2__ tGATT_TCB ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_11__ {int local_mtu; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,int ,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 TYPE_6__ VAR_5 ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_8 (BD_ADDR VAR_6, UINT16 VAR_7, UINT16 VAR_8, UINT8 VAR_9)
{

    UINT8 VAR_10 = VAR_3;
    tL2CAP_CFG_INFO VAR_11;
    tGATT_TCB *VAR_12 = FUNC_5(VAR_6, VAR_0);
    FUNC_3(VAR_8);

    FUNC_0("Connection indication cid = %d", VAR_7);

    if (VAR_12 == ((void*)0)) {

        if ((VAR_12 = FUNC_4(VAR_6, VAR_0)) == ((void*)0)) {

            VAR_10 = VAR_2;
        } else {
            VAR_12->att_lcid = VAR_7;
        }

    } else {
        VAR_10 = VAR_2;
    }


    FUNC_2(VAR_6, VAR_9, VAR_7, VAR_10, 0);


    if (VAR_10 == VAR_3) {

        FUNC_6(VAR_12, VAR_1);


        FUNC_7(&VAR_11, 0, sizeof(tL2CAP_CFG_INFO));
        VAR_11.mtu_present = VAR_4;
        VAR_11.mtu = VAR_5.local_mtu;

        FUNC_1(VAR_7, &VAR_11);
    }

}
