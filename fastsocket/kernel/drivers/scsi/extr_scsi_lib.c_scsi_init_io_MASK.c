
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nents; int sgl; } ;
struct scsi_data_buffer {TYPE_1__ table; } ;
struct scsi_cmnd {TYPE_2__* request; struct scsi_data_buffer* prot_sdb; struct scsi_data_buffer sdb; } ;
typedef int gfp_t ;
struct TYPE_8__ {struct scsi_data_buffer* special; struct TYPE_8__* next_rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 struct scsi_data_buffer* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct scsi_data_buffer*,int,int ) ;
 int FUNC_7 (TYPE_2__*,struct scsi_data_buffer*,int ) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 int VAR_3 ;
 int FUNC_10 (int) ;

int FUNC_11(struct scsi_cmnd *VAR_4, gfp_t VAR_5)
{
 int VAR_6 = FUNC_7(VAR_4->request, &VAR_4->sdb, VAR_5);
 if (VAR_6)
  goto err_exit;

 if (FUNC_1(VAR_4->request)) {
  struct scsi_data_buffer *VAR_7 = FUNC_5(
   VAR_3, VAR_2);
  if (!VAR_7) {
   VAR_6 = VAR_0;
   goto err_exit;
  }

  VAR_4->request->next_rq->special = VAR_7;
  VAR_6 = FUNC_7(VAR_4->request->next_rq, VAR_7,
            VAR_2);
  if (VAR_6)
   goto err_exit;
 }

 if (FUNC_2(VAR_4->request)) {
  struct scsi_data_buffer *VAR_8 = VAR_4->prot_sdb;
  int VAR_9, VAR_10;

  FUNC_0(VAR_8 == ((void*)0));
  VAR_9 = FUNC_3(VAR_4->request);

  if (FUNC_6(VAR_8, VAR_9, VAR_5)) {
   VAR_6 = VAR_0;
   goto err_exit;
  }

  VAR_10 = FUNC_4(VAR_4->request,
      VAR_8->table.sgl);
  FUNC_0(FUNC_10(VAR_10 > VAR_9));

  VAR_4->prot_sdb = VAR_8;
  VAR_4->prot_sdb->table.nents = VAR_10;
 }

 return VAR_1 ;

err_exit:
 FUNC_9(VAR_4);
 VAR_4->request->special = ((void*)0);
 FUNC_8(VAR_4);
 return VAR_6;
}
