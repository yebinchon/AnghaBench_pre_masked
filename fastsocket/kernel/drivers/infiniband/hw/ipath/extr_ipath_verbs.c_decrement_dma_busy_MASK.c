
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_qp {size_t state; scalar_t__ s_last; scalar_t__ s_head; int s_flags; int wait_dma; int s_lock; int s_dma_busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int* VAR_2 ;
 int FUNC_1 (struct ipath_qp*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ipath_qp *VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_0(&VAR_3->s_dma_busy)) {
  FUNC_2(&VAR_3->s_lock, VAR_4);
  if ((VAR_2[VAR_3->state] & VAR_0 &&
       VAR_3->s_last != VAR_3->s_head) ||
      (VAR_3->s_flags & VAR_1))
   FUNC_1(VAR_3);
  FUNC_3(&VAR_3->s_lock, VAR_4);
  FUNC_4(&VAR_3->wait_dma);
 }
}
