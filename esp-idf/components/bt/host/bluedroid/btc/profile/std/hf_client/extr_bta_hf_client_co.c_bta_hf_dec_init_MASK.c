
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int decoder_context_data; int decoder_context; } ;
struct TYPE_3__ {int plc_state; } ;
typedef int OI_UINT32 ;
typedef int OI_STATUS ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,int,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void) {

    FUNC_3(&(VAR_4.plc_state));


    OI_STATUS VAR_5;

    VAR_5 = FUNC_1(&VAR_3.decoder_context, VAR_3.decoder_context_data,
                                       VAR_1 * sizeof(OI_UINT32), 1, 1, VAR_0, VAR_2);
    if (!FUNC_2(VAR_5)) {
        FUNC_0("OI_CODEC_SBC_DecoderReset failed with error code %d\n", VAR_5);
    }
}
