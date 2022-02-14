
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_5(struct task_struct *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_1);

 if (VAR_3) {
  VAR_4 = -VAR_0;
  if (FUNC_2(&VAR_2) < 0)
   goto out;
  FUNC_1(&VAR_2);
 } else {
  VAR_4 = -VAR_0;
  if (FUNC_2(&VAR_2) > 0)
   goto out;
  FUNC_0(&VAR_2);
 }

 VAR_4 = 0;
out:
 FUNC_4(&VAR_1);
 return VAR_4;
}
