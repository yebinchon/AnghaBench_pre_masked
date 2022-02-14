
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wpa_sm {scalar_t__ pairwise_cipher; scalar_t__ group_cipher; scalar_t__ proto; int rx_replay_counter; scalar_t__ rx_replay_counter_set; } ;
struct wpa_eapol_key {int key_data_length; int replay_counter; int key_info; int type; } ;
struct ieee802_1x_hdr {int type; int version; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ) ;
 struct wpa_sm VAR_19 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,struct wpa_eapol_key*) ;
 int FUNC_4 (int ,char*,int *,int) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (struct wpa_sm*,struct wpa_eapol_key*,int) ;
 int FUNC_7 (struct wpa_sm*,int *,struct wpa_eapol_key*,int,int) ;
 int FUNC_8 (struct wpa_sm*,int *,struct wpa_eapol_key*,int) ;
 int FUNC_9 (struct wpa_sm*,struct wpa_eapol_key*,int) ;
 scalar_t__ FUNC_10 (struct wpa_sm*,struct wpa_eapol_key*,int,int *,int) ;

int FUNC_11(u8 *VAR_20, u8 *VAR_21, u32 VAR_22)
{
    struct wpa_sm *VAR_23 = &VAR_19;
    u32 VAR_24, VAR_25, VAR_26;
    struct ieee802_1x_hdr *VAR_27;
    struct wpa_eapol_key *VAR_28;
    u16 VAR_29, VAR_30;
    u8 *VAR_31;
    int VAR_32 = -1;

    if (VAR_22 < sizeof(*VAR_27) + sizeof(*VAR_28)) {






        return 0;
    }

       VAR_31 = VAR_21;

    VAR_27 = (struct ieee802_1x_hdr *) VAR_31;
    VAR_28 = (struct wpa_eapol_key *) (VAR_27 + 1);
    VAR_24 = FUNC_1(VAR_27->length);
    VAR_25 = VAR_24 + sizeof(*VAR_27);






    if (VAR_27->version < VAR_2) {

    }
    if (VAR_27->type != VAR_3) {




        VAR_32 = 0;
        goto out;
    }
    if (VAR_24 > VAR_22 - sizeof(*VAR_27) || VAR_24 < sizeof(*VAR_28)) {





        VAR_32 = 0;
        goto out;
    }

    if (VAR_28->type != VAR_1 && VAR_28->type != VAR_0)
    {




        VAR_32 = 0;
        goto out;
    }

    FUNC_3(VAR_5, VAR_28);

    FUNC_4(VAR_5, "WPA: RX EAPOL-Key", VAR_31, VAR_22);

    if (VAR_25 < VAR_22) {




    }
    VAR_29 = FUNC_0(VAR_28->key_info);
    VAR_30 = VAR_29 & VAR_16;
    if (VAR_30 != VAR_14 &&
        VAR_30 != VAR_15) {




        goto out;
    }

    if (VAR_23->pairwise_cipher == VAR_6 &&
        VAR_30 != VAR_15) {




        if (VAR_23->group_cipher != VAR_6 &&
            !(VAR_29 & VAR_10)) {
        } else
            goto out;
    }


    if ( VAR_23->rx_replay_counter_set &&
     FUNC_2(VAR_28->replay_counter, VAR_23->rx_replay_counter,
              VAR_18) <= 0) {




        goto out;
    }

    if (!(VAR_29 & (VAR_7 | VAR_13))) {



        goto out;
    }

    if (VAR_29 & VAR_12) {



        goto out;
    }

    if ((VAR_29 & VAR_11) &&
        FUNC_10(VAR_23, VAR_28, VAR_30, VAR_31, VAR_25))
        goto out;

    VAR_26 = VAR_25 - sizeof(*VAR_27) - sizeof(*VAR_28);

    if (FUNC_0(VAR_28->key_data_length) > VAR_26) {






        goto out;
    }
    VAR_26 = FUNC_0(VAR_28->key_data_length);

    if (VAR_23->proto == VAR_17 &&
        (VAR_29 & VAR_8)) {
        if (FUNC_6(VAR_23, VAR_28, VAR_30))
            goto out;
        VAR_26 = FUNC_0(VAR_28->key_data_length);
    }

    if (VAR_29 & VAR_10) {
        if (VAR_29 & VAR_9) {




            goto out;
        }

        if (VAR_29 & VAR_11) {

            FUNC_9(VAR_23, VAR_28, VAR_30);
        } else {

            FUNC_8(VAR_23, VAR_20, VAR_28,
                              VAR_30);
        }
    } else {
        if (VAR_29 & VAR_11) {

            FUNC_7(VAR_23, VAR_20, VAR_28,
                              VAR_26, VAR_30);
        } else {




        }
    }

    VAR_32 = 1;

out:

    return VAR_32;
}
