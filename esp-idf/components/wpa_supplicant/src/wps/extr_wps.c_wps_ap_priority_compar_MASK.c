
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {scalar_t__* selected_registrar; } ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct wpabuf const*,struct wps_parse_attr*) ;

int FUNC_3(const struct wpabuf *VAR_0,
               const struct wpabuf *VAR_1)
{
    struct wps_parse_attr *VAR_2, *VAR_3;
    int VAR_4, VAR_5;
    int VAR_6 = 0;

    VAR_2 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));
    VAR_3 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
        VAR_6 = 0;
        goto _out;
    }

    if (VAR_0 == ((void*)0) || FUNC_2(VAR_0, VAR_2) < 0)
        return 1;
    if (VAR_1 == ((void*)0) || FUNC_2(VAR_1, VAR_3) < 0)
        return -1;

    VAR_4 = VAR_2->selected_registrar && *VAR_2->selected_registrar != 0;
    VAR_5 = VAR_3->selected_registrar && *VAR_3->selected_registrar != 0;

    if (VAR_4 && !VAR_5) {
        VAR_6 = -1;
        goto _out;
    }
    if (!VAR_4 && VAR_5) {
        VAR_6 = 1;
        goto _out;
    }

_out:
    if (VAR_2)
        FUNC_0(VAR_2);
    if (VAR_3)
        FUNC_0(VAR_3);
    return VAR_6;
}
