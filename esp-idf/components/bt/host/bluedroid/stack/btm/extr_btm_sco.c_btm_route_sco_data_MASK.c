
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBTM_SCO_DATA_FLAG ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_7__ {int (* p_data_cb ) (int ,TYPE_2__*,int ) ;} ;
struct TYPE_9__ {TYPE_1__ sco_cb; } ;
struct TYPE_8__ {int offset; int len; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__,scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_6__ VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_2__*,int ) ;

void FUNC_9(BT_HDR *VAR_2)
{

    UINT16 VAR_3, VAR_4;
    UINT8 *VAR_5 = (UINT8 *)(VAR_2 + 1) + VAR_2->offset;
    UINT8 VAR_6 = 0;
    UINT8 VAR_7 = 0;


    FUNC_3 (VAR_4, VAR_5);
    VAR_7 = FUNC_1(VAR_4);
    VAR_4 = FUNC_2 (VAR_4);

    FUNC_4 (VAR_6, VAR_5);
    FUNC_5(VAR_6);
    if ((VAR_3 = FUNC_6(VAR_4)) != VAR_0 ) {

        if (!VAR_1.sco_cb.p_data_cb )

        {
            FUNC_7 (VAR_2);
        } else {
            (*VAR_1.sco_cb.p_data_cb)(VAR_3, VAR_2, (tBTM_SCO_DATA_FLAG) VAR_7);
        }
    } else {
        FUNC_7 (VAR_2);
    }
    FUNC_0 ("SCO: hdl %x, len %d, pkt_sz %d\n", VAR_4, VAR_2->len, VAR_6);



}
