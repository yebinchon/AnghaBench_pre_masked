
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlfw {int dummy; } ;
struct carl9170fw_otus_desc {int fw_address; int tx_frag_len; int tx_descs; int cmd_bufs; int rx_max_frame_len; int vif_num; int api_ver; int feature_set; int bcn_len; int bcn_addr; } ;
struct carl9170fw_desc_head {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct carl9170fw_desc_head const*,int ,int ,scalar_t__,struct carlfw*) ;
 int FUNC_3 (int ,char*,int,...) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(const struct carl9170fw_desc_head *VAR_3,
      struct carlfw *VAR_4)
{
 const struct carl9170fw_otus_desc *VAR_5 = (const void *) VAR_3;

 FUNC_1(FUNC_0(VAR_1) != VAR_0);

 FUNC_3(VAR_2, "\tFirmware upload pointer: 0x%x\n",
  VAR_5->fw_address);
 FUNC_3(VAR_2, "\tBeacon Address: %x, (reserved:%d Bytes)\n",
  FUNC_5(VAR_5->bcn_addr), FUNC_4(VAR_5->bcn_len));
 FUNC_3(VAR_2, "\tTX DMA chunk size:%d Bytes, TX DMA chunks:%d\n",
  VAR_5->tx_frag_len, VAR_5->tx_descs);
 FUNC_3(VAR_2, "\t=> %d Bytes are reserved for the TX queues\n",
  VAR_5->tx_frag_len * VAR_5->tx_descs);
 FUNC_3(VAR_2, "\tCommand response buffers:%d\n", VAR_5->cmd_bufs);
 FUNC_3(VAR_2, "\tMax. RX stream block size:%d Bytes\n",
  VAR_5->rx_max_frame_len);
 FUNC_3(VAR_2, "\tSupported Firmware Interfaces: %d\n", VAR_5->vif_num);
 FUNC_3(VAR_2, "\tFirmware API Version: %d\n", VAR_5->api_ver);
 FUNC_3(VAR_2, "\tSupported Features: (raw:%.08x)\n",
  FUNC_5(VAR_5->feature_set));

 FUNC_2(VAR_3, VAR_5->feature_set, VAR_1,
      FUNC_0(VAR_1), VAR_4);
}
