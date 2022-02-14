
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct inode*,struct file*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_11, struct file *VAR_12)
{
 if (FUNC_1(1, &VAR_10))
  return -VAR_0;


 VAR_4 = VAR_3 + VAR_9;
 VAR_5 = VAR_6;
 VAR_7 = VAR_8;
 VAR_1 |= VAR_2;
 return FUNC_0(VAR_11, VAR_12);
}
