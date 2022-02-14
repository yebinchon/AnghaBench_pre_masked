
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_DATA ;
struct TYPE_2__ {scalar_t__ sdp_handle; int scn; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (int ) ;

void FUNC_6(tBTA_HF_CLIENT_DATA *VAR_3)
{
    FUNC_4(VAR_3);

    FUNC_0("bta_hf_client_del_record");

    if (VAR_2.sdp_handle != 0) {
        FUNC_3(VAR_2.sdp_handle);
        VAR_2.sdp_handle = 0;
        FUNC_1(VAR_2.scn);
        FUNC_2(VAR_0);
        FUNC_5(VAR_1);
    }
}
