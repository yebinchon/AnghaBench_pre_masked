
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ is_fmr; } ;
struct iser_regd_buf {TYPE_2__ reg; } ;
struct iscsi_iser_task {struct iser_regd_buf* rdma_regd; scalar_t__* dir; TYPE_1__* data_copy; } ;
struct TYPE_3__ {int * copy_buf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iscsi_iser_task*) ;
 int FUNC_1 (struct iscsi_iser_task*,size_t) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(struct iscsi_iser_task *VAR_2)
{
 int VAR_3 = 1;
 struct iser_regd_buf *VAR_4;




 if (VAR_2->data_copy[VAR_0].copy_buf != ((void*)0)) {
  VAR_3 = 0;
  FUNC_1(VAR_2, VAR_0);
 }
 if (VAR_2->data_copy[VAR_1].copy_buf != ((void*)0)) {
  VAR_3 = 0;
  FUNC_1(VAR_2, VAR_1);
 }

 if (VAR_2->dir[VAR_0]) {
  VAR_4 = &VAR_2->rdma_regd[VAR_0];
  if (VAR_4->reg.is_fmr)
   FUNC_2(&VAR_4->reg);
 }

 if (VAR_2->dir[VAR_1]) {
  VAR_4 = &VAR_2->rdma_regd[VAR_1];
  if (VAR_4->reg.is_fmr)
   FUNC_2(&VAR_4->reg);
 }


       if (VAR_3)
  FUNC_0(VAR_2);
}
