
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {size_t cidx; int holdoff_tmr; int cntxt_id; struct rsp_desc* desc; } ;
struct sge_qset {int napi; } ;
struct rsp_desc {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rsp_desc*,struct sge_rspq*) ;
 scalar_t__ FUNC_4 (struct rsp_desc*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct adapter*,struct sge_qset*,struct rsp_desc*) ;
 int FUNC_7 () ;
 struct sge_qset* FUNC_8 (struct sge_rspq*) ;
 int FUNC_9 (struct adapter*,int ,int) ;

__attribute__((used)) static inline int FUNC_10(struct adapter *VAR_1, struct sge_rspq *VAR_2)
{
 struct sge_qset *VAR_3 = FUNC_8(VAR_2);
 struct rsp_desc *VAR_4 = &VAR_2->desc[VAR_2->cidx];

 if (!FUNC_3(VAR_4, VAR_2))
  return -1;
 FUNC_7();
 if (FUNC_4(VAR_4) && FUNC_6(VAR_1, VAR_3, VAR_4) == 0) {
  FUNC_9(VAR_1, VAR_0, FUNC_2(VAR_2->cntxt_id) |
        FUNC_1(VAR_2->holdoff_tmr) | FUNC_0(VAR_2->cidx));
  return 0;
 }
 FUNC_5(&VAR_3->napi);
 return 1;
}
