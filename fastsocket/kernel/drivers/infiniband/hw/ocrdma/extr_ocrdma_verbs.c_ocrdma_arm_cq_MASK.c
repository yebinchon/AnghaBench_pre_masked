
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ocrdma_dev {int dummy; } ;
struct ocrdma_cqe {int dummy; } ;
struct ocrdma_cq {int id; int armed; int solicited; int getp; int arm_needed; int cq_lock; struct ocrdma_cqe* va; struct ocrdma_dev* dev; } ;
struct ib_cq {int dummy; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocrdma_cq* FUNC_0 (struct ib_cq*) ;
 int FUNC_1 (struct ocrdma_cq*,struct ocrdma_cqe*) ;
 int FUNC_2 (struct ocrdma_dev*,int,int,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ib_cq *VAR_2, enum ib_cq_notify_flags VAR_3)
{
 struct ocrdma_cq *VAR_4;
 unsigned long VAR_5;
 struct ocrdma_dev *VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 struct ocrdma_cqe *VAR_9;

 VAR_4 = FUNC_0(VAR_2);
 VAR_7 = VAR_4->id;
 VAR_6 = VAR_4->dev;

 FUNC_3(&VAR_4->cq_lock, VAR_5);
 if (VAR_3 & VAR_0 || VAR_3 & VAR_1)
  VAR_4->armed = 1;
 if (VAR_3 & VAR_1)
  VAR_4->solicited = 1;

 VAR_8 = VAR_4->getp;
 VAR_9 = VAR_4->va + VAR_8;





 if (!FUNC_1(VAR_4, VAR_9) || VAR_4->arm_needed) {
  VAR_4->arm_needed = 0;
  FUNC_2(VAR_6, VAR_7, VAR_4->armed, VAR_4->solicited, 0);
 }
 FUNC_4(&VAR_4->cq_lock, VAR_5);
 return 0;
}
