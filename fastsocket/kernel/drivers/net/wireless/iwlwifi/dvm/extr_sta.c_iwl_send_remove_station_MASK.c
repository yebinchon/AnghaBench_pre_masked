
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int flags; } ;
struct iwl_rx_packet {scalar_t__ data; TYPE_1__ hdr; } ;
struct iwl_rem_sta_resp {int status; } ;
struct iwl_rem_sta_cmd {int num_sta; int addr; } ;
struct iwl_priv {int sta_lock; } ;
struct iwl_host_cmd {struct iwl_rx_packet* resp_pkt; int flags; int data; int len; int id; } ;
typedef int rm_sta_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;

 int VAR_5 ;
 int FUNC_2 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_3 (struct iwl_host_cmd*) ;
 int FUNC_4 (struct iwl_priv*,int) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 (struct iwl_rem_sta_cmd*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct iwl_priv *VAR_6,
       const u8 *VAR_7, int VAR_8,
       bool VAR_9)
{
 struct iwl_rx_packet *VAR_10;
 int VAR_11;
 struct iwl_rem_sta_cmd VAR_12;

 struct iwl_host_cmd VAR_13 = {
  .id = VAR_5,
  .len = sizeof(struct iwl_rem_sta_cmd), 
  .flags = VAR_0,
  .data = &VAR_12, 
 };

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.num_sta = 1;
 FUNC_5(&VAR_12.addr, VAR_7, VAR_3);

 VAR_13.flags |= VAR_1;

 VAR_11 = FUNC_2(VAR_6, &VAR_13);

 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_13.resp_pkt;
 if (VAR_10->hdr.flags & VAR_4) {
  FUNC_1(VAR_6, "Bad return from REPLY_REMOVE_STA (0x%08X)\n",
     VAR_10->hdr.flags);
  VAR_11 = -VAR_2;
 }

 if (!VAR_11) {
  struct iwl_rem_sta_resp *VAR_14 = (void *)VAR_10->data;
  switch (VAR_14->status) {
  case 128:
   if (!VAR_9) {
    FUNC_7(&VAR_6->sta_lock);
    FUNC_4(VAR_6, VAR_8);
    FUNC_8(&VAR_6->sta_lock);
   }
   FUNC_0(VAR_6, "REPLY_REMOVE_STA PASSED\n");
   break;
  default:
   VAR_11 = -VAR_2;
   FUNC_1(VAR_6, "REPLY_REMOVE_STA failed\n");
   break;
  }
 }
 FUNC_3(&VAR_13);

 return VAR_11;
}
