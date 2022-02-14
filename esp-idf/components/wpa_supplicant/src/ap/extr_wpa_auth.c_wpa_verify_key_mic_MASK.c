
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_ptk {int kck; } ;
struct wpa_eapol_key {int * key_mic; int key_info; } ;
struct ieee802_1x_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,int *,int) ;
 int FUNC_7 (int ,int,int *,size_t,int *) ;
 int FUNC_8 (int ,char*,size_t) ;

__attribute__((used)) static int FUNC_9(struct wpa_ptk *VAR_2, u8 *VAR_3, size_t VAR_4)
{
    struct ieee802_1x_hdr *VAR_5;
    struct wpa_eapol_key *VAR_6;
    u16 VAR_7;
    int VAR_8 = 0;
    int VAR_9 = 0;
    u8 VAR_10[16];
    char VAR_11[8];

    if (VAR_4 < sizeof(*VAR_5) + sizeof(*VAR_6)){
        FUNC_8( VAR_0, "invalid data length, len=%u\n", VAR_4);
        return -1;
    }

    VAR_5 = (struct ieee802_1x_hdr *) VAR_3;
    VAR_6 = (struct wpa_eapol_key *) (VAR_5 + 1);
    VAR_7 = FUNC_0(VAR_6->key_info);
    FUNC_2(VAR_10, VAR_6->key_mic, 16);
    FUNC_3(VAR_6->key_mic, 0, 16);

    VAR_9 = FUNC_7(VAR_2->kck, VAR_7 & VAR_1, VAR_3, VAR_4, VAR_6->key_mic);
    if ( VAR_9 || FUNC_1(VAR_10, VAR_6->key_mic, 16) != 0) {
        VAR_8 = -1;
    }
    FUNC_5(VAR_11, 0, 8);
    FUNC_4(VAR_11, "you mic", sizeof("you mic"));
    FUNC_6(VAR_11, VAR_10, 16);
    FUNC_5(VAR_11, 0, 8);
    FUNC_4(VAR_11, "my mic", sizeof("my mic"));
    FUNC_6(VAR_11, VAR_6->key_mic, 16);

    FUNC_2(VAR_6->key_mic, VAR_10, 16);
    return VAR_8;
}
