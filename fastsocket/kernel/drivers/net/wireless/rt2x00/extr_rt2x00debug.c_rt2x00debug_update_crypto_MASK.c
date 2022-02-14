
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxdone_entry_desc {int cipher; int cipher_status; } ;
struct rt2x00debug_intf {TYPE_1__* crypto_stats; } ;
struct rt2x00_dev {struct rt2x00debug_intf* debugfs_intf; } ;
typedef enum rx_crypto { ____Placeholder_rx_crypto } rx_crypto ;
typedef enum cipher { ____Placeholder_cipher } cipher ;
struct TYPE_2__ {int success; int icv_error; int mic_error; int key_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0(struct rt2x00_dev *VAR_8,
          struct rxdone_entry_desc *VAR_9)
{
 struct rt2x00debug_intf *VAR_10 = VAR_8->debugfs_intf;
 enum cipher VAR_11 = VAR_9->cipher;
 enum rx_crypto VAR_12 = VAR_9->cipher_status;

 if (VAR_11 == VAR_3)
  VAR_11 = VAR_2;
 if (VAR_11 == VAR_1 || VAR_11 >= VAR_0)
  return;


 VAR_11--;

 VAR_10->crypto_stats[VAR_11].success += (VAR_12 == VAR_7);
 VAR_10->crypto_stats[VAR_11].icv_error += (VAR_12 == VAR_4);
 VAR_10->crypto_stats[VAR_11].mic_error += (VAR_12 == VAR_6);
 VAR_10->crypto_stats[VAR_11].key_error += (VAR_12 == VAR_5);
}
