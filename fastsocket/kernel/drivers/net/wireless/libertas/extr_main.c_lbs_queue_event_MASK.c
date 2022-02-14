
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lbs_private {scalar_t__ psstate; int driver_lock; int waitq; int event_fifo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct lbs_private *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(VAR_0);
 FUNC_3(&VAR_3->driver_lock, VAR_5);

 if (VAR_3->psstate == VAR_2)
  VAR_3->psstate = VAR_1;

 FUNC_0(VAR_3->event_fifo, (unsigned char *) &VAR_4, sizeof(u32));

 FUNC_5(&VAR_3->waitq);

 FUNC_4(&VAR_3->driver_lock, VAR_5);
 FUNC_2(VAR_0);
}
