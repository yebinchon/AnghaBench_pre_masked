
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_params; int* params; int protocol_uuid; } ;
typedef TYPE_1__ tSDP_PROTOCOL_ELEM ;
typedef int tBTA_AG_FEAT ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (int,int ,int ,int,int*) ;
 scalar_t__ FUNC_2 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (int,int ,int,scalar_t__*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_8 (char*) ;

BOOLEAN FUNC_9(UINT16 VAR_22, char *VAR_23, UINT8 VAR_24,
                          tBTA_AG_FEAT VAR_25, UINT32 VAR_26)
{
    tSDP_PROTOCOL_ELEM VAR_27[VAR_6];
    UINT16 VAR_28[VAR_7];
    UINT16 VAR_29[] = {VAR_21};
    UINT16 VAR_30;
    UINT16 VAR_31;
    UINT8 VAR_32;
    BOOLEAN VAR_33 = VAR_13;
    BOOLEAN VAR_34 = VAR_9;
    UINT8 VAR_35[2];

    FUNC_0("bta_ag_add_record uuid: %x", VAR_22);

    FUNC_7( VAR_27, 0 , VAR_6*sizeof(tSDP_PROTOCOL_ELEM));

    VAR_27[0].protocol_uuid = VAR_15;
    VAR_27[0].num_params = 0;
    VAR_27[1].protocol_uuid = VAR_16;
    VAR_27[1].num_params = 1;
    VAR_27[1].params[0] = VAR_24;
    VAR_33 &= FUNC_3(VAR_26, VAR_6, VAR_27);


    VAR_28[0] = VAR_22;
    VAR_28[1] = VAR_18;
    VAR_33 &= FUNC_4(VAR_26, VAR_7, VAR_28);


    if (VAR_22 == VAR_17) {
        VAR_31 = VAR_20;
        VAR_30 = VAR_10;
    } else {
        VAR_31 = VAR_19;
        VAR_30 = VAR_11;
    }
    VAR_33 &= FUNC_2(VAR_26, VAR_31, VAR_30);


    if (VAR_23 != ((void*)0) && VAR_23[0] != 0) {
        VAR_33 &= FUNC_1(VAR_26, VAR_2, VAR_12,
                    (UINT32)(FUNC_8(VAR_23)+1), (UINT8 *) VAR_23);
    }


    if (VAR_22 == VAR_17) {
        VAR_32 = (VAR_25 & VAR_5) ? 1 : 0;
        VAR_33 &= FUNC_1(VAR_26, VAR_1,
                    VAR_14, 1, &VAR_32);

        if (VAR_25 & VAR_4) {
            VAR_34 = VAR_13;
        }
        VAR_25 &= VAR_8;

        if (VAR_34) {
            VAR_25 |= 0x0020;
        }
        FUNC_6(VAR_35, VAR_25);
        VAR_33 &= FUNC_1(VAR_26, VAR_3, VAR_14, 2, VAR_35);
    }

    VAR_33 &= FUNC_5(VAR_26, VAR_0, 1, VAR_29);
    return VAR_33;
}
