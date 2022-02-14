
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl_fw_status_2 {int dummy; } ;
struct wl1271 {int fw_status_priv_len; void* fw_status_1; void* tx_res_if; int num_rx_desc; struct wl_fw_status_2* fw_status_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct wl1271 *VAR_2)
{
 VAR_2->fw_status_1 = FUNC_2(FUNC_0(VAR_2->num_rx_desc) +
      sizeof(*VAR_2->fw_status_2) +
      VAR_2->fw_status_priv_len, VAR_1);
 if (!VAR_2->fw_status_1)
  return -VAR_0;

 VAR_2->fw_status_2 = (struct wl_fw_status_2 *)
    (((u8 *) VAR_2->fw_status_1) +
    FUNC_0(VAR_2->num_rx_desc));

 VAR_2->tx_res_if = FUNC_2(sizeof(*VAR_2->tx_res_if), VAR_1);
 if (!VAR_2->tx_res_if) {
  FUNC_1(VAR_2->fw_status_1);
  return -VAR_0;
 }

 return 0;
}
