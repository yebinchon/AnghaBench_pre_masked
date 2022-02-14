
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_cq {int dummy; } ;
struct c4iw_cq {int lock; int cq; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,int) ;
 struct c4iw_cq* FUNC_3 (struct ib_cq*) ;

int FUNC_4(struct ib_cq *VAR_3, enum ib_cq_notify_flags VAR_4)
{
 struct c4iw_cq *VAR_5;
 int VAR_6;
 unsigned long VAR_7;

 VAR_5 = FUNC_3(VAR_3);
 FUNC_0(&VAR_5->lock, VAR_7);
 VAR_6 = FUNC_2(&VAR_5->cq,
   (VAR_4 & VAR_2) == VAR_1);
 FUNC_1(&VAR_5->lock, VAR_7);
 if (VAR_6 && !(VAR_4 & VAR_0))
  VAR_6 = 0;
 return VAR_6;
}
