
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int ,int ) ;
 int FUNC_2 (struct inode*,int ) ;

int FUNC_3(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4)
{
 if (!FUNC_0(VAR_2->i_mode))
  return -VAR_0;

 if (!FUNC_2(VAR_2, VAR_1)) {

  return -VAR_0;
 }

 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
