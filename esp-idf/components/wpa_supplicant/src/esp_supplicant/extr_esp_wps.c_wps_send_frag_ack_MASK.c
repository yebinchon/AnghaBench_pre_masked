
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_sm {int dummy; } ;
struct wpabuf {int dummy; } ;
typedef enum wsc_op_code { ____Placeholder_wsc_op_code } wsc_op_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct wpabuf* FUNC_0 (int ,int,int,int ,int ) ;
 int FUNC_1 (int *) ;
 struct wps_sm* VAR_9 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,int) ;
 int * FUNC_7 (struct wps_sm*,int ,int ,int ,size_t*,int *) ;
 int FUNC_8 (struct wps_sm*,int *,int ,int *,int) ;
 int FUNC_9 (int *) ;

int FUNC_10(u8 VAR_10)
{
    struct wps_sm *VAR_11 = VAR_9;
    struct wpabuf *VAR_12 = ((void*)0);
    u8 VAR_13[6];
    u8 *VAR_14;
    int VAR_15;
    int VAR_16 = 0;
    enum wsc_op_code VAR_17 = VAR_8;

    FUNC_2(VAR_6, "send frag ack id:%d", VAR_10);

    if (!VAR_11) {
        return VAR_3;
    }

    VAR_16 = FUNC_1(VAR_13);
    if (VAR_16 != 0) {
        FUNC_2(VAR_7, "bssid is empty!");
        return VAR_16;
    }

    VAR_12 = FUNC_0(VAR_1, 0x00000001, 2, VAR_0, VAR_10);
    if (!VAR_12) {
        VAR_16 = VAR_2;
        goto _err;
    }

    FUNC_6(VAR_12, VAR_17);
    FUNC_6(VAR_12, 0x00);

    VAR_14 = FUNC_7(VAR_11, VAR_5, FUNC_4(VAR_12), FUNC_5(VAR_12), (size_t *)&VAR_15, ((void*)0));
    if (!VAR_14) {
        VAR_16 = VAR_2;
        goto _err;
    }

    VAR_16 = FUNC_8(VAR_11, VAR_13, VAR_4, VAR_14, VAR_15);
    FUNC_9(VAR_14);
    if (VAR_16) {
        VAR_16 = VAR_2;
        goto _err;
    }

_err:
    FUNC_3(VAR_12);
    return VAR_16;
}
