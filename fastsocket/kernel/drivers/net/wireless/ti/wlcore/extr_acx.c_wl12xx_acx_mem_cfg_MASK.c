
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_acx_config_memory {int fwlog_blocks; int tx_min; int rx_free_req; int tx_free_req; int dyn_mem_enable; int total_tx_descriptors; int num_ssid_profiles; int tx_min_mem_block_num; int rx_mem_block_num; int num_stations; } ;
struct TYPE_3__ {int mem_blocks; } ;
struct conf_memory_settings {int tx_min; int min_req_rx_blocks; int min_req_tx_blocks; int dynamic_memory; int ssid_profiles; int tx_min_block_num; int rx_block_num; int num_stations; } ;
struct TYPE_4__ {TYPE_1__ fwlog; struct conf_memory_settings mem; } ;
struct wl1271 {TYPE_2__ conf; int num_tx_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl12xx_acx_config_memory*) ;
 struct wl12xx_acx_config_memory* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl12xx_acx_config_memory*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4)
{
 struct wl12xx_acx_config_memory *VAR_5;
 struct conf_memory_settings *VAR_6;
 int VAR_7;

 FUNC_4(VAR_1, "wl1271 mem cfg");

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_7 = -VAR_2;
  goto out;
 }

 VAR_6 = &VAR_4->conf.mem;


 VAR_5->num_stations = VAR_6->num_stations;
 VAR_5->rx_mem_block_num = VAR_6->rx_block_num;
 VAR_5->tx_min_mem_block_num = VAR_6->tx_min_block_num;
 VAR_5->num_ssid_profiles = VAR_6->ssid_profiles;
 VAR_5->total_tx_descriptors = FUNC_0(VAR_4->num_tx_desc);
 VAR_5->dyn_mem_enable = VAR_6->dynamic_memory;
 VAR_5->tx_free_req = VAR_6->min_req_tx_blocks;
 VAR_5->rx_free_req = VAR_6->min_req_rx_blocks;
 VAR_5->tx_min = VAR_6->tx_min;
 VAR_5->fwlog_blocks = VAR_4->conf.fwlog.mem_blocks;

 VAR_7 = FUNC_3(VAR_4, VAR_0, VAR_5,
       sizeof(*VAR_5));
 if (VAR_7 < 0) {
  FUNC_5("wl1271 mem config failed: %d", VAR_7);
  goto out;
 }

out:
 FUNC_1(VAR_5);
 return VAR_7;
}
