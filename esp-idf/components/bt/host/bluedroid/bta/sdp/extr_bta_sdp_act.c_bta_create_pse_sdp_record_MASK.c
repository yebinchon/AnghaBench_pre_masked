
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int * params; } ;
typedef TYPE_5__ tSDP_PROTOCOL_ELEM ;
typedef int tSDP_DISC_REC ;
struct TYPE_13__ {int u32; int u16; scalar_t__ array; int u8; } ;
struct TYPE_14__ {TYPE_3__ v; } ;
struct TYPE_16__ {TYPE_4__ attr_value; int attr_len_type; } ;
typedef TYPE_6__ tSDP_DISC_ATTR ;
struct TYPE_11__ {char* service_name; int l2cap_psm; int rfcomm_channel_number; int profile_version; int service_name_length; int type; } ;
struct TYPE_12__ {int supported_features; TYPE_1__ hdr; int supported_repositories; } ;
struct TYPE_17__ {TYPE_2__ pse; } ;
typedef TYPE_7__ bluetooth_sdp_record ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_6__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_5__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(bluetooth_sdp_record *VAR_7, tSDP_DISC_REC *VAR_8)
{
    tSDP_DISC_ATTR *VAR_9;
    UINT16 VAR_10;
    tSDP_PROTOCOL_ELEM VAR_11;

    VAR_7->pse.hdr.type = VAR_4;
    VAR_7->pse.hdr.service_name_length = 0;
    VAR_7->pse.hdr.service_name = ((void*)0);
    VAR_7->pse.hdr.rfcomm_channel_number = 0;
    VAR_7->pse.hdr.l2cap_psm = -1;
    VAR_7->pse.hdr.profile_version = 0;
    VAR_7->pse.supported_features = 0x00000003;
    VAR_7->pse.supported_repositories = 0;

    if ((VAR_9 = FUNC_1(VAR_8, VAR_3)) != ((void*)0)) {
        VAR_7->pse.supported_repositories = VAR_9->attr_value.v.u8;
    }
    if ((VAR_9 = FUNC_1(VAR_8, VAR_1)) != ((void*)0)) {
        VAR_7->pse.supported_features = VAR_9->attr_value.v.u32;
    }

    if ((VAR_9 = FUNC_1(VAR_8, VAR_2)) != ((void*)0)) {
        VAR_7->pse.hdr.service_name_length = FUNC_0(VAR_9->attr_len_type);
        VAR_7->pse.hdr.service_name = (char *)VAR_9->attr_value.v.array;
    }

    if (FUNC_2(VAR_8, VAR_6, &VAR_10)) {
        VAR_7->pse.hdr.profile_version = VAR_10;
    }

    if (FUNC_3(VAR_8, VAR_5, &VAR_11)) {
        VAR_7->pse.hdr.rfcomm_channel_number = VAR_11.params[0];
    }

    if ((VAR_9 = FUNC_1(VAR_8, VAR_0)) != ((void*)0)) {
        VAR_7->pse.hdr.l2cap_psm = VAR_9->attr_value.v.u16;
    }
}
