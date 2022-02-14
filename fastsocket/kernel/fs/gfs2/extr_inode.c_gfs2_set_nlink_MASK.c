
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct inode {scalar_t__ i_nlink; } ;


 int FUNC_0 (struct inode*) ;

__attribute__((used)) static void FUNC_1(struct inode *VAR_0, u32 VAR_1)
{





 if ((VAR_0->i_nlink != VAR_1) && (VAR_0->i_nlink != 0)) {
  if (VAR_1 == 0)
   FUNC_0(VAR_0);
  else
   VAR_0->i_nlink = VAR_1;
 }
}
