
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wps_device_data {scalar_t__ p2p; int config_methods; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_request_type { ____Placeholder_wps_request_type } wps_request_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_5 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_6 (struct wps_device_data*,struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_8 (struct wps_device_data*,struct wpabuf*) ;
 scalar_t__ FUNC_9 (struct wps_device_data*,struct wpabuf*) ;
 scalar_t__ FUNC_10 (struct wps_device_data*,struct wpabuf*) ;
 scalar_t__ FUNC_11 (struct wps_device_data*,struct wpabuf*) ;
 scalar_t__ FUNC_12 (struct wps_device_data*,struct wpabuf*,unsigned int,int const*) ;
 scalar_t__ FUNC_13 (struct wpabuf*,int) ;
 scalar_t__ FUNC_14 (struct wps_device_data*,struct wpabuf*) ;
 scalar_t__ FUNC_15 (struct wps_device_data*,struct wpabuf*) ;
 scalar_t__ FUNC_16 (struct wpabuf*,int const*) ;
 scalar_t__ FUNC_17 (struct wpabuf*) ;
 scalar_t__ FUNC_18 (struct wpabuf*,int,int *,int ) ;
 struct wpabuf* FUNC_19 (struct wpabuf*) ;

struct wpabuf * FUNC_20(u16 VAR_4, struct wps_device_data *VAR_5,
                       const u8 *VAR_6,
                       enum wps_request_type VAR_7,
                       unsigned int VAR_8,
                       const u8 *VAR_9)
{
    struct wpabuf *VAR_10;

    FUNC_0(VAR_0, "WPS: Building WPS IE for Probe Request\n");

    VAR_10 = FUNC_1(400);
    if (VAR_10 == ((void*)0)) {
        FUNC_0(VAR_1, "WPS: ie alloc failed.");
        return ((void*)0);
    }

    if (FUNC_17(VAR_10) ||
        FUNC_13(VAR_10, VAR_7) ||
        FUNC_5(VAR_10, VAR_5->config_methods) ||
        FUNC_16(VAR_10, VAR_6) ||
        FUNC_11(VAR_5, VAR_10) ||
        FUNC_14(VAR_5, VAR_10) ||
        FUNC_3(((void*)0), VAR_10) ||
        FUNC_4(VAR_10, VAR_2) ||
        FUNC_7(VAR_10, VAR_4) ||







        FUNC_12(VAR_5, VAR_10, VAR_8, VAR_9)
        ||
        FUNC_15(VAR_5, VAR_10)
        ) {
        FUNC_2(VAR_10);
        return ((void*)0);
    }


    if (VAR_5->p2p && FUNC_6(VAR_5, VAR_10)) {
        FUNC_2(VAR_10);
        return ((void*)0);
    }


    return FUNC_19(VAR_10);
}
