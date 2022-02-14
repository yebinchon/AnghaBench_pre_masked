
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd {int nsg; int cdb_len; int timeo; scalar_t__ len; int cdb; int * sgv; int dir; } ;
struct ub_request {int nsg; int sgv; struct request* rq; } ;
struct ub_lun {int dummy; } ;
struct ub_dev {int dummy; } ;
struct scatterlist {int dummy; } ;
struct request {int cmd_len; int timeout; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (struct request*) ;

__attribute__((used)) static void FUNC_3(struct ub_dev *VAR_4, struct ub_lun *VAR_5,
    struct ub_scsi_cmd *VAR_6, struct ub_request *VAR_7)
{
 struct request *VAR_8 = VAR_7->rq;

 if (FUNC_0(VAR_8) == 0) {
  VAR_6->dir = VAR_0;
 } else {
  if (FUNC_2(VAR_8) == VAR_3)
   VAR_6->dir = VAR_2;
  else
   VAR_6->dir = VAR_1;
 }

 VAR_6->nsg = VAR_7->nsg;
 FUNC_1(VAR_6->sgv, VAR_7->sgv, sizeof(struct scatterlist) * VAR_6->nsg);

 FUNC_1(&VAR_6->cdb, VAR_8->cmd, VAR_8->cmd_len);
 VAR_6->cdb_len = VAR_8->cmd_len;

 VAR_6->len = FUNC_0(VAR_8);





 VAR_6->timeo = VAR_8->timeout;
}
