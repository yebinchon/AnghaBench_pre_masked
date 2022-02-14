
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd {scalar_t__* cdb; int cdb_len; int nsg; int state; scalar_t__ tag; struct ub_scsi_cmd* back; int done; int lun; void* len; struct scatterlist* sgv; int dir; } ;
struct ub_dev {int tagcnt; scalar_t__ top_sense; struct ub_scsi_cmd top_rqs_cmd; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct ub_scsi_cmd*,int ,int) ;
 int FUNC_1 (struct scatterlist*,int ) ;
 int FUNC_2 (struct scatterlist*,int ,void*,unsigned long) ;
 int FUNC_3 (struct ub_dev*,struct ub_scsi_cmd*) ;
 int FUNC_4 (struct ub_dev*,struct ub_scsi_cmd*,int) ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ub_dev *VAR_9, struct ub_scsi_cmd *VAR_10)
{
 struct ub_scsi_cmd *VAR_11;
 struct scatterlist *VAR_12;
 int VAR_13;

 if (VAR_10->cdb[0] == VAR_2) {
  VAR_13 = -VAR_0;
  goto error;
 }

 VAR_11 = &VAR_9->top_rqs_cmd;
 FUNC_0(VAR_11, 0, sizeof(struct ub_scsi_cmd));
 VAR_11->cdb[0] = VAR_2;
 VAR_11->cdb[4] = VAR_7;
 VAR_11->cdb_len = 6;
 VAR_11->dir = VAR_5;
 VAR_11->state = VAR_3;
 VAR_11->nsg = 1;
 VAR_12 = &VAR_11->sgv[0];
 FUNC_1(VAR_12, VAR_6);
 FUNC_2(VAR_12, FUNC_5(VAR_9->top_sense), VAR_7,
   (unsigned long)VAR_9->top_sense & (VAR_1-1));
 VAR_11->len = VAR_7;
 VAR_11->lun = VAR_10->lun;
 VAR_11->done = VAR_8;
 VAR_11->back = VAR_10;

 VAR_11->tag = VAR_9->tagcnt++;

 VAR_10->state = VAR_4;

 FUNC_3(VAR_9, VAR_11);
 return;

error:
 FUNC_4(VAR_9, VAR_10, VAR_13);
}
