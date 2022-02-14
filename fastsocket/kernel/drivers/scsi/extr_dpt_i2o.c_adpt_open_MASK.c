
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int unit; int in_use; struct TYPE_3__* next; } ;
typedef TYPE_1__ adpt_hba ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6;
 adpt_hba* VAR_7;

 FUNC_1();


 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 >= VAR_3) {
  FUNC_4();
  return -VAR_0;
 }
 FUNC_2(&VAR_1);
 for (VAR_7 = VAR_2; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_7->unit == VAR_6) {
   break;
  }
 }
 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_1);
  FUNC_4();
  return -VAR_0;
 }






 VAR_7->in_use = 1;
 FUNC_3(&VAR_1);
 FUNC_4();

 return 0;
}
