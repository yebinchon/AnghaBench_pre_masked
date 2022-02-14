
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehca_qp {unsigned int real_qp_num; int list_entries; } ;
struct TYPE_2__ {int device; } ;
struct ehca_cq {int cq_number; TYPE_1__ ib_cq; int spinlock; int * qp_hashtab; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,unsigned int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct ehca_cq *VAR_1, struct ehca_qp *VAR_2)
{
 unsigned int VAR_3 = VAR_2->real_qp_num;
 unsigned int VAR_4 = VAR_3 & (VAR_0-1);
 unsigned long VAR_5;

 FUNC_2(&VAR_1->spinlock, VAR_5);
 FUNC_1(&VAR_2->list_entries, &VAR_1->qp_hashtab[VAR_4]);
 FUNC_3(&VAR_1->spinlock, VAR_5);

 FUNC_0(VAR_1->ib_cq.device, "cq_num=%x real_qp_num=%x",
   VAR_1->cq_number, VAR_3);

 return 0;
}
