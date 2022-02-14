
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct wl1251 {int dummy; } ;
struct acx_rx_config {void* filter_options; void* config_options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_rx_config*) ;
 struct acx_rx_config* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_rx_config*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct acx_rx_config *VAR_7;
 int VAR_8;

 FUNC_3(VAR_1, "acx rx config");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_7->config_options = VAR_5;
 VAR_7->filter_options = VAR_6;

 VAR_8 = FUNC_2(VAR_4, VAR_0,
       VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("failed to set rx config: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
