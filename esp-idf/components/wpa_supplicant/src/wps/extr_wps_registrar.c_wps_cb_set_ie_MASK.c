
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar {int (* set_ie_cb ) (int ,struct wpabuf*,struct wpabuf*) ;int cb_ctx; } ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (int ,struct wpabuf*,struct wpabuf*) ;

__attribute__((used)) static int FUNC_1(struct wps_registrar *VAR_0, struct wpabuf *VAR_1,
    struct wpabuf *VAR_2)
{
 return VAR_0->set_ie_cb(VAR_0->cb_ctx, VAR_1, VAR_2);
}
