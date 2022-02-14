
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ib_uverbs_file {int ref; TYPE_1__* async_file; int ucontext; } ;
struct file {struct ib_uverbs_file* private_data; } ;
struct TYPE_2__ {int ref; } ;


 int FUNC_0 (struct ib_uverbs_file*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 struct ib_uverbs_file *VAR_4 = VAR_3->private_data;

 FUNC_0(VAR_4, VAR_4->ucontext);

 if (VAR_4->async_file)
  FUNC_1(&VAR_4->async_file->ref, VAR_0);

 FUNC_1(&VAR_4->ref, VAR_1);

 return 0;
}
