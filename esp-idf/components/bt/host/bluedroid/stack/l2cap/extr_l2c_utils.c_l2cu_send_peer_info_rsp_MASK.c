
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ transport; } ;
typedef TYPE_2__ tL2C_LCB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_9__ {int test_info_resp; TYPE_1__* fixed_reg; } ;
struct TYPE_7__ {int * pL2CA_FixedConn_Cb; } ;
typedef int BT_HDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (char*) ;
 int VAR_28 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 TYPE_5__ VAR_29 ;
 int * FUNC_4 (TYPE_2__*,int ,int ,int) ;
 int FUNC_5 (int*,int ,scalar_t__) ;

void FUNC_6 (tL2C_LCB *VAR_30, UINT8 VAR_31, UINT16 VAR_32)
{
    BT_HDR *VAR_33;
    UINT8 *VAR_34;
    UINT16 VAR_35 = VAR_24;


    if ((VAR_32 == VAR_8)
            && (VAR_29.test_info_resp & (VAR_9 | VAR_14 |
                                       VAR_13 | VAR_10 |
                                       VAR_12 | VAR_11 |
                                       VAR_16 )) )






    {
        VAR_35 += VAR_7;
    } else if (VAR_32 == VAR_18) {
        VAR_35 += VAR_19;
    } else if (VAR_32 == VAR_6) {
        VAR_35 += VAR_5;
    }

    if ((VAR_33 = FUNC_4(VAR_30, VAR_35, VAR_3, VAR_31)) == ((void*)0)) {
        FUNC_0 ("L2CAP - no buffer for info_rsp");
        return;
    }

    VAR_34 = (UINT8 *)(VAR_33 + 1) + VAR_27 + VAR_1 +
        VAR_26 + VAR_4;

    FUNC_1 (VAR_34, VAR_32);


    if ((VAR_32 == VAR_8)
            && (VAR_29.test_info_resp & ( VAR_9 | VAR_14
                                        | VAR_16 )) )





    {
        FUNC_1 (VAR_34, VAR_23);

        if (VAR_30->transport == VAR_0) {

            FUNC_2 (VAR_34, VAR_2);
        } else

        {

            FUNC_2 (VAR_34, VAR_29.test_info_resp);







        }
    } else if (VAR_32 == VAR_18) {
        FUNC_1 (VAR_34, VAR_23);
        FUNC_5 (VAR_34, 0, VAR_19);

        VAR_34[0] = VAR_21;

        if ( VAR_15 & VAR_16 ) {
            VAR_34[0] |= VAR_20;
        }
    } else if (VAR_32 == VAR_6) {
        FUNC_1 (VAR_34, VAR_23);
        FUNC_1 (VAR_34, VAR_28);
    } else {
        FUNC_1 (VAR_34, VAR_22);
    }

    FUNC_3 (VAR_30, ((void*)0), VAR_33);
}
