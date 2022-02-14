
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int db_page_size; int unmapped_db; } ;
struct ocrdma_dev {int ** cq_tbl; TYPE_1__ nic_info; } ;
struct ocrdma_cq {size_t id; scalar_t__ ucontext; int len; scalar_t__ pa; struct ocrdma_dev* dev; } ;
struct ib_cq {int dummy; } ;


 struct ocrdma_cq* FUNC_0 (struct ib_cq*) ;
 int FUNC_1 (struct ocrdma_cq*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_cq*) ;

int FUNC_4(struct ib_cq *VAR_0)
{
 int VAR_1;
 struct ocrdma_cq *VAR_2 = FUNC_0(VAR_0);
 struct ocrdma_dev *VAR_3 = VAR_2->dev;

 VAR_1 = FUNC_3(VAR_3, VAR_2);

 if (VAR_2->ucontext) {
  FUNC_2(VAR_2->ucontext, (u64) VAR_2->pa, VAR_2->len);
  FUNC_2(VAR_2->ucontext, VAR_3->nic_info.unmapped_db,
    VAR_3->nic_info.db_page_size);
 }
 VAR_3->cq_tbl[VAR_2->id] = ((void*)0);

 FUNC_1(VAR_2);
 return VAR_1;
}
