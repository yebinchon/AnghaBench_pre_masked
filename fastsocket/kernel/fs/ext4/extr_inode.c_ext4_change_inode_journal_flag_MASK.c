
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
typedef int journal_t ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (struct inode*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct inode *VAR_2, int VAR_3)
{
 journal_t *VAR_4;
 handle_t *VAR_5;
 int VAR_6;
 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  return 0;
 if (FUNC_11(VAR_4))
  return -VAR_0;

 FUNC_13(VAR_4);
 FUNC_12(VAR_4);
 if (VAR_3)
  FUNC_9(VAR_2, VAR_1);
 else
  FUNC_3(VAR_2, VAR_1);
 FUNC_8(VAR_2);

 FUNC_14(VAR_4);



 VAR_5 = FUNC_5(VAR_2, 1);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_7(VAR_5, VAR_2);
 FUNC_4(VAR_5);
 FUNC_6(VAR_5);
 FUNC_10(VAR_2->i_sb, VAR_6);

 return VAR_6;
}
