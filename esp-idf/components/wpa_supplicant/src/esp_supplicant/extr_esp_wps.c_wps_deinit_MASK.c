
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_data {struct wps_data* nfc_pw_token; int peer_dev; int dh_ctx; struct wps_data* dev_password; int * last_msg; int * dh_pubkey_r; int * dh_pubkey_e; int * dh_privkey; scalar_t__ registrar; scalar_t__ wps_pin_revealed; TYPE_1__* wps; } ;
struct TYPE_4__ {struct wps_data* wps; } ;
struct TYPE_3__ {int registrar; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct wps_data*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct wps_data*) ;

void FUNC_6(void)
{
    struct wps_data *VAR_2 = VAR_1->wps;







    if (VAR_2->wps_pin_revealed) {
        FUNC_2(VAR_0, "WPS: Full PIN information revealed and "
                   "negotiation failed");
    } else if (VAR_2->registrar)
        FUNC_2(VAR_0, "WPS: register information revealed and "
                   "negotiation failed");
    FUNC_3(VAR_2->dh_privkey);
    FUNC_3(VAR_2->dh_pubkey_e);
    FUNC_3(VAR_2->dh_pubkey_r);
    FUNC_3(VAR_2->last_msg);
    FUNC_1(VAR_2->dev_password);
    FUNC_0(VAR_2->dh_ctx);
    FUNC_4(&VAR_2->peer_dev);



    FUNC_1(VAR_2);
}
