
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct scatterlist {int dummy; } ;
struct iscsi_task {struct iscsi_conn* conn; struct scsi_cmnd* sc; struct beiscsi_io_task* dd_data; } ;
struct iscsi_conn {scalar_t__ dd_data; } ;
struct beiscsi_io_task {struct scsi_cmnd* scsi_cmnd; } ;
struct beiscsi_hba {int (* iotask_fn ) (struct iscsi_task*,struct scatterlist*,int,unsigned int,unsigned int) ;} ;
struct beiscsi_conn {struct beiscsi_hba* phba; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_1 (struct iscsi_task*) ;
 unsigned int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct iscsi_task*,struct scatterlist*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct iscsi_task *VAR_3)
{
 struct beiscsi_io_task *VAR_4 = VAR_3->dd_data;
 struct scsi_cmnd *VAR_5 = VAR_3->sc;
 struct beiscsi_hba *VAR_6 = ((void*)0);
 struct scatterlist *VAR_7;
 int VAR_8;
 unsigned int VAR_9 = 0, VAR_10 = 0;

 VAR_6 = ((struct beiscsi_conn *)VAR_3->conn->dd_data)->phba;

 if (!VAR_5)
  return FUNC_1(VAR_3);

 VAR_4->scsi_cmnd = VAR_5;
 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 < 0) {
  struct iscsi_conn *VAR_11 = VAR_3->conn;
  struct beiscsi_hba *VAR_12 = ((void*)0);

  VAR_12 = ((struct beiscsi_conn *)VAR_11->dd_data)->phba;
  FUNC_0(VAR_12, VAR_2, VAR_0,
       "BM_%d : scsi_dma_map Failed\n");

  return VAR_8;
 }
 VAR_10 = FUNC_2(VAR_5);
 VAR_7 = FUNC_4(VAR_5);
 if (VAR_5->sc_data_direction == VAR_1)
  VAR_9 = 1;
  else
  VAR_9 = 0;

  return VAR_6->iotask_fn(VAR_3, VAR_7, VAR_8, VAR_10, VAR_9);
}
