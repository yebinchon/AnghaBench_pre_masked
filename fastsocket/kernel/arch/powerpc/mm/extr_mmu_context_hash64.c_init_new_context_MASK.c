
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int,int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct task_struct *VAR_7, struct mm_struct *VAR_8)
{
 int VAR_9;
 int VAR_10;

again:
 if (!FUNC_1(&VAR_4, VAR_2))
  return -VAR_1;

 FUNC_5(&VAR_5);
 VAR_10 = FUNC_0(&VAR_4, ((void*)0), 1, &VAR_9);
 FUNC_6(&VAR_5);

 if (VAR_10 == -VAR_0)
  goto again;
 else if (VAR_10)
  return VAR_10;

 if (VAR_9 > VAR_3) {
  FUNC_5(&VAR_5);
  FUNC_2(&VAR_4, VAR_9);
  FUNC_6(&VAR_5);
  return -VAR_1;
 }





 if (FUNC_3(VAR_8))
  FUNC_4(VAR_8, VAR_6);
 VAR_8->context.id = VAR_9;

 return 0;
}
