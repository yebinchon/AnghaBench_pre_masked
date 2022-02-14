
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_21__ {int * params; } ;
typedef TYPE_7__ tSDP_PROTOCOL_ELEM ;
typedef int tSDP_DISC_REC ;
struct TYPE_15__ {scalar_t__ array; } ;
struct TYPE_16__ {TYPE_1__ v; } ;
struct TYPE_22__ {TYPE_2__ attr_value; int attr_len_type; } ;
typedef TYPE_8__ tSDP_DISC_ATTR ;
struct TYPE_19__ {int rfcomm_channel_number; int l2cap_psm; int profile_version; int user1_ptr; int user1_ptr_len; int * service_name; scalar_t__ service_name_length; int type; } ;
struct TYPE_17__ {char* service_name; int rfcomm_channel_number; int service_name_length; } ;
struct TYPE_18__ {TYPE_3__ hdr; } ;
struct TYPE_23__ {TYPE_5__ hdr; TYPE_4__ pse; } ;
typedef TYPE_9__ bluetooth_sdp_record ;
struct TYPE_20__ {int raw_data; int raw_size; } ;
struct TYPE_14__ {TYPE_6__* p_sdp_db; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_8__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_10__* VAR_3 ;

__attribute__((used)) static void FUNC_3(bluetooth_sdp_record *VAR_4, tSDP_DISC_REC *VAR_5)
{
    tSDP_DISC_ATTR *VAR_6;
    tSDP_PROTOCOL_ELEM VAR_7;

    VAR_4->hdr.type = VAR_1;
    VAR_4->hdr.service_name_length = 0;
    VAR_4->hdr.service_name = ((void*)0);
    VAR_4->hdr.rfcomm_channel_number = -1;
    VAR_4->hdr.l2cap_psm = -1;
    VAR_4->hdr.profile_version = -1;


    if ((VAR_6 = FUNC_1(VAR_5, VAR_0)) != ((void*)0)) {
        VAR_4->pse.hdr.service_name_length = FUNC_0(VAR_6->attr_len_type);
        VAR_4->pse.hdr.service_name = (char *)VAR_6->attr_value.v.array;
    }


    if (FUNC_2(VAR_5, VAR_2, &VAR_7)) {
        VAR_4->pse.hdr.rfcomm_channel_number = VAR_7.params[0];
    }
    VAR_4->hdr.user1_ptr_len = VAR_3->p_sdp_db->raw_size;
    VAR_4->hdr.user1_ptr = VAR_3->p_sdp_db->raw_data;
}
