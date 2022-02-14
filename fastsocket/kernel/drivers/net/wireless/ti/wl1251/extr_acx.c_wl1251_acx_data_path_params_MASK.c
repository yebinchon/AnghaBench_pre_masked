
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl1251 {int dummy; } ;
struct TYPE_3__ {scalar_t__ status; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct acx_data_path_params_resp {TYPE_2__ header; } ;
struct acx_data_path_params {int tx_complete_threshold; int tx_complete_timeout; int tx_complete_ring_depth; int tx_packet_ring_chunk_num; int rx_packet_ring_chunk_num; int tx_packet_ring_chunk_size; int rx_packet_ring_chunk_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct acx_data_path_params*) ;
 struct acx_data_path_params* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_data_path_params*,int) ;
 int FUNC_3 (struct wl1251*,int ,struct acx_data_path_params_resp*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,...) ;

int FUNC_6(struct wl1251 *VAR_12,
    struct acx_data_path_params_resp *VAR_13)
{
 struct acx_data_path_params *VAR_14;
 int VAR_15;

 FUNC_4(VAR_2, "acx data path params");

 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_11);
 if (!VAR_14) {
  VAR_15 = -VAR_9;
  goto out;
 }

 VAR_14->rx_packet_ring_chunk_size = VAR_4;
 VAR_14->tx_packet_ring_chunk_size = VAR_7;

 VAR_14->rx_packet_ring_chunk_num = VAR_3;
 VAR_14->tx_packet_ring_chunk_num = VAR_6;

 VAR_14->tx_complete_threshold = 1;

 VAR_14->tx_complete_ring_depth = VAR_10;

 VAR_14->tx_complete_timeout = VAR_5;

 VAR_15 = FUNC_2(VAR_12, VAR_0,
       VAR_14, sizeof(*VAR_14));
 if (VAR_15 < 0)
  goto out;


 VAR_15 = FUNC_3(VAR_12, VAR_0,
         VAR_13, sizeof(*VAR_13));

 if (VAR_15 < 0) {
  FUNC_5("failed to read data path parameters: %d", VAR_15);
  goto out;
 } else if (VAR_13->header.cmd.status != VAR_1) {
  FUNC_5("data path parameter acx status failed");
  VAR_15 = -VAR_8;
  goto out;
 }

out:
 FUNC_0(VAR_14);
 return VAR_15;
}
