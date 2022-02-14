
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_sm {int wps; } ;
struct wpabuf {int dummy; } ;
typedef enum wsc_op_code { ____Placeholder_wsc_op_code } wsc_op_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wpabuf* FUNC_0 (int ,int,scalar_t__,int ,int ) ;
 int FUNC_1 (int *) ;
 struct wps_sm* VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,int ,scalar_t__) ;
 int FUNC_7 (struct wpabuf*,int) ;
 scalar_t__ FUNC_8 (int ,int*) ;
 int * FUNC_9 (struct wps_sm*,int ,int ,scalar_t__,size_t*,int *) ;
 int FUNC_10 (struct wps_sm*,int *,int ,int *,int) ;
 int FUNC_11 (int *) ;

int FUNC_12(u8 VAR_8)
{
    struct wps_sm *VAR_9 = VAR_7;
    struct wpabuf *VAR_10 = ((void*)0);
    struct wpabuf *VAR_11 = ((void*)0);
    u8 VAR_12[6];
    u8 *VAR_13;
    int VAR_14;
    int VAR_15 = 0;
    enum wsc_op_code VAR_16;

    FUNC_2(VAR_5, "wps send wps mX rsp");

    if (!VAR_9) {
        return VAR_2;
    }

    VAR_15 = FUNC_1(VAR_12);
    if (VAR_15 != 0) {
        FUNC_2(VAR_6, "bssid is empty!");
        return VAR_15;
    }

    VAR_11 = (struct wpabuf *)FUNC_8(VAR_9->wps, &VAR_16);
    if (!VAR_11) {
        VAR_15 = VAR_2;
        goto _err;
    }

    VAR_10 = FUNC_0(VAR_1, 0x00000001, FUNC_5(VAR_11) + 2, VAR_0, VAR_8);
    if (!VAR_10) {
        VAR_15 = VAR_2;
        goto _err;
    }

    FUNC_7(VAR_10, VAR_16);
    FUNC_7(VAR_10, 0x00);
    FUNC_6(VAR_10, FUNC_4(VAR_11), FUNC_5(VAR_11));


    FUNC_3(VAR_11);

    VAR_13 = FUNC_9(VAR_9, VAR_4, FUNC_4(VAR_10), FUNC_5(VAR_10), (size_t *)&VAR_14, ((void*)0));
    if (!VAR_13) {
        VAR_15 = VAR_2;
        goto _err;
    }

    VAR_15 = FUNC_10(VAR_9, VAR_12, VAR_3, VAR_13, VAR_14);
    FUNC_11(VAR_13);
    if (VAR_15) {
        VAR_15 = VAR_2;
        goto _err;
    }

_err:
    FUNC_3(VAR_10);
    return VAR_15;
}
