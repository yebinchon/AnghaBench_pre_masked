
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
struct TYPE_11__ {char* service_name; int l2cap_psm; int profile_version; int rfcomm_channel_number; int service_name_length; int type; } ;
struct TYPE_12__ {int supported_features; TYPE_1__ hdr; int supported_message_types; int mas_instance_id; } ;
struct TYPE_17__ {TYPE_2__ mas; } ;
typedef TYPE_7__ bluetooth_sdp_record ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_6__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int*) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(bluetooth_sdp_record *VAR_8, tSDP_DISC_REC *VAR_9)
{
    tSDP_DISC_ATTR *VAR_10;
    tSDP_PROTOCOL_ELEM VAR_11;
    UINT16 VAR_12 = -1;

    VAR_8->mas.hdr.type = VAR_5;
    VAR_8->mas.hdr.service_name_length = 0;
    VAR_8->mas.hdr.service_name = ((void*)0);
    VAR_8->mas.hdr.rfcomm_channel_number = 0;
    VAR_8->mas.hdr.l2cap_psm = -1;
    VAR_8->mas.hdr.profile_version = 0;
    VAR_8->mas.mas_instance_id = 0;
    VAR_8->mas.supported_features = 0x0000001F;
    VAR_8->mas.supported_message_types = 0;

    if ((VAR_10 = FUNC_1(VAR_9, VAR_2)) != ((void*)0)) {
        VAR_8->mas.mas_instance_id = VAR_10->attr_value.v.u8;
    }

    if ((VAR_10 = FUNC_1(VAR_9, VAR_4)) != ((void*)0)) {
        VAR_8->mas.supported_message_types = VAR_10->attr_value.v.u8;
    }

    if ((VAR_10 = FUNC_1(VAR_9, VAR_1)) != ((void*)0)) {
        VAR_8->mas.supported_features = VAR_10->attr_value.v.u32;
    }

    if ((VAR_10 = FUNC_1(VAR_9, VAR_3)) != ((void*)0)) {
        VAR_8->mas.hdr.service_name_length = FUNC_0(VAR_10->attr_len_type);
        VAR_8->mas.hdr.service_name = (char *)VAR_10->attr_value.v.array;
    }

    if (FUNC_2(VAR_9, VAR_7, &VAR_12)) {
        VAR_8->mas.hdr.profile_version = VAR_12;
    }

    if (FUNC_3(VAR_9, VAR_6, &VAR_11)) {
        VAR_8->mas.hdr.rfcomm_channel_number = VAR_11.params[0];
    }

    if ((VAR_10 = FUNC_1(VAR_9, VAR_0)) != ((void*)0)) {
        VAR_8->mas.hdr.l2cap_psm = VAR_10->attr_value.v.u16;
    }
}
