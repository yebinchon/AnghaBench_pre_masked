
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*,int) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int) ;

int FUNC_7(struct inode *VAR_4, int VAR_5)
{
        int VAR_6 = 0;

 VAR_5 &= VAR_2 | VAR_3 | VAR_1;

 if (!VAR_5)
  return 0;

 if ((VAR_5 & VAR_1) && !FUNC_3(VAR_4))
  return -VAR_0;

 FUNC_4();

 if (FUNC_0(VAR_4, VAR_5))
  goto out;

        VAR_6 = FUNC_6(VAR_4->i_sb, FUNC_2(VAR_4), VAR_5);

 if (!VAR_6)
  FUNC_1(VAR_4, VAR_5);

 out:
 FUNC_5();
 return VAR_6;
}
