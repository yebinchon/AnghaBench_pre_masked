
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ att_lcid; scalar_t__ payload_size; int tcb_idx; } ;
typedef TYPE_2__ tGATT_TCB ;
typedef int tGATT_SR_MSG ;
typedef int tGATTS_DATA ;
typedef size_t UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_12__ {TYPE_1__* cl_rcb; } ;
struct TYPE_11__ {scalar_t__ local_mtu; } ;
struct TYPE_9__ {int gatt_if; scalar_t__ in_use; } ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (scalar_t__,size_t*) ;
 int * FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 TYPE_6__ VAR_10 ;
 TYPE_5__ VAR_11 ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int ,int *) ;

__attribute__((used)) static void FUNC_7 (tGATT_TCB *VAR_12, UINT16 VAR_13, UINT8 *VAR_14)
{
    UINT16 VAR_15 = 0;
    UINT8 *VAR_16 = VAR_14, VAR_17;
    BT_HDR *VAR_18;
    UINT16 VAR_19;


    if (VAR_12->att_lcid != VAR_9) {
        FUNC_5 (VAR_12, VAR_7, VAR_6, 0, VAR_0);
    } else if (VAR_13 < VAR_5) {
        FUNC_1("invalid MTU request PDU received.\n");
        FUNC_5 (VAR_12, VAR_3, VAR_6, 0, VAR_0);
    } else {
        FUNC_2 (VAR_15, VAR_16);

        if (VAR_15 < VAR_2) {
            VAR_12->payload_size = VAR_2;
        } else if (VAR_15 > VAR_11.local_mtu) {
            VAR_12->payload_size = VAR_11.local_mtu;
        } else {
            VAR_12->payload_size = VAR_15;
        }






        if ((VAR_18 = FUNC_3(VAR_12, VAR_8, (tGATT_SR_MSG *) &VAR_12->payload_size)) != ((void*)0)) {
            FUNC_4 (VAR_12, VAR_18);




            for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17 ++) {
                if (VAR_10.cl_rcb[VAR_17].in_use ) {
                    VAR_19 = FUNC_0(VAR_12->tcb_idx, VAR_10.cl_rcb[VAR_17].gatt_if);
                    FUNC_6(VAR_19, 0, VAR_1,
                                              (tGATTS_DATA *)&VAR_12->payload_size);
                }
            }

        }
    }
}
