
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; int i_size; } ;
typedef int loff_t ;


 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct inode * VAR_0, loff_t VAR_1)
{
 loff_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3)
  goto out;

 FUNC_2(&VAR_0->i_lock);
 VAR_2 = VAR_0->i_size;
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_0->i_lock);

 FUNC_4(VAR_0, VAR_2, VAR_1);
out:
 return VAR_3;
}
