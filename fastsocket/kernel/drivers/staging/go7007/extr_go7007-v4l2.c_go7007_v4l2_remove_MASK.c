
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {scalar_t__ video_dev; int hw_lock; int spinlock; scalar_t__ streaming; } ;


 int FUNC_0 (struct go7007*) ;
 int FUNC_1 (struct go7007*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(struct go7007 *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->hw_lock);
 if (VAR_0->streaming) {
  VAR_0->streaming = 0;
  FUNC_1(VAR_0);
  FUNC_4(&VAR_0->spinlock, VAR_1);
  FUNC_0(VAR_0);
  FUNC_5(&VAR_0->spinlock, VAR_1);
 }
 FUNC_3(&VAR_0->hw_lock);
 if (VAR_0->video_dev)
  FUNC_6(VAR_0->video_dev);
}
