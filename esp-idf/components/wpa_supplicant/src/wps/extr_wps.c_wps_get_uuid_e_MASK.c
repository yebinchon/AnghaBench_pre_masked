
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_parse_attr {int * uuid_e; } ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct wpabuf const*,struct wps_parse_attr*) ;

const u8 * FUNC_3(const struct wpabuf *VAR_0)
{
    struct wps_parse_attr *VAR_1;
    const u8 *VAR_2;

    VAR_1 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    if (FUNC_2(VAR_0, VAR_1) < 0) {
        VAR_2 = ((void*)0);
    } else {
        VAR_2 = VAR_1->uuid_e;
    }
    FUNC_0(VAR_1);
    return VAR_2;
}
