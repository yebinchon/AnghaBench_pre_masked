
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
typedef enum wps_request_type { ____Placeholder_wps_request_type } wps_request_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wpabuf*) ;
 scalar_t__* FUNC_4 (struct wpabuf*,int) ;
 int FUNC_5 (struct wpabuf*,int ) ;
 int FUNC_6 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_7 (struct wpabuf*,int) ;
 scalar_t__ FUNC_8 (struct wpabuf*) ;
 scalar_t__ FUNC_9 (struct wpabuf*,int ,int *,int ) ;

struct wpabuf * FUNC_10(enum wps_request_type VAR_3)
{
    struct wpabuf *VAR_4;
    u8 *VAR_5;

    FUNC_0(VAR_0, "WPS: Building WPS IE for (Re)Association "
           "Request");
    VAR_4 = FUNC_1(100);
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    FUNC_6(VAR_4, VAR_1);
    VAR_5 = FUNC_4(VAR_4, 1);
    FUNC_5(VAR_4, VAR_2);

    if (FUNC_8(VAR_4) ||
        FUNC_7(VAR_4, VAR_3) ||
        FUNC_9(VAR_4, 0, ((void*)0), 0)) {
        FUNC_2(VAR_4);
        return ((void*)0);
    }

    *VAR_5 = FUNC_3(VAR_4) - 2;

    return VAR_4;
}
