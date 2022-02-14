
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_rspq {int iqe_len; int intr_params; int cntxt_id; scalar_t__ cur_desc; } ;
struct rsp_ctrl {int pldbuflen_qid; int type_gen; } ;
struct TYPE_4__ {int intrq_lock; TYPE_1__** ingr_map; scalar_t__ ingr_start; struct sge_rspq intrq; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_3__ {int napi; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (struct rsp_ctrl const*,struct sge_rspq*) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct sge_rspq*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct adapter*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_13(struct adapter *VAR_2)
{
 unsigned int VAR_3;
 const struct rsp_ctrl *VAR_4;
 struct sge_rspq *VAR_5 = &VAR_2->sge.intrq;

 FUNC_10(&VAR_2->sge.intrq_lock);
 for (VAR_3 = 0; ; VAR_3++) {
  VAR_4 = (void *)VAR_5->cur_desc + (VAR_5->iqe_len - sizeof(*VAR_4));
  if (!FUNC_5(VAR_4, VAR_5))
   break;

  FUNC_8();
  if (FUNC_3(VAR_4->type_gen) == VAR_0) {
   unsigned int VAR_6 = FUNC_7(VAR_4->pldbuflen_qid);

   VAR_6 -= VAR_2->sge.ingr_start;
   FUNC_6(&VAR_2->sge.ingr_map[VAR_6]->napi);
  }

  FUNC_9(VAR_5);
 }

 FUNC_12(VAR_2, FUNC_2(VAR_1), FUNC_0(VAR_3) |
       FUNC_1(VAR_5->cntxt_id) | FUNC_4(VAR_5->intr_params));
 FUNC_11(&VAR_2->sge.intrq_lock);
 return VAR_3;
}
