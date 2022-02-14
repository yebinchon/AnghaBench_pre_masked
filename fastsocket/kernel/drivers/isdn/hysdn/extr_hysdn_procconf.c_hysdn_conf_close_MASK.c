
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct conf_writedata* private_data; TYPE_1__* f_cred; } ;
struct conf_writedata {scalar_t__ state; int card; } ;
struct TYPE_6__ {int debug_flags; struct TYPE_6__* next; struct proc_dir_entry* procconf; } ;
typedef TYPE_2__ hysdn_card ;
struct TYPE_5__ {int fsgid; int fsuid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ,int) ;
 int FUNC_2 (struct conf_writedata*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_7, struct file *VAR_8)
{
 hysdn_card *VAR_9;
 struct conf_writedata *VAR_10;
 int VAR_11 = 0;
 struct proc_dir_entry *VAR_12;

 FUNC_3();

 VAR_9 = VAR_6;
 while (VAR_9) {
  VAR_12 = VAR_9->procconf;
  if (VAR_12 == FUNC_0(VAR_7))
   break;
  VAR_9 = VAR_9->next;
 }
 if (!VAR_9) {
  FUNC_5();
  return (-VAR_1);
 }
 if (VAR_9->debug_flags & (VAR_5 | VAR_4))
  FUNC_1(VAR_9, "config close for uid=%d gid=%d mode=0x%x",
        VAR_8->f_cred->fsuid, VAR_8->f_cred->fsgid,
        VAR_8->f_mode);

 if ((VAR_8->f_mode & (VAR_2 | VAR_3)) == VAR_3) {

  if (VAR_8->private_data) {
   VAR_10 = VAR_8->private_data;

   if (VAR_10->state == VAR_0)
    VAR_11 = FUNC_4(VAR_10->card);
   FUNC_2(VAR_8->private_data);

  }
 } else if ((VAR_8->f_mode & (VAR_2 | VAR_3)) == VAR_2) {


  FUNC_2(VAR_8->private_data);
 }
 FUNC_5();
 return (VAR_11);
}
