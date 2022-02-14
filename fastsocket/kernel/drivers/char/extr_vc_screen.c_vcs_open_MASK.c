
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1) & 127;
 int VAR_4 = 0;

 FUNC_1();
 if(VAR_3 && !FUNC_3(VAR_3-1))
  VAR_4 = -VAR_0;
 FUNC_2();
 return VAR_4;
}
