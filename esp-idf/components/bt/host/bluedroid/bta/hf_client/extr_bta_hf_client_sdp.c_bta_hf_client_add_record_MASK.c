
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_params; int * params; int protocol_uuid; } ;
typedef TYPE_1__ tSDP_PROTOCOL_ELEM ;
typedef int tBTA_HF_CLIENT_FEAT ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int ,int ,int,int *) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,TYPE_1__*) ;
 int FUNC_4 (int,int,int*) ;
 int FUNC_5 (int,int ,int,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int *,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_8 (char*) ;

BOOLEAN FUNC_9(char *VAR_20, UINT8 VAR_21,
                                 tBTA_HF_CLIENT_FEAT VAR_22, UINT32 VAR_23)
{
    tSDP_PROTOCOL_ELEM VAR_24[VAR_9];
    UINT16 VAR_25[VAR_10];
    UINT16 VAR_26[] = {VAR_19};
    UINT16 VAR_27;
    UINT16 VAR_28;
    BOOLEAN VAR_29 = VAR_13;
    UINT8 VAR_30[2];
    UINT16 VAR_31 = 0;

    FUNC_0("bta_hf_client_add_record");

    FUNC_7( VAR_24, 0 , VAR_9 * sizeof(tSDP_PROTOCOL_ELEM));


    VAR_24[0].protocol_uuid = VAR_15;
    VAR_24[0].num_params = 0;
    VAR_24[1].protocol_uuid = VAR_16;
    VAR_24[1].num_params = 1;
    VAR_24[1].params[0] = VAR_21;
    VAR_29 &= FUNC_3(VAR_23, VAR_9, VAR_24);


    VAR_25[0] = VAR_18;
    VAR_25[1] = VAR_17;
    VAR_29 &= FUNC_4(VAR_23, VAR_10, VAR_25);


    VAR_28 = VAR_18;
    VAR_27 = VAR_11;

    VAR_29 &= FUNC_2(VAR_23, VAR_28, VAR_27);


    if (VAR_20 != ((void*)0) && VAR_20[0] != 0) {
        VAR_29 &= FUNC_1(VAR_23, VAR_1, VAR_12,
                                   (UINT32)(FUNC_8(VAR_20) + 1), (UINT8 *) VAR_20);
    }


    if (VAR_22 & VAR_6) {
        VAR_31 |= VAR_6;
    }

    if (VAR_22 & VAR_3) {
        VAR_31 |= VAR_3;
    }

    if (VAR_22 & VAR_4) {
        VAR_31 |= VAR_4;
    }

    if (VAR_22 & VAR_8) {
        VAR_31 |= VAR_8;
    }

    if (VAR_22 & VAR_7) {
        VAR_31 |= VAR_7;
    }


    if (VAR_22 & VAR_5) {
        VAR_31 |= 0x0020;
    }

    FUNC_6(VAR_30, VAR_31);
    VAR_29 &= FUNC_1(VAR_23, VAR_2, VAR_14, 2, VAR_30);


    VAR_29 &= FUNC_5(VAR_23, VAR_0, 1, VAR_26);

    return VAR_29;
}
