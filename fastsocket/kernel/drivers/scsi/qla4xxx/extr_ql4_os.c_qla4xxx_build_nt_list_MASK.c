
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {int fw_ddb_dma_pool; } ;
struct qla_ddb_index {int fw_ddb_idx; int list; int fw_ddb; int * flash_isid; } ;
struct list_head {int dummy; } ;
struct dev_db_entry {struct dev_db_entry* isid; scalar_t__ iscsi_name; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct dev_db_entry* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,struct dev_db_entry*,int ) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *,struct dev_db_entry*,int) ;
 int FUNC_6 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_7 (struct scsi_qla_host*,int,struct dev_db_entry*,int ,int *,int*,int*,int*,int *,int *) ;
 int FUNC_8 (struct scsi_qla_host*,struct list_head*,struct dev_db_entry*) ;
 int FUNC_9 (struct scsi_qla_host*,struct dev_db_entry*) ;
 int FUNC_10 (struct scsi_qla_host*,struct dev_db_entry*,int,int) ;
 int FUNC_11 (struct scsi_qla_host*,int) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (struct qla_ddb_index*) ;
 struct qla_ddb_index* FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct scsi_qla_host *VAR_11,
      struct list_head *VAR_12, int VAR_13)
{
 struct dev_db_entry *VAR_14;
 dma_addr_t VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 uint32_t VAR_19 = 0, VAR_20 = 0;
 uint32_t VAR_21 = 0, VAR_22 = 0;
 uint16_t VAR_23 = 0;
 struct qla_ddb_index *VAR_24;

 VAR_14 = FUNC_1(VAR_11->fw_ddb_dma_pool, VAR_2,
          &VAR_15);
 if (VAR_14 == ((void*)0)) {
  FUNC_0(FUNC_6(VAR_4, VAR_11, "Out of memory\n"));
  goto exit_nt_list;
 }
 VAR_16 = FUNC_3(VAR_11) ? VAR_7 :
         VAR_6;
 VAR_17 = sizeof(struct qla_ddb_index);

 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19 = VAR_20) {
  VAR_18 = FUNC_7(VAR_11, VAR_19, VAR_14, VAR_15,
           ((void*)0), &VAR_20, &VAR_21,
           &VAR_22, ((void*)0), &VAR_23);
  if (VAR_18 == VAR_8)
   break;

  if (FUNC_11(VAR_11, VAR_19) != VAR_9)
   goto continue_next_nt;


  if (FUNC_12((char *) VAR_14->iscsi_name) == 0)
   goto continue_next_nt;

  if (!(VAR_21 == VAR_0 ||
      VAR_21 == VAR_1))
   goto continue_next_nt;

  FUNC_0(FUNC_6(VAR_5, VAR_11,
      "Adding  DDB to session = 0x%x\n", VAR_19));
  if (VAR_13 == VAR_3) {
   VAR_24 = FUNC_14(VAR_17);
   if (!VAR_24)
    break;

   VAR_24->fw_ddb_idx = VAR_19;





   FUNC_5(&VAR_24->flash_isid[0],
          &VAR_14->isid[0],
          sizeof(VAR_24->flash_isid));

   VAR_18 = FUNC_8(VAR_11, VAR_12,
         VAR_14);
   if (VAR_18 == VAR_9) {

    FUNC_13(VAR_24);
    goto continue_next_nt;
   }


   FUNC_5(&VAR_24->fw_ddb, VAR_14,
          sizeof(struct dev_db_entry));

   FUNC_4(&VAR_24->list, VAR_12);
  } else if (VAR_13 == VAR_10) {
   if (FUNC_9(VAR_11, VAR_14) ==
        VAR_9)
    goto continue_next_nt;
  }

  VAR_18 = FUNC_10(VAR_11, VAR_14, VAR_13, VAR_19);
  if (VAR_18 == VAR_8)
   goto exit_nt_list;

continue_next_nt:
  if (VAR_20 == 0)
   break;
 }

exit_nt_list:
 if (VAR_14)
  FUNC_2(VAR_11->fw_ddb_dma_pool, VAR_14, VAR_15);
}
