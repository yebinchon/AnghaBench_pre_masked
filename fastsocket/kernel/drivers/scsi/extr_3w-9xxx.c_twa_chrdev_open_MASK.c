
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (struct inode*) ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = VAR_0;

 FUNC_0();
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 >= VAR_1)
  goto out;
 VAR_5 = 0;
out:
 return VAR_5;
}
