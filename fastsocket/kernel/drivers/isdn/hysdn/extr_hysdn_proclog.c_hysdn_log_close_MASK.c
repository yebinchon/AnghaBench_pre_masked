
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct procdata {scalar_t__ log; scalar_t__ if_used; struct log_data* log_head; } ;
struct log_data {struct log_data* next; int usage_cnt; scalar_t__ proc_ctrl; } ;
struct inode {int dummy; } ;
struct file {int f_mode; scalar_t__ private_data; } ;
struct TYPE_3__ {struct procdata* proclog; struct TYPE_3__* next; } ;
typedef TYPE_1__ hysdn_card ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct log_data*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 struct log_data *VAR_5;
 struct procdata *VAR_6;
 hysdn_card *VAR_7;
 int VAR_8 = 0;

 FUNC_2();
 if ((VAR_4->f_mode & (VAR_0 | VAR_1)) == VAR_1) {

  VAR_8 = 0;
 } else {


  VAR_6 = ((void*)0);
  VAR_5 = *((struct log_data **) VAR_4->private_data);
  if (VAR_5)
   VAR_6 = (struct procdata *) VAR_5->proc_ctrl;
  else {

   VAR_7 = VAR_2;
   while (VAR_7) {
    VAR_6 = VAR_7->proclog;
    if (VAR_6->log == FUNC_0(VAR_3))
     break;
    VAR_7 = VAR_7->next;
   }
   if (VAR_7)
    VAR_6 = VAR_7->proclog;
  }
  if (VAR_6)
   VAR_6->if_used--;

  while (VAR_5) {
   VAR_5->usage_cnt--;
   VAR_5 = VAR_5->next;
  }

  if (VAR_6)
   if (VAR_6->if_used <= 0)
    while (VAR_6->log_head) {
     VAR_5 = VAR_6->log_head;
     VAR_6->log_head = VAR_6->log_head->next;
     FUNC_1(VAR_5);
    }
 }
 FUNC_3();

 return (VAR_8);
}
