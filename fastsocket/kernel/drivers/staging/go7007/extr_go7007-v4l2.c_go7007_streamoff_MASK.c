
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {int hw_lock; int spinlock; scalar_t__ streaming; } ;


 int VAR_0 ;
 int FUNC_0 (struct go7007*) ;
 int FUNC_1 (struct go7007*) ;
 int FUNC_2 (struct go7007*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct go7007 *VAR_1)
{
 int VAR_2 = -VAR_0;
 unsigned long VAR_3;

 FUNC_3(&VAR_1->hw_lock);
 if (VAR_1->streaming) {
  VAR_1->streaming = 0;
  FUNC_2(VAR_1);
  FUNC_5(&VAR_1->spinlock, VAR_3);
  FUNC_0(VAR_1);
  FUNC_6(&VAR_1->spinlock, VAR_3);
  FUNC_1(VAR_1);
  VAR_2 = 0;
 }
 FUNC_4(&VAR_1->hw_lock);
 return 0;
}
