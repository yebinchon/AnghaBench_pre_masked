
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tgt_cmd {struct request* rq; } ;
struct scsi_cmnd {int sc_data_direction; int cmnd; struct request* request; int jiffies_at_alloc; } ;
struct request {struct scsi_tgt_cmd* end_io_data; int cmd_flags; int cmd_type; struct scsi_cmnd* special; int cmd; } ;
struct Scsi_Host {int shost_gendev; int uspace_req_q; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct scsi_cmnd* FUNC_0 (struct Scsi_Host*,int ) ;
 struct request* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 struct scsi_tgt_cmd* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct scsi_tgt_cmd*) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;

struct scsi_cmnd *FUNC_7(struct Scsi_Host *VAR_6,
     enum dma_data_direction VAR_7,
     gfp_t VAR_8)
{
 int VAR_9 = (VAR_7 == VAR_0);
 struct request *VAR_10;
 struct scsi_cmnd *VAR_11;
 struct scsi_tgt_cmd *VAR_12;


 if (!FUNC_3(&VAR_6->shost_gendev))
  return ((void*)0);

 VAR_12 = FUNC_4(VAR_5, VAR_1);
 if (!VAR_12)
  goto put_dev;






 VAR_10 = FUNC_1(VAR_6->uspace_req_q, !VAR_9, VAR_8);
 if (!VAR_10)
  goto free_tcmd;

 VAR_11 = FUNC_0(VAR_6, VAR_8);
 if (!VAR_11)
  goto release_rq;

 VAR_11->sc_data_direction = VAR_7;
 VAR_11->jiffies_at_alloc = VAR_4;
 VAR_11->request = VAR_10;

 VAR_11->cmnd = VAR_10->cmd;

 VAR_10->special = VAR_11;
 VAR_10->cmd_type = VAR_3;
 VAR_10->cmd_flags |= VAR_2;
 VAR_10->end_io_data = VAR_12;

 VAR_12->rq = VAR_10;

 return VAR_11;

release_rq:
 FUNC_2(VAR_10);
free_tcmd:
 FUNC_5(VAR_5, VAR_12);
put_dev:
 FUNC_6(&VAR_6->shost_gendev);
 return ((void*)0);

}
