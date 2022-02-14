
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_user_data {scalar_t__ ring_prod; scalar_t__ ring_cons; unsigned int* ring; int ring_overflow; int evtchn_async_queue; int evtchn_wait; } ;
typedef int irqreturn_t ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ) ;
 struct per_user_data** VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 unsigned int VAR_8 = (unsigned long)VAR_7;
 struct per_user_data *VAR_9;

 FUNC_3(&VAR_5);

 VAR_9 = VAR_4[VAR_8];

 FUNC_1(VAR_6);

 if ((VAR_9->ring_prod - VAR_9->ring_cons) < VAR_0) {
  VAR_9->ring[FUNC_0(VAR_9->ring_prod)] = VAR_8;
  FUNC_6();
  if (VAR_9->ring_cons == VAR_9->ring_prod++) {
   FUNC_5(&VAR_9->evtchn_wait);
   FUNC_2(&VAR_9->evtchn_async_queue,
        VAR_3, VAR_2);
  }
 } else {
  VAR_9->ring_overflow = 1;
 }

 FUNC_4(&VAR_5);

 return VAR_1;
}
