
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int * d_op; int d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static struct dentry *FUNC_3(struct dentry *VAR_2)
{
 struct dentry *VAR_3;

 VAR_3 = FUNC_1(FUNC_2(VAR_2->d_inode, &VAR_1, 1));
 if (!FUNC_0(VAR_3))
  VAR_3->d_op = &VAR_0;
 return VAR_3;
}
