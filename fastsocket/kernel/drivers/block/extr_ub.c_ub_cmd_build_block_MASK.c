
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_scsi_cmd {scalar_t__ dir; int nsg; unsigned int* cdb; int cdb_len; int len; int sgv; } ;
struct ub_request {int nsg; int sgv; struct request* rq; } ;
struct TYPE_2__ {unsigned int bshift; } ;
struct ub_lun {TYPE_1__ capacity; } ;
struct ub_dev {int dummy; } ;
struct scatterlist {int dummy; } ;
struct request {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct request*) ;
 unsigned int FUNC_1 (struct request*) ;
 unsigned int FUNC_2 (struct request*) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (struct request*) ;

__attribute__((used)) static void FUNC_5(struct ub_dev *VAR_5, struct ub_lun *VAR_6,
    struct ub_scsi_cmd *VAR_7, struct ub_request *VAR_8)
{
 struct request *VAR_9 = VAR_8->rq;
 unsigned int VAR_10, VAR_11;

 if (FUNC_4(VAR_9) == VAR_3)
  VAR_7->dir = VAR_2;
 else
  VAR_7->dir = VAR_1;

 VAR_7->nsg = VAR_8->nsg;
 FUNC_3(VAR_7->sgv, VAR_8->sgv, sizeof(struct scatterlist) * VAR_7->nsg);







 VAR_10 = FUNC_1(VAR_9) >> VAR_6->capacity.bshift;
 VAR_11 = FUNC_2(VAR_9) >> VAR_6->capacity.bshift;

 VAR_7->cdb[0] = (VAR_7->dir == VAR_1)? VAR_0: VAR_4;

 VAR_7->cdb[2] = VAR_10 >> 24;
 VAR_7->cdb[3] = VAR_10 >> 16;
 VAR_7->cdb[4] = VAR_10 >> 8;
 VAR_7->cdb[5] = VAR_10;
 VAR_7->cdb[7] = VAR_11 >> 8;
 VAR_7->cdb[8] = VAR_11;
 VAR_7->cdb_len = 10;

 VAR_7->len = FUNC_0(VAR_9);
}
