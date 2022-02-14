
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct file*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct file *VAR_5)
{
 if (FUNC_2(0, &VAR_3))
  return -VAR_0;
 if (VAR_2)
  FUNC_0(VAR_1);
 FUNC_3();
 return FUNC_1(VAR_4, VAR_5);
}
