
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_direct_buf {int len; scalar_t__ key; int va; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct ibmvfc_host {scalar_t__ log_level; int sg_pool; } ;
struct ibmvfc_event {int ext_list_token; struct srp_direct_buf* ext_list; } ;
struct TYPE_2__ {int add_cdb_len; } ;
struct ibmvfc_cmd {int flags; TYPE_1__ iu; struct srp_direct_buf ioba; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct ibmvfc_host* FUNC_0 (struct device*) ;
 struct srp_direct_buf* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct scsi_cmnd*,int,struct srp_direct_buf*) ;
 int FUNC_3 (int ,struct scsi_cmnd*,char*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_11,
         struct ibmvfc_event *VAR_12,
         struct ibmvfc_cmd *VAR_13, struct device *VAR_14)
{

 int VAR_15;
 struct srp_direct_buf *VAR_16 = &VAR_13->ioba;
 struct ibmvfc_host *VAR_17 = FUNC_0(VAR_14);

 VAR_15 = FUNC_4(VAR_11);
 if (!VAR_15) {
  VAR_13->flags |= VAR_4;
  return 0;
 } else if (FUNC_6(VAR_15 < 0)) {
  if (VAR_17->log_level > VAR_3)
   FUNC_3(VAR_10, VAR_11, "Failed to map DMA buffer for command\n");
  return VAR_15;
 }

 if (VAR_11->sc_data_direction == VAR_0) {
  VAR_13->flags |= VAR_9;
  VAR_13->iu.add_cdb_len |= VAR_8;
 } else {
  VAR_13->flags |= VAR_6;
  VAR_13->iu.add_cdb_len |= VAR_5;
 }

 if (VAR_15 == 1) {
  FUNC_2(VAR_11, VAR_15, VAR_16);
  return 0;
 }

 VAR_13->flags |= VAR_7;

 if (!VAR_12->ext_list) {
  VAR_12->ext_list = FUNC_1(VAR_17->sg_pool, VAR_2,
            &VAR_12->ext_list_token);

  if (!VAR_12->ext_list) {
   FUNC_5(VAR_11);
   if (VAR_17->log_level > VAR_3)
    FUNC_3(VAR_10, VAR_11, "Can't allocate memory for scatterlist\n");
   return -VAR_1;
  }
 }

 FUNC_2(VAR_11, VAR_15, VAR_12->ext_list);

 VAR_16->va = VAR_12->ext_list_token;
 VAR_16->len = VAR_15 * sizeof(struct srp_direct_buf);
 VAR_16->key = 0;
 return 0;
}
