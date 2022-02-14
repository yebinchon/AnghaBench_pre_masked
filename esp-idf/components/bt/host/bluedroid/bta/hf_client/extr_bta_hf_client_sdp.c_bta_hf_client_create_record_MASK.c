
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int features; int name; } ;
struct TYPE_6__ {TYPE_1__ api_register; } ;
typedef TYPE_2__ tBTA_HF_CLIENT_DATA ;
struct TYPE_7__ {scalar_t__ sdp_handle; int scn; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 TYPE_4__ VAR_1 ;
 int FUNC_3 (int ) ;

void FUNC_4(tBTA_HF_CLIENT_DATA *VAR_2)
{

    if (VAR_1.sdp_handle == 0) {
        VAR_1.sdp_handle = FUNC_1();
        VAR_1.scn = FUNC_0();
        FUNC_2(VAR_2->api_register.name,
                                 VAR_1.scn,
                                 VAR_2->api_register.features,
                                 VAR_1.sdp_handle);

        FUNC_3(VAR_0);
    }

}
