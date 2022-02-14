
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (struct task_struct*,unsigned long,void*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct task_struct *VAR_0, unsigned long VAR_1,
   void *VAR_2, void *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, 0);
 if (VAR_5 == VAR_4)
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, 1);
 return VAR_5;
}
