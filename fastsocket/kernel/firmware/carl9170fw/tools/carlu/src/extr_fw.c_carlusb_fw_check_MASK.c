
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct carlu {int tx_stream; int extra_headroom; int rx_stream; void* miniboot_size; void* rx_max; int dma_chunks; void* dma_chunk_size; int fw; } ;
struct carl9170fw_otus_desc {int miniboot_size; int feature_set; int rx_max_frame_len; int tx_descs; int tx_frag_len; } ;
struct ar9170_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct carl9170fw_otus_desc* FUNC_1 (int ,int *,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int ) ;

int FUNC_5(struct carlu *VAR_11)
{
 struct carl9170fw_otus_desc *VAR_12;

 VAR_12 = FUNC_1(VAR_11->fw, (uint8_t *) VAR_10,
         sizeof(*VAR_12),
         VAR_2);

 if (!VAR_12) {
  FUNC_3("No valid USB descriptor found.\n");
  return -VAR_8;
 }

 if (!FUNC_0(VAR_12->feature_set, VAR_0)) {
  FUNC_3("Invalid Firmware Descriptor.\n");
  return -VAR_7;
 }

 if (!FUNC_0(VAR_12->feature_set, VAR_4)) {
  FUNC_3("Firmware does not know how to initialize USB core.\n");
  return -VAR_9;
 }

 if (FUNC_0(VAR_12->feature_set, VAR_3)) {
  FUNC_2("Enabled tx stream mode.\n");
  VAR_11->tx_stream = 1;
  VAR_11->extra_headroom = sizeof(struct ar9170_stream);
 }

 if (FUNC_0(VAR_12->feature_set, VAR_6)) {
  FUNC_2("Enabled rx stream mode.\n");
  VAR_11->rx_stream = 1;
 }

 if (FUNC_0(VAR_12->feature_set, VAR_5))
  FUNC_2("Firmware sends traps over EP2.\n");

 VAR_11->dma_chunk_size = FUNC_4(VAR_12->tx_frag_len);
 VAR_11->dma_chunks = VAR_12->tx_descs;
 VAR_11->rx_max = FUNC_4(VAR_12->rx_max_frame_len);

 if (FUNC_0(VAR_12->feature_set, VAR_1))
  VAR_11->miniboot_size = FUNC_4(VAR_12->miniboot_size);

 return 0;
}
