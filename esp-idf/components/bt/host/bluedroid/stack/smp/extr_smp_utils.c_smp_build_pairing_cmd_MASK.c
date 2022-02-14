
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int local_r_key; int local_i_key; int loc_enc_size; int loc_auth_req; int loc_oob_flag; int local_io_capability; } ;
typedef TYPE_1__ tSMP_CB ;
typedef int UINT8 ;
struct TYPE_6__ {int offset; int len; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;

BT_HDR *FUNC_3(UINT8 VAR_2, tSMP_CB *VAR_3)
{
    BT_HDR *VAR_4 = ((void*)0) ;
    UINT8 *VAR_5;

    FUNC_0("smp_build_pairing_cmd");
    if ((VAR_4 = (BT_HDR *)FUNC_2(sizeof(BT_HDR) + VAR_1 + VAR_0)) != ((void*)0)) {
        VAR_5 = (UINT8 *)(VAR_4 + 1) + VAR_0;

        FUNC_1 (VAR_5, VAR_2);
        FUNC_1 (VAR_5, VAR_3->local_io_capability);
        FUNC_1 (VAR_5, VAR_3->loc_oob_flag);
        FUNC_1 (VAR_5, VAR_3->loc_auth_req);
        FUNC_1 (VAR_5, VAR_3->loc_enc_size);
        FUNC_1 (VAR_5, VAR_3->local_i_key);
        FUNC_1 (VAR_5, VAR_3->local_r_key);

        VAR_4->offset = VAR_0;

        VAR_4->len = VAR_1;
    }

    return VAR_4;
}
