
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__,scalar_t__) ;

int
FUNC_2(struct inode *VAR_1,
   s64 VAR_2, s64 VAR_3, s64 VAR_4, s64 * VAR_5)
{
 int VAR_6;



 if ((VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4)) == 0) {
  *VAR_5 = VAR_2;
  return (0);
 } else {
  if (VAR_6 != -VAR_0)
   return (VAR_6);
 }






 return (FUNC_0
  (VAR_1, VAR_2 + VAR_3 - 1, VAR_4 + VAR_3, VAR_5));
}
