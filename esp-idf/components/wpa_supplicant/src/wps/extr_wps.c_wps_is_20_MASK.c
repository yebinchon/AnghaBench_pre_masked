
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int * version2; } ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct wpabuf const*,struct wps_parse_attr*) ;

int FUNC_3(const struct wpabuf *VAR_0)
{
    struct wps_parse_attr *VAR_1;
    int VAR_2;

    VAR_1 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));
    if (VAR_1 == ((void*)0))
        return 0;

    if (VAR_0 == ((void*)0) || FUNC_2(VAR_0, VAR_1) < 0) {
        VAR_2 = 0;
    } else {
        VAR_2 = (VAR_1->version2 != ((void*)0));
    }
    FUNC_0(VAR_1);
    return VAR_2;
}
