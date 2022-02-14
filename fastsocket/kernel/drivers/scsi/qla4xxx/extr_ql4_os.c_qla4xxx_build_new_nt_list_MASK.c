
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {int fw_ddb_dma_pool; } ;
struct qla_ddb_index {int fw_ddb_idx; int list; } ;
struct list_head {int dummy; } ;
struct dev_db_entry {scalar_t__ iscsi_name; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct dev_db_entry* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,struct dev_db_entry*,int ) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_6 (struct scsi_qla_host*,int,struct dev_db_entry*,int ,int *,int*,int*,int*,int *,int *) ;
 int FUNC_7 (struct scsi_qla_host*,struct dev_db_entry*) ;
 int FUNC_8 (struct scsi_qla_host*,struct dev_db_entry*,int ,int) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (struct qla_ddb_index*) ;
 struct qla_ddb_index* FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct scsi_qla_host *VAR_9,
          struct list_head *VAR_10)
{
 struct dev_db_entry *VAR_11;
 dma_addr_t VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 uint32_t VAR_16 = 0, VAR_17 = 0;
 uint32_t VAR_18 = 0, VAR_19 = 0;
 uint16_t VAR_20 = 0;
 struct qla_ddb_index *VAR_21;

 VAR_11 = FUNC_1(VAR_9->fw_ddb_dma_pool, VAR_1,
          &VAR_12);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(FUNC_5(VAR_2, VAR_9, "Out of memory\n"));
  goto exit_new_nt_list;
 }
 VAR_13 = FUNC_3(VAR_9) ? VAR_5 :
         VAR_4;
 VAR_14 = sizeof(struct qla_ddb_index);

 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16 = VAR_17) {
  VAR_15 = FUNC_6(VAR_9, VAR_16, VAR_11, VAR_12,
           ((void*)0), &VAR_17, &VAR_18,
           &VAR_19, ((void*)0), &VAR_20);
  if (VAR_15 == VAR_6)
   break;


  if (FUNC_9((char *)VAR_11->iscsi_name) == 0)
   goto continue_next_new_nt;

  if (!(VAR_18 == VAR_0))
   goto continue_next_new_nt;

  FUNC_0(FUNC_5(VAR_3, VAR_9,
      "Adding  DDB to session = 0x%x\n", VAR_16));

  VAR_21 = FUNC_11(VAR_14);
  if (!VAR_21)
   break;

  VAR_21->fw_ddb_idx = VAR_16;

  VAR_15 = FUNC_7(VAR_9, VAR_11);
  if (VAR_15 == VAR_7) {

   FUNC_10(VAR_21);
   goto continue_next_new_nt;
  }

  FUNC_4(&VAR_21->list, VAR_10);

  VAR_15 = FUNC_8(VAR_9, VAR_11, VAR_8,
           VAR_16);
  if (VAR_15 == VAR_6)
   goto exit_new_nt_list;

continue_next_new_nt:
  if (VAR_17 == 0)
   break;
 }

exit_new_nt_list:
 if (VAR_11)
  FUNC_2(VAR_9->fw_ddb_dma_pool, VAR_11, VAR_12);
}
