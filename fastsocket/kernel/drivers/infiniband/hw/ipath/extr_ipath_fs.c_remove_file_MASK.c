
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; scalar_t__ d_inode; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (char*,struct dentry*,int ) ;
 int FUNC_6 (scalar_t__,struct dentry*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_1, char *VAR_2)
{
 struct dentry *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_2, VAR_1, FUNC_9(VAR_2));

 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto bail;
 }

 FUNC_7(&VAR_0);
 FUNC_7(&VAR_3->d_lock);
 if (!(FUNC_3(VAR_3) && VAR_3->d_inode)) {
  FUNC_4(VAR_3);
  FUNC_2(VAR_3);
  FUNC_8(&VAR_3->d_lock);
  FUNC_8(&VAR_0);
  FUNC_6(VAR_1->d_inode, VAR_3);
 } else {
  FUNC_8(&VAR_3->d_lock);
  FUNC_8(&VAR_0);
 }

 VAR_4 = 0;
bail:




 return VAR_4;
}
