
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_dev {int lock; int work_urb; int work_done; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct ub_dev *VAR_1 = (struct ub_dev *) VAR_0;
 unsigned long VAR_2;

 FUNC_0(VAR_1->lock, VAR_2);
 if (!FUNC_2(&VAR_1->work_done))
  FUNC_3(&VAR_1->work_urb);
 FUNC_1(VAR_1->lock, VAR_2);
}
