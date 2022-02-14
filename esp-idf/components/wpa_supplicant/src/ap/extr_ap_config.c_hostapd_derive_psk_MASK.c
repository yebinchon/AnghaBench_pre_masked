
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_wpa_psk {int psk; } ;
struct hostapd_ssid {struct hostapd_wpa_psk* wpa_psk; int ssid_len; scalar_t__ ssid; scalar_t__ wpa_passphrase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,int *,int ) ;
 int FUNC_6 (int ,char*,int *,int ) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct hostapd_ssid *VAR_3)
{
    VAR_3->wpa_psk = (struct hostapd_wpa_psk *)FUNC_2(sizeof(struct hostapd_wpa_psk));
    if (VAR_3->wpa_psk == ((void*)0)) {
     FUNC_8(VAR_1, "Unable to alloc space for PSK");
        return -1;
    }
    FUNC_5(VAR_0, "SSID",
              (u8 *) VAR_3->ssid, VAR_3->ssid_len);
    FUNC_6(VAR_0, "PSK (ASCII passphrase)",
                  (u8 *) VAR_3->wpa_passphrase,
                  FUNC_4(VAR_3->wpa_passphrase));




    FUNC_3(VAR_3->wpa_passphrase,
            VAR_3->ssid, VAR_3->ssid_len,
            4096, VAR_3->wpa_psk->psk, VAR_2);

    FUNC_7(VAR_0, "PSK (from passphrase)",
            VAR_3->wpa_psk->psk, VAR_2);
    return 0;
}
