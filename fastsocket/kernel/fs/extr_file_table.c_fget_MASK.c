
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int dummy; } ;
struct file {int f_count; } ;
struct TYPE_2__ {struct files_struct* files; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 struct file* FUNC_1 (struct files_struct*,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct file *FUNC_4(unsigned int VAR_1)
{
 struct file *VAR_2;
 struct files_struct *VAR_3 = VAR_0->files;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_3, VAR_1);
 if (VAR_2) {
  if (!FUNC_0(&VAR_2->f_count)) {

   FUNC_3();
   return ((void*)0);
  }
 }
 FUNC_3();

 return VAR_2;
}
