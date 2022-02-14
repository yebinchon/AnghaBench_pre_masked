
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int peer_r_key; int peer_i_key; int peer_enc_size; int peer_auth_req; int peer_oob_flag; int peer_io_caps; } ;
typedef TYPE_1__ tSMP_CB ;
typedef int UINT8 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2( tSMP_CB *VAR_0, UINT8 **VAR_1, UINT8 VAR_2)
{
    UINT8 *VAR_3 = *VAR_1;

    FUNC_0 ("smp_concatenate_peer \n");
    FUNC_1(VAR_3, VAR_2);
    FUNC_1(VAR_3, VAR_0->peer_io_caps);
    FUNC_1(VAR_3, VAR_0->peer_oob_flag);
    FUNC_1(VAR_3, VAR_0->peer_auth_req);
    FUNC_1(VAR_3, VAR_0->peer_enc_size);
    FUNC_1(VAR_3, VAR_0->peer_i_key);
    FUNC_1(VAR_3, VAR_0->peer_r_key);

    *VAR_1 = VAR_3;
}
