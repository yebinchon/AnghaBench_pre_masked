
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int * d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;

__attribute__((used)) static void FUNC_2(struct dentry *VAR_0)
{
 if (VAR_0->d_inode != ((void*)0) && !FUNC_1(VAR_0))
  FUNC_0(VAR_0);
}
