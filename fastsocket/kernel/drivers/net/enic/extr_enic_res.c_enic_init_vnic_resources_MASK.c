
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intr_timer_type; int intr_timer_usec; } ;
struct enic {int intr_count; unsigned int rq_count; unsigned int wq_count; unsigned int cq_count; TYPE_1__ config; int * intr; int * cq; int * wq; int * rq; int vdev; } ;
typedef enum vnic_dev_intr_mode { ____Placeholder_vnic_dev_intr_mode } vnic_dev_intr_mode ;





 int FUNC_0 (int *,int ,int,int ,int ,int,int,int,int ,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,unsigned int) ;
 int FUNC_3 (int *,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (int *,unsigned int,unsigned int,unsigned int) ;

void FUNC_5(struct enic *VAR_0)
{
 enum vnic_dev_intr_mode VAR_1;
 unsigned int VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 VAR_1 = FUNC_1(VAR_0->vdev);
 switch (VAR_1) {
 case 130:
 case 128:
  VAR_4 = 1;
  VAR_5 = VAR_0->intr_count - 2;
  break;
 default:
  VAR_4 = 0;
  VAR_5 = 0;
  break;
 }

 for (VAR_7 = 0; VAR_7 < VAR_0->rq_count; VAR_7++) {
  VAR_6 = VAR_7;
  FUNC_3(&VAR_0->rq[VAR_7],
   VAR_6,
   VAR_4,
   VAR_5);
 }

 for (VAR_7 = 0; VAR_7 < VAR_0->wq_count; VAR_7++) {
  VAR_6 = VAR_0->rq_count + VAR_7;
  FUNC_4(&VAR_0->wq[VAR_7],
   VAR_6,
   VAR_4,
   VAR_5);
 }







 for (VAR_7 = 0; VAR_7 < VAR_0->cq_count; VAR_7++) {

  switch (VAR_1) {
  case 128:
   VAR_3 = VAR_7;
   break;
  default:
   VAR_3 = 0;
   break;
  }

  FUNC_0(&VAR_0->cq[VAR_7],
   0 ,
   1 ,
   0 ,
   0 ,
   1 ,
   1 ,
   1 ,
   0 ,
   VAR_3,
   0 );
 }







 switch (VAR_1) {
 case 129:
 case 128:
  VAR_2 = 1;
  break;
 default:
  VAR_2 = 0;
  break;
 }

 for (VAR_7 = 0; VAR_7 < VAR_0->intr_count; VAR_7++) {
  FUNC_2(&VAR_0->intr[VAR_7],
   VAR_0->config.intr_timer_usec,
   VAR_0->config.intr_timer_type,
   VAR_2);
 }
}
