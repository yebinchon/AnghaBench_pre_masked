
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_registrar {TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int config_methods; } ;


 int FUNC_0 (struct wpabuf*,int ) ;

__attribute__((used)) static int FUNC_1(struct wps_registrar *VAR_0,
          struct wpabuf *VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->wps->config_methods);
}
