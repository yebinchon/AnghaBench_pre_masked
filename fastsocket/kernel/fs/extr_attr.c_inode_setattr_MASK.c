
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_size; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct inode*,struct iattr*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;

int FUNC_4(struct inode *VAR_1, struct iattr *VAR_2)
{
 unsigned int VAR_3 = VAR_2->ia_valid;

 if (VAR_3 & VAR_0 &&
     VAR_2->ia_size != FUNC_1(VAR_1)) {
  int VAR_4;

  VAR_4 = FUNC_3(VAR_1, VAR_2->ia_size);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_0(VAR_1, VAR_2);

 FUNC_2(VAR_1);

 return 0;
}
