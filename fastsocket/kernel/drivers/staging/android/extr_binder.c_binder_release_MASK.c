
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct binder_proc* private_data; } ;
struct binder_proc {int pid; } ;
typedef int strbuf ;


 int VAR_0 ;
 int FUNC_0 (struct binder_proc*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct binder_proc *VAR_4 = VAR_3->private_data;
 if (VAR_1) {
  char VAR_5[11];
  FUNC_2(VAR_5, sizeof(VAR_5), "%u", VAR_4->pid);
  FUNC_1(VAR_5, VAR_1);
 }

 FUNC_0(VAR_4, VAR_0);

 return 0;
}
