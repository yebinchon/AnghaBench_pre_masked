
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
 struct dev_db_entry* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,struct dev_db_entry*,int ) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_6 (struct scsi_qla_host*,int,struct dev_db_entry*,int ,int *,int*,int*,int*,int *,int *) ;
 scalar_t__ FUNC_7 (char*) ;
 struct qla_ddb_index* FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct scsi_qla_host *VAR_6,
      struct list_head *VAR_7)
{
 struct qla_ddb_index *VAR_8;
 int VAR_9;
 int VAR_10;
 struct dev_db_entry *VAR_11;
 dma_addr_t VAR_12;
 int VAR_13;
 uint32_t VAR_14 = 0, VAR_15 = 0;
 uint32_t VAR_16 = 0, VAR_17 = 0;
 uint16_t VAR_18 = 0;

 VAR_11 = FUNC_1(VAR_6->fw_ddb_dma_pool, VAR_1,
          &VAR_12);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(FUNC_5(VAR_2, VAR_6, "Out of memory\n"));
  goto exit_st_list;
 }

 VAR_9 = FUNC_3(VAR_6) ? VAR_4 :
         VAR_3;
 VAR_10 = sizeof(struct qla_ddb_index);

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14 = VAR_15) {
  VAR_13 = FUNC_6(VAR_6, VAR_14, VAR_11, VAR_12,
           ((void*)0), &VAR_15, &VAR_16,
           &VAR_17, ((void*)0), &VAR_18);
  if (VAR_13 == VAR_5)
   break;


  if (VAR_16 == VAR_0)
   goto continue_next_st;


  if (FUNC_7((char *) VAR_11->iscsi_name) != 0)
   goto continue_next_st;

  VAR_8 = FUNC_8(VAR_10);
  if (!VAR_8)
   break;

  VAR_8->fw_ddb_idx = VAR_14;

  FUNC_4(&VAR_8->list, VAR_7);
continue_next_st:
  if (VAR_15 == 0)
   break;
 }

exit_st_list:
 if (VAR_11)
  FUNC_2(VAR_6->fw_ddb_dma_pool, VAR_11, VAR_12);
}
