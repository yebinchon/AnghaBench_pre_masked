
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmd; } ;
struct iwl_rx_packet {int len_n_flags; scalar_t__ data; TYPE_1__ hdr; } ;
struct iwl_priv {int dummy; } ;
struct iwl_notif_wait_data {int dummy; } ;
struct iwl_calib_hdr {int op_code; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct iwl_priv*,struct iwl_calib_hdr*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct iwl_notif_wait_data *VAR_3,
         struct iwl_rx_packet *VAR_4, void *VAR_5)
{
 struct iwl_priv *VAR_6 = VAR_5;
 struct iwl_calib_hdr *VAR_7;
 int VAR_8;

 if (VAR_4->hdr.cmd != VAR_1) {
  FUNC_1(VAR_4->hdr.cmd != VAR_0);
  return 1;
 }

 VAR_7 = (struct iwl_calib_hdr *)VAR_4->data;
 VAR_8 = FUNC_3(VAR_4->len_n_flags) & VAR_2;


 VAR_8 -= sizeof(__le32);

 if (FUNC_2(VAR_6, VAR_7, VAR_8))
  FUNC_0(VAR_6, "Failed to record calibration data %d\n",
   VAR_7->op_code);

 return 0;
}
