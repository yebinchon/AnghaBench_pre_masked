
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_data {TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int network_key_len; int network_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wps_data *VAR_2, struct wpabuf *VAR_3)
{
 FUNC_0(VAR_1, "WPS:  * Network Key");
 FUNC_1(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_2->wps->network_key_len);
 FUNC_2(VAR_3, VAR_2->wps->network_key, VAR_2->wps->network_key_len);
 return 0;
}
