
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct ble_hs_adv_fields {scalar_t__ flags; int num_uuids16; int num_uuids32; int num_uuids128; int name_len; int num_public_tgt_addrs; int mfg_data_len; int * mfg_data; int uri_len; int * uri; int svc_data_uuid128_len; int * svc_data_uuid128; int svc_data_uuid32_len; int * svc_data_uuid32; int adv_itvl; scalar_t__ adv_itvl_is_present; int appearance; scalar_t__ appearance_is_present; int * public_tgt_addr; int svc_data_uuid16_len; int * svc_data_uuid16; int * slave_itvl_range; int tx_pwr_lvl; scalar_t__ tx_pwr_lvl_is_present; scalar_t__ name_is_complete; int * name; TYPE_3__* uuids128; scalar_t__ uuids128_is_complete; TYPE_2__* uuids32; scalar_t__ uuids32_is_complete; TYPE_1__* uuids16; scalar_t__ uuids16_is_complete; } ;
struct TYPE_6__ {int u; } ;
struct TYPE_5__ {int u; } ;
struct TYPE_4__ {int u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

void
FUNC_6(const struct ble_hs_adv_fields *VAR_4)
{
    char VAR_5[VAR_0];
    const uint8_t *VAR_6;
    int VAR_7;

    if (VAR_4->flags != 0) {
        FUNC_0(VAR_3, "    flags=0x%02x\n", VAR_4->flags);
    }

    if (VAR_4->uuids16 != ((void*)0)) {
        FUNC_0(VAR_3, "    uuids16(%scomplete)=",
                    VAR_4->uuids16_is_complete ? "" : "in");
        for (VAR_7 = 0; VAR_7 < VAR_4->num_uuids16; VAR_7++) {
            FUNC_5(&VAR_4->uuids16[VAR_7].u);
            FUNC_0(VAR_3, " ");
        }
        FUNC_0(VAR_3, "\n");
    }

    if (VAR_4->uuids32 != ((void*)0)) {
        FUNC_0(VAR_3, "    uuids32(%scomplete)=",
                    VAR_4->uuids32_is_complete ? "" : "in");
        for (VAR_7 = 0; VAR_7 < VAR_4->num_uuids32; VAR_7++) {
            FUNC_5(&VAR_4->uuids32[VAR_7].u);
            FUNC_0(VAR_3, " ");
        }
        FUNC_0(VAR_3, "\n");
    }

    if (VAR_4->uuids128 != ((void*)0)) {
        FUNC_0(VAR_3, "    uuids128(%scomplete)=",
                    VAR_4->uuids128_is_complete ? "" : "in");
        for (VAR_7 = 0; VAR_7 < VAR_4->num_uuids128; VAR_7++) {
            FUNC_5(&VAR_4->uuids128[VAR_7].u);
            FUNC_0(VAR_3, " ");
        }
        FUNC_0(VAR_3, "\n");
    }

    if (VAR_4->name != ((void*)0)) {
        FUNC_2(VAR_4->name_len < sizeof VAR_5 - 1);
        FUNC_3(VAR_5, VAR_4->name, VAR_4->name_len);
        VAR_5[VAR_4->name_len] = '\0';
        FUNC_0(VAR_3, "    name(%scomplete)=%s\n",
                    VAR_4->name_is_complete ? "" : "in", VAR_5);
    }

    if (VAR_4->tx_pwr_lvl_is_present) {
        FUNC_0(VAR_3, "    tx_pwr_lvl=%d\n", VAR_4->tx_pwr_lvl);
    }

    if (VAR_4->slave_itvl_range != ((void*)0)) {
        FUNC_0(VAR_3, "    slave_itvl_range=");
        FUNC_4(VAR_4->slave_itvl_range, VAR_2);
        FUNC_0(VAR_3, "\n");
    }

    if (VAR_4->svc_data_uuid16 != ((void*)0)) {
        FUNC_0(VAR_3, "    svc_data_uuid16=");
        FUNC_4(VAR_4->svc_data_uuid16, VAR_4->svc_data_uuid16_len);
        FUNC_0(VAR_3, "\n");
    }

    if (VAR_4->public_tgt_addr != ((void*)0)) {
        FUNC_0(VAR_3, "    public_tgt_addr=");
        VAR_6 = VAR_4->public_tgt_addr;
        for (VAR_7 = 0; VAR_7 < VAR_4->num_public_tgt_addrs; VAR_7++) {
            FUNC_0(VAR_3, "public_tgt_addr=%s ", FUNC_1(VAR_6));
            VAR_6 += VAR_1;
        }
        FUNC_0(VAR_3, "\n");
    }

    if (VAR_4->appearance_is_present) {
        FUNC_0(VAR_3, "    appearance=0x%04x\n", VAR_4->appearance);
    }

    if (VAR_4->adv_itvl_is_present) {
        FUNC_0(VAR_3, "    adv_itvl=0x%04x\n", VAR_4->adv_itvl);
    }

    if (VAR_4->svc_data_uuid32 != ((void*)0)) {
        FUNC_0(VAR_3, "    svc_data_uuid32=");
        FUNC_4(VAR_4->svc_data_uuid32, VAR_4->svc_data_uuid32_len);
        FUNC_0(VAR_3, "\n");
    }

    if (VAR_4->svc_data_uuid128 != ((void*)0)) {
        FUNC_0(VAR_3, "    svc_data_uuid128=");
        FUNC_4(VAR_4->svc_data_uuid128, VAR_4->svc_data_uuid128_len);
        FUNC_0(VAR_3, "\n");
    }

    if (VAR_4->uri != ((void*)0)) {
        FUNC_0(VAR_3, "    uri=");
        FUNC_4(VAR_4->uri, VAR_4->uri_len);
        FUNC_0(VAR_3, "\n");
    }

    if (VAR_4->mfg_data != ((void*)0)) {
        FUNC_0(VAR_3, "    mfg_data=");
        FUNC_4(VAR_4->mfg_data, VAR_4->mfg_data_len);
        FUNC_0(VAR_3, "\n");
    }
}
