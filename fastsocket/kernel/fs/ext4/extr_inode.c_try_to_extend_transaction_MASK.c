
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int handle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(handle_t *VAR_1, struct inode *VAR_2)
{
 if (!FUNC_2(VAR_1))
  return 0;
 if (FUNC_1(VAR_1, VAR_0+1))
  return 0;
 if (!FUNC_3(VAR_1, FUNC_0(VAR_2)))
  return 0;
 return 1;
}
