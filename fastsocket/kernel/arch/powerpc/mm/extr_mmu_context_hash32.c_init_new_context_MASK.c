
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {unsigned long id; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,int,unsigned long) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long,int ) ;

int FUNC_2(struct task_struct *VAR_3, struct mm_struct *VAR_4)
{
 unsigned long VAR_5 = VAR_2;

 while (FUNC_1(VAR_5, VAR_1)) {
  VAR_5 = FUNC_0(VAR_1, VAR_0+1, VAR_5);
  if (VAR_5 > VAR_0)
   VAR_5 = 0;
 }
 VAR_2 = (VAR_5 + 1) & VAR_0;
 VAR_4->context.id = VAR_5;

 return 0;
}
