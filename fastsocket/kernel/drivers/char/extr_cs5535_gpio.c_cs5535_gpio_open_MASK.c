
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_2);

 FUNC_0();

 if ((VAR_1 & (1 << VAR_4)) == 0)
  return -VAR_0;

 return FUNC_2(VAR_2, VAR_3);
}
