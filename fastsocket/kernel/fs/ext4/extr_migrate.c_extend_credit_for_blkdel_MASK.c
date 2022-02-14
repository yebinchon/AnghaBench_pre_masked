
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
typedef int handle_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(handle_t *VAR_1, struct inode *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 if (FUNC_1(VAR_1, VAR_0+1))
  return 0;






 VAR_4 = 3 + FUNC_0(VAR_2->i_sb);

 if (FUNC_2(VAR_1, VAR_4) != 0)
  VAR_3 = FUNC_3(VAR_1, VAR_4);

 return VAR_3;
}
