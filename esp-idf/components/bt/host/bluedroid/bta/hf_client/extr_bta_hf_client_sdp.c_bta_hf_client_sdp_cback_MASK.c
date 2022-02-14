
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* event; } ;
struct TYPE_8__ {void* status; TYPE_2__ hdr; } ;
typedef TYPE_3__ tBTA_HF_CLIENT_DISC_RESULT ;
typedef void* UINT16 ;
struct TYPE_6__ {scalar_t__ role; } ;
struct TYPE_9__ {TYPE_1__ scb; } ;


 int FUNC_0 (char*,void*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(UINT16 VAR_4)
{
    tBTA_HF_CLIENT_DISC_RESULT *VAR_5;
    UINT16 VAR_6;

    FUNC_0("bta_hf_client_sdp_cback status:0x%x", VAR_4);


    if (VAR_3.scb.role == VAR_0) {
        VAR_6 = VAR_1;
    } else {
        VAR_6 = VAR_2;
    }

    if ((VAR_5 = (tBTA_HF_CLIENT_DISC_RESULT *) FUNC_2(sizeof(tBTA_HF_CLIENT_DISC_RESULT))) != ((void*)0)) {
        VAR_5->hdr.event = VAR_6;
        VAR_5->status = VAR_4;
        FUNC_1(VAR_5);
    }
}
