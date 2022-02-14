
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_7__ {int (* lock ) (struct file*,int,struct file_lock*) ;} ;
struct TYPE_6__ {int time_delta; } ;
struct TYPE_5__ {struct inode* host; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (TYPE_2__*,struct inode*) ;
 int FUNC_3 (struct file*,struct file_lock*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct file*,int,struct file_lock*) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_1, int VAR_2, struct file_lock *VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_1->f_mapping->host;
 int VAR_6;





 VAR_6 = FUNC_6(VAR_1->f_mapping);
 if (VAR_6 != 0)
  goto out;





 if (!VAR_4)
  VAR_6 = FUNC_0(VAR_5)->lock(VAR_1, VAR_2, VAR_3);
 else
  VAR_6 = FUNC_3(VAR_1, VAR_3);
 if (VAR_6 < 0)
  goto out;
 FUNC_6(VAR_1->f_mapping);
 if (!FUNC_5(VAR_5, VAR_0)) {
  if (FUNC_4(&FUNC_1(VAR_5)->time_delta))
   FUNC_2(FUNC_1(VAR_5), VAR_5);
  else
   FUNC_7(VAR_5);
 }
out:
 return VAR_6;
}
