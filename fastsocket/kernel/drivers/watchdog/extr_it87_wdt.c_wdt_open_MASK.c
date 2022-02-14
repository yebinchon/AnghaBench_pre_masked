
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct inode*,struct file*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_8, struct file *VAR_9)
{
 if (VAR_5 && FUNC_2(VAR_2, &VAR_7))
  return -VAR_0;
 if (!FUNC_2(VAR_4, &VAR_7)) {
  if (VAR_6 && !FUNC_2(VAR_3, &VAR_7))
   FUNC_0(VAR_1);
  FUNC_3();
 }
 return FUNC_1(VAR_8, VAR_9);
}
