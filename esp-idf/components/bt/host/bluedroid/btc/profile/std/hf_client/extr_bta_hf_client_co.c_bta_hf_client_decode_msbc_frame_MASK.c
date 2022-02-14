
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {int decoder_context_data; int decoder_context; scalar_t__ decode_raw_data; } ;
struct TYPE_3__ {scalar_t__ sbc_plc_out; int plc_state; int first_good_frame_found; } ;
typedef int OI_UINT32 ;
typedef int OI_STATUS ;
typedef int OI_INT16 ;
typedef int OI_BYTE ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_2 (int *,int const**,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int,int,int,int ,int ) ;






 scalar_t__ FUNC_4 (int) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 (int const*,int ) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int *,scalar_t__) ;
 int * FUNC_8 () ;

__attribute__((used)) static void FUNC_9(UINT8 **VAR_7, UINT8 *VAR_8, BOOLEAN VAR_9){
    OI_STATUS VAR_10;
    const OI_BYTE *VAR_11;
    UINT8 VAR_12 = VAR_0;
    UINT32 VAR_13 = VAR_3;

    if (VAR_9){
        VAR_10 = 134;
    } else {
        VAR_10 = FUNC_2(&VAR_5.decoder_context, (const OI_BYTE **)VAR_7,
                                          (OI_UINT32 *)VAR_8,
                                          (OI_INT16 *)VAR_5.decode_raw_data,
                                          (OI_UINT32 *)&VAR_13);
    }



    switch(VAR_10){
        case 129:
            VAR_6.first_good_frame_found = VAR_4;
            FUNC_7(&(VAR_6.plc_state), (int16_t *)VAR_5.decode_raw_data, VAR_6.sbc_plc_out);
        case 131:
        case 132:
        case 133:
            break;
        case 130:
        case 134:
            if (!VAR_6.first_good_frame_found) {
                break;
            }
            VAR_11 = FUNC_8();
            VAR_13 = VAR_3;
            VAR_10 = FUNC_2(&VAR_5.decoder_context, &VAR_11,
                                                (OI_UINT32 *)&VAR_12,
                                                (OI_INT16 *)VAR_5.decode_raw_data,
                                                (OI_UINT32 *)&VAR_13);
            FUNC_6(&(VAR_6.plc_state), VAR_5.decode_raw_data, VAR_6.sbc_plc_out);
            FUNC_0("bad frame, using PLC to fix it.");
            break;
        case 128:



            FUNC_1("Frame decode error: OI_STATUS_INVALID_PARAMETERS");

            if (!FUNC_4(FUNC_3(&VAR_5.decoder_context, VAR_5.decoder_context_data,
                                       VAR_2 * sizeof(OI_UINT32), 1, 1, VAR_1, VAR_4))) {
                FUNC_1("OI_CODEC_SBC_DecoderReset failed with error code %d\n", VAR_10);
            }
            break;
        default:
            FUNC_1("Frame decode error: %d", VAR_10);
            break;
    }


    if (FUNC_4(VAR_10)){
        FUNC_5((const uint8_t *)(VAR_6.sbc_plc_out), VAR_13);
    }
}
