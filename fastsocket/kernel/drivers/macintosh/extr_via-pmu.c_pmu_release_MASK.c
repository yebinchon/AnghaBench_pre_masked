
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_private {scalar_t__ backlight_locker; int list; } ;
struct inode {int dummy; } ;
struct file {struct pmu_private* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct pmu_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_1, struct file *VAR_2)
{
 struct pmu_private *VAR_3 = VAR_2->private_data;
 unsigned long VAR_4;

 if (VAR_3 != 0) {
  VAR_2->private_data = ((void*)0);
  FUNC_3(&VAR_0, VAR_4);
  FUNC_1(&VAR_3->list);
  FUNC_4(&VAR_0, VAR_4);






  FUNC_0(VAR_3);
 }
 return 0;
}
