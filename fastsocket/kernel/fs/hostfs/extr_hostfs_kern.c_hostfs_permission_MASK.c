
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int,int) ;
 int FUNC_5 (struct inode*,int,int *) ;
 char* FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (char*) ;

int FUNC_8(struct inode *VAR_4, int VAR_5)
{
 char *VAR_6;
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10;

 if (VAR_5 & VAR_2) VAR_7 = 1;
 if (VAR_5 & VAR_3) VAR_8 = 1;
 if (VAR_5 & VAR_1) VAR_9 = 1;
 VAR_6 = FUNC_6(VAR_4, 0);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 if (FUNC_1(VAR_4->i_mode) || FUNC_0(VAR_4->i_mode) ||
     FUNC_2(VAR_4->i_mode) || FUNC_3(VAR_4->i_mode))
  VAR_10 = 0;
 else
  VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_7(VAR_6);
 if (!VAR_10)
  VAR_10 = FUNC_5(VAR_4, VAR_5, ((void*)0));
 return VAR_10;
}
