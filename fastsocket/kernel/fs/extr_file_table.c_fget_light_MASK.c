
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int count; } ;
struct file {int f_count; } ;
struct TYPE_2__ {struct files_struct* files; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 struct file* FUNC_2 (struct files_struct*,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

struct file *FUNC_6(unsigned int VAR_1, int *VAR_2)
{
 struct file *VAR_3;
 struct files_struct *VAR_4 = VAR_0->files;

 *VAR_2 = 0;
 if (FUNC_3((FUNC_1(&VAR_4->count) == 1))) {
  VAR_3 = FUNC_2(VAR_4, VAR_1);
 } else {
  FUNC_4();
  VAR_3 = FUNC_2(VAR_4, VAR_1);
  if (VAR_3) {
   if (FUNC_0(&VAR_3->f_count))
    *VAR_2 = 1;
   else

    VAR_3 = ((void*)0);
  }
  FUNC_5();
 }

 return VAR_3;
}
