
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int flags; } ;
struct iwl_rx_packet {scalar_t__ data; TYPE_1__ hdr; } ;
struct iwl_nvm_access_resp {int * data; int offset; int length; int status; } ;
struct iwl_nvm_access_cmd {int dummy; } ;
struct iwl_mvm {TYPE_2__* cfg; } ;
struct iwl_host_cmd {int flags; int* len; struct iwl_rx_packet* resp_pkt; int data; int id; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_mvm*,char*,int,...) ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_host_cmd*) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 int FUNC_3 (struct iwl_nvm_access_cmd*,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static int FUNC_6(struct iwl_mvm *VAR_6, u16 VAR_7,
         u16 VAR_8, u16 VAR_9, u8 *VAR_10)
{
 struct iwl_nvm_access_cmd VAR_11 = {};
 struct iwl_nvm_access_resp *VAR_12;
 struct iwl_rx_packet *VAR_13;
 struct iwl_host_cmd VAR_14 = {
  .id = VAR_5,
  .flags = VAR_0 | VAR_1,
  .data = &VAR_11, 
 };
 int VAR_15, VAR_16, VAR_17;
 u8 *VAR_18;

 FUNC_3(&VAR_11, VAR_8, VAR_9, VAR_7);
 VAR_14.len[0] = sizeof(struct iwl_nvm_access_cmd);

 VAR_15 = FUNC_2(VAR_6, &VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_13 = VAR_14.resp_pkt;
 if (VAR_13->hdr.flags & VAR_4) {
  FUNC_0(VAR_6, "Bad return from NVM_ACCES_COMMAND (0x%08X)\n",
   VAR_13->hdr.flags);
  VAR_15 = -VAR_3;
  goto exit;
 }


 VAR_12 = (void *)VAR_13->data;
 VAR_15 = FUNC_4(VAR_12->status);
 VAR_16 = FUNC_4(VAR_12->length);
 VAR_17 = FUNC_4(VAR_12->offset);
 VAR_18 = VAR_12->data;
 if (VAR_15) {
  FUNC_0(VAR_6,
   "NVM access command failed with status %d (device: %s)\n",
   VAR_15, VAR_6->cfg->name);
  VAR_15 = -VAR_2;
  goto exit;
 }

 if (VAR_17 != VAR_8) {
  FUNC_0(VAR_6, "NVM ACCESS response with invalid offset %d\n",
   VAR_17);
  VAR_15 = -VAR_2;
  goto exit;
 }


 FUNC_5(VAR_10 + VAR_8, VAR_18, VAR_16);
 VAR_15 = VAR_16;

exit:
 FUNC_1(&VAR_14);
 return VAR_15;
}
