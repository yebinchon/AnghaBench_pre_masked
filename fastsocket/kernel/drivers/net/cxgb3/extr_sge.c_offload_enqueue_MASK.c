
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sge_rspq {int rx_queue; } ;
struct sge_qset {int napi; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int *) ;
 struct sge_qset* FUNC_2 (struct sge_rspq*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct sge_rspq *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2 = FUNC_3(&VAR_0->rx_queue);

 FUNC_0(&VAR_0->rx_queue, VAR_1);

 if (VAR_2) {
  struct sge_qset *VAR_3 = FUNC_2(VAR_0);

  FUNC_1(&VAR_3->napi);
 }
}
