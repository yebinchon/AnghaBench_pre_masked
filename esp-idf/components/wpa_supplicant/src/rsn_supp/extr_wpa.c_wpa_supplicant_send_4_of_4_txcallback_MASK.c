
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ gtk_len; } ;
struct wpa_sm {int key_info; int key_install; int bssid; TYPE_1__ gd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpa_sm*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct wpa_sm*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct wpa_sm*) ;
 int FUNC_5 (struct wpa_sm*,int ,int) ;

int FUNC_6(struct wpa_sm *VAR_7)
{
       u16 VAR_8=VAR_7->key_info;

    if (VAR_7->key_install && VAR_8 & VAR_5) {
        if (FUNC_4(VAR_7))
            goto failed;
    }
    else if (VAR_7->key_install == 0) {
        FUNC_0(VAR_2, "PTK has been installed, it may be an attack, ignor it.");
    }

    FUNC_2(VAR_4);

    if((VAR_7->gd).gtk_len) {
     if (VAR_7->key_install) {
          if (FUNC_3(VAR_7, &(VAR_7->gd)))
            goto failed;
     }
     else {
         FUNC_0(VAR_2, "GTK has been installed, it may be an attack, ignor it.");
     }
        FUNC_5(VAR_7, VAR_7->bssid,
                    VAR_8 & VAR_6);
    }


    if (VAR_8 & VAR_6) {
        FUNC_1(
            VAR_7, VAR_7->bssid, VAR_1,
            VAR_0);
    }

    VAR_7->key_install = 0;

    return 0;

failed:
       return VAR_3;
}
