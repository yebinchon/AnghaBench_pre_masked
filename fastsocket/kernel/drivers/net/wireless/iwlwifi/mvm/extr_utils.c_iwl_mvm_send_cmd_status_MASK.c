
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct iwl_rx_packet {scalar_t__ data; int len_n_flags; TYPE_1__ hdr; } ;
struct iwl_mvm {int trans; int mutex; } ;
struct iwl_host_cmd {int flags; struct iwl_rx_packet* resp_pkt; } ;
struct iwl_cmd_response {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct iwl_host_cmd*) ;
 int FUNC_3 (int ,struct iwl_host_cmd*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iwl_mvm *VAR_8, struct iwl_host_cmd *VAR_9,
       u32 *VAR_10)
{
 struct iwl_rx_packet *VAR_11;
 struct iwl_cmd_response *VAR_12;
 int VAR_13, VAR_14;

 FUNC_5(&VAR_8->mutex);





 if (FUNC_0(VAR_9->flags & (VAR_0 | VAR_2),
        "cmd flags %x", VAR_9->flags))
  return -VAR_3;

 VAR_9->flags |= VAR_1 | VAR_2;

 VAR_13 = FUNC_3(VAR_8->trans, VAR_9);
 if (VAR_13 == -VAR_5) {




  return 0;
 } else if (VAR_13) {
  return VAR_13;
 }

 VAR_11 = VAR_9->resp_pkt;

 if (!VAR_11) {
  VAR_13 = 0;
  goto out_free_resp;
 }

 if (VAR_11->hdr.flags & VAR_7) {
  VAR_13 = -VAR_4;
  goto out_free_resp;
 }

 VAR_14 = FUNC_4(VAR_11->len_n_flags) & VAR_6;
 if (FUNC_1(VAR_14 != sizeof(VAR_11->hdr) + sizeof(*VAR_12))) {
  VAR_13 = -VAR_4;
  goto out_free_resp;
 }

 VAR_12 = (void *)VAR_11->data;
 *VAR_10 = FUNC_4(VAR_12->status);
 out_free_resp:
 FUNC_2(VAR_9);
 return VAR_13;
}
