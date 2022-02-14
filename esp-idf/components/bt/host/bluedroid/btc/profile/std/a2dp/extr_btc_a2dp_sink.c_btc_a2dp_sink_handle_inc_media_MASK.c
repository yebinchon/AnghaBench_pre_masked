
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int offset; int num_frames_to_be_processed; scalar_t__ len; } ;
typedef TYPE_2__ tBT_SBC_HDR ;
typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_5__ {scalar_t__ rx_flush; } ;
struct TYPE_7__ {int * pcmData; int context; TYPE_1__ btc_aa_snk_cb; } ;
typedef int OI_UINT32 ;
typedef int OI_STATUS ;
typedef int OI_INT16 ;
typedef int OI_BYTE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int const**,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void FUNC_7(tBT_SBC_HDR *VAR_2)
{
    UINT8 *VAR_3 = ((UINT8 *)(VAR_2 + 1) + VAR_2->offset + 1);
    int VAR_4;
    UINT32 VAR_5, VAR_6;
    OI_INT16 *VAR_7 = VAR_1.pcmData;
    OI_STATUS VAR_8;
    int VAR_9 = VAR_2->num_frames_to_be_processed;
    UINT32 VAR_10 = VAR_2->len - 1;
    VAR_6 = sizeof(VAR_1.pcmData);


    if (FUNC_6() == VAR_0 || (VAR_1.btc_aa_snk_cb.rx_flush)) {
        FUNC_0(" State Changed happened in this tick ");
        return;
    }


    if (!FUNC_5()) {
        return;
    }

    FUNC_0("Number of sbc frames %d, frame_len %d\n", VAR_9, VAR_10);

    for (VAR_4 = 0; VAR_4 < VAR_9 && VAR_10 != 0; VAR_4 ++) {
        VAR_5 = VAR_6;
        VAR_8 = FUNC_2(&VAR_1.context, (const OI_BYTE **)&VAR_3,
                                          (OI_UINT32 *)&VAR_10,
                                          (OI_INT16 *)VAR_7,
                                          (OI_UINT32 *)&VAR_5);
        if (!FUNC_3(VAR_8)) {
            FUNC_1("Decoding failure: %d\n", VAR_8);
            break;
        }
        VAR_6 -= VAR_5;
        VAR_7 += VAR_5 / 2;
        VAR_2->offset += (VAR_2->len - 1) - VAR_10;
        VAR_2->len = VAR_10 + 1;
    }

    FUNC_4((uint8_t *)VAR_1.pcmData, (sizeof(VAR_1.pcmData) - VAR_6));
}
