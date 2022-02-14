
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct salinfo_data {int open; scalar_t__ state; int type; int log_buffer; } ;
struct proc_dir_entry {struct salinfo_data* data; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_6, struct file *VAR_7)
{
 struct proc_dir_entry *VAR_8 = FUNC_0(VAR_6);
 struct salinfo_data *VAR_9 = VAR_8->data;

 if (!FUNC_1(VAR_0))
  return -VAR_3;

 FUNC_3(&VAR_5);
 if (VAR_9->open) {
  FUNC_4(&VAR_5);
  return -VAR_1;
 }
 VAR_9->open = 1;
 FUNC_4(&VAR_5);

 if (VAR_9->state == VAR_4 &&
     !(VAR_9->log_buffer = FUNC_5(FUNC_2(VAR_9->type)))) {
  VAR_9->open = 0;
  return -VAR_2;
 }

 return 0;
}
