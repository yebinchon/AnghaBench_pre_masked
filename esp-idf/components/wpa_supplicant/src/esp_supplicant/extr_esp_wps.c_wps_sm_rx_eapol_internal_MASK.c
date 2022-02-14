
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wps_sm {int wps_timeout_timer; TYPE_1__* wps; int current_identifier; int wps_eapol_start_timer; } ;
struct ieee802_1x_hdr {int type; int version; int length; } ;
struct eap_hdr {int code; int identifier; int length; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 struct wps_sm* VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,char*,int*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 (int*,int ,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;

int FUNC_13(u8 *VAR_15, u8 *VAR_16, u32 VAR_17)
{
    struct wps_sm *VAR_18 = VAR_13;
    u32 VAR_19, VAR_20, VAR_21;
    struct ieee802_1x_hdr *VAR_22;
    struct eap_hdr *VAR_23;
    u8 *VAR_24;
    u8 VAR_25;
    u8 VAR_26;
    int VAR_27 = VAR_1;
    enum wps_process_res VAR_28 = VAR_8;

    if (!VAR_13) {
        return VAR_1;
    }

    if (VAR_17 < sizeof(*VAR_22) + sizeof(*VAR_23)) {






        return VAR_2;
    }

    VAR_24 = VAR_16;

    VAR_22 = (struct ieee802_1x_hdr *) VAR_24;
    VAR_23 = (struct eap_hdr *) (VAR_22 + 1);
    VAR_19 = FUNC_0(VAR_22->length);
    VAR_20 = VAR_19 + sizeof(*VAR_22);
    VAR_21 = FUNC_0(VAR_23->length);






    if (VAR_22->version < VAR_0) {

    }
    if (VAR_22->type != VAR_3) {




        VAR_27 = 0;
        goto out;
    }
    if (VAR_19 > VAR_17 - sizeof(*VAR_22) || VAR_19 < sizeof(*VAR_23)) {





        VAR_27 = 0;
        goto out;
    }

    FUNC_5(VAR_5, "WPA: RX EAPOL-EAP PACKET", VAR_24, VAR_17);

    if (VAR_20 < VAR_17) {




    }

    if (VAR_21 != VAR_19) {





        VAR_27 = 0;
        goto out;
    }

    VAR_25 = VAR_23->code;
    switch (VAR_25) {
    case 130:
        FUNC_6(VAR_4, "error: receive eapol success frame!");
        VAR_27 = 0;
        break;
    case 133:
        FUNC_6(VAR_4, "receive eap code failure!");
        VAR_27 = FUNC_7();
        break;
    case 131:
        FUNC_6(VAR_4, "error: receive eapol response frame!");
        VAR_27 = 0;
        break;
    case 132: {
        VAR_26 = ((u8 *)VAR_23)[sizeof(*VAR_23)];
        switch (VAR_26) {
        case 128:
            FUNC_6(VAR_4, "=========identity===========");
            VAR_18->current_identifier = VAR_23->identifier;
            FUNC_4(&VAR_18->wps_eapol_start_timer);
            FUNC_6(VAR_4, "WPS: Build EAP Identity.");
            VAR_27 = FUNC_9(VAR_23->identifier);
            FUNC_3(&VAR_18->wps_eapol_start_timer, 3000, 0);
            break;
        case 129:
            FUNC_6(VAR_4, "=========expanded plen[%d], %d===========", VAR_19, sizeof(*VAR_23));
            if (VAR_23->identifier == VAR_18->current_identifier) {
                VAR_27 = 0;
                FUNC_6(VAR_4, "wps: ignore overlap identifier");
                goto out;
            }
            VAR_18->current_identifier = VAR_23->identifier;

            VAR_24 = (u8 *)(VAR_23 + 1) + 1;
            VAR_27 = FUNC_8(VAR_24, VAR_19 - sizeof(*VAR_23) - 1, &VAR_28);
            if (VAR_27 == 0 && VAR_28 != VAR_9 && VAR_28 != VAR_11 && VAR_28 != VAR_10) {
                VAR_27 = FUNC_10(VAR_23->identifier);
                if (VAR_27 == 0) {
                    FUNC_6(VAR_4, "sm->wps->state = %d", VAR_18->wps->state);
                    FUNC_12();
                }
            } else if (VAR_27 == 0 && VAR_28 == VAR_10) {
                FUNC_6(VAR_4, "wps frag, continue...");
                VAR_27 = VAR_2;
            } else if (VAR_28 == VAR_11) {
                FUNC_6(VAR_4, "IGNORE overlap Mx");
                VAR_27 = VAR_2;
            } else {
                VAR_27 = VAR_1;
            }
            break;
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
out:
    if (VAR_27 != 0 || VAR_28 == VAR_9) {
        FUNC_6(VAR_4, "wpa rx eapol internal: fail ret=%d", VAR_27);
        FUNC_11(VAR_12);
        FUNC_2();
        FUNC_4(&VAR_18->wps_timeout_timer);

        FUNC_1(VAR_6, VAR_7, 0, 0, VAR_14);

        return VAR_27;
    }

    return VAR_27;
}
