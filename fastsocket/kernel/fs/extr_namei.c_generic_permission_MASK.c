
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int,int (*) (struct inode*,int)) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;

int FUNC_4(struct inode *VAR_6, int VAR_7,
  int (*VAR_8)(struct inode *VAR_9, int VAR_10))
{
 int VAR_11;




 VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_8);
 if (VAR_11 != -VAR_2)
  return VAR_11;





 if (!(VAR_7 & VAR_3) || FUNC_3(VAR_6))
  if (FUNC_2(VAR_0))
   return 0;




 VAR_7 &= VAR_4 | VAR_5 | VAR_3;
 if (VAR_7 == VAR_4 || (FUNC_0(VAR_6->i_mode) && !(VAR_7 & VAR_5)))
  if (FUNC_2(VAR_1))
   return 0;

 return -VAR_2;
}
