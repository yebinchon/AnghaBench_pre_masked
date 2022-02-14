
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; int i_lock; int i_size; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* truncate ) (struct inode*) ;} ;


 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, loff_t VAR_1)
{
 loff_t VAR_2;
 int VAR_3;

 FUNC_2(&VAR_0->i_lock);
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_3(&VAR_0->i_lock);
  goto out;
 }

 VAR_2 = VAR_0->i_size;
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_0->i_lock);
 FUNC_5(VAR_0, VAR_2, VAR_1);
 if (VAR_0->i_op->truncate)
  VAR_0->i_op->truncate(VAR_0);
out:
 return VAR_3;
}
