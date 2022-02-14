
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; } ;


 int FUNC_0 (struct inode*) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_0)
{
 if (VAR_0->i_nlink >= 2)
  FUNC_0(VAR_0);
}
