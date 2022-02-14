
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * peer_chnl_mask; int peer_ext_fea; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int BOOLEAN ;
typedef int* BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int ,int ) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int*,int ) ;
 int FUNC_3 (int *,int *,int ) ;

BOOLEAN FUNC_4 (BD_ADDR VAR_4, UINT32 *VAR_5, UINT8 *VAR_6)
{
    tL2C_LCB *VAR_7;


    if ((VAR_7 = FUNC_2 (VAR_4, VAR_0)) == ((void*)0)) {
        FUNC_1 ("L2CA_GetPeerFeatures() No BDA: %08x%04x",
                             (VAR_4[0] << 24) + (VAR_4[1] << 16) + (VAR_4[2] << 8) + VAR_4[3],
                             (VAR_4[4] << 8) + VAR_4[5]);
        return (VAR_1);
    }

    FUNC_0 ("L2CA_GetPeerFeatures() BDA: %08x%04x  ExtFea: 0x%08x  Chnl_Mask[0]: 0x%02x",
                     (VAR_4[0] << 24) + (VAR_4[1] << 16) + (VAR_4[2] << 8) + VAR_4[3],
                     (VAR_4[4] << 8) + VAR_4[5], VAR_7->peer_ext_fea, VAR_7->peer_chnl_mask[0]);

    *VAR_5 = VAR_7->peer_ext_fea;

    FUNC_3 (VAR_6, VAR_7->peer_chnl_mask, VAR_2);

    return (VAR_3);
}
