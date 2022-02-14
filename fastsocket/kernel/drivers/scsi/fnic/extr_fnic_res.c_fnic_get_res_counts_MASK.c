
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {int vdev; void* intr_count; void* cq_count; void* rq_count; void* raw_wq_count; void* wq_count; void* wq_copy_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;

void FUNC_1(struct fnic *VAR_4)
{
 VAR_4->wq_count = FUNC_0(VAR_4->vdev, VAR_3);
 VAR_4->raw_wq_count = VAR_4->wq_count - 1;
 VAR_4->wq_copy_count = VAR_4->wq_count - VAR_4->raw_wq_count;
 VAR_4->rq_count = FUNC_0(VAR_4->vdev, VAR_2);
 VAR_4->cq_count = FUNC_0(VAR_4->vdev, VAR_0);
 VAR_4->intr_count = FUNC_0(VAR_4->vdev,
  VAR_1);
}
