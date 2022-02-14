
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_sm {int identity_len; int identity; } ;
struct wpabuf {int dummy; } ;


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
 struct wpabuf* FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 struct wps_sm* VAR_10 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,int ,int ) ;
 int * FUNC_7 (struct wps_sm*,int ,int ,int ,size_t*,int *) ;
 int FUNC_8 (struct wps_sm*,int *,int ,int *,int) ;
 int FUNC_9 (int *) ;

int FUNC_10(u8 VAR_11)
{
    struct wps_sm *VAR_12 = VAR_10;
    struct wpabuf *VAR_13 = ((void*)0);
    u8 VAR_14[6];
    u8 *VAR_15 = ((void*)0);
    int VAR_16;
    int VAR_17 = VAR_5;

    FUNC_2(VAR_8, "wps send eapol id rsp");
    VAR_13 = FUNC_0(VAR_2, VAR_1, VAR_12->identity_len,
                            VAR_0, VAR_11);
    if (!VAR_13) {
        VAR_17 = VAR_4;
        goto _err;
    }

    VAR_17 = FUNC_1(VAR_14);
    if (VAR_17 != 0) {
        FUNC_2(VAR_9, "bssid is empty!");
        return VAR_4;
    }

    FUNC_6(VAR_13, VAR_12->identity, VAR_12->identity_len);

    VAR_15 = FUNC_7(VAR_12, VAR_7, FUNC_4(VAR_13), FUNC_5(VAR_13), (size_t *)&VAR_16, ((void*)0));
    if (!VAR_15) {
        VAR_17 = VAR_3;
        goto _err;
    }

    VAR_17 = FUNC_8(VAR_12, VAR_14, VAR_6, VAR_15, VAR_16);
    if (VAR_17) {
        VAR_17 = VAR_4;
        goto _err;
    }

_err:
    FUNC_9(VAR_15);
    FUNC_3(VAR_13);
    return VAR_17;
}
