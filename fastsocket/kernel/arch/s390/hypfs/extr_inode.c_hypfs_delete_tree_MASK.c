
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct dentry* d_fsdata; } ;


 struct dentry* VAR_0 ;
 int FUNC_0 (struct dentry*) ;

__attribute__((used)) static void FUNC_1(struct dentry *VAR_1)
{
 while (VAR_0) {
  struct dentry *VAR_2;
  VAR_2 = VAR_0->d_fsdata;
  FUNC_0(VAR_0);
  VAR_0 = VAR_2;
 }
}
