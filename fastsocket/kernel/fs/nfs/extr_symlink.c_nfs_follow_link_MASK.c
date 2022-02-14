
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void page ;
struct nameidata {int dummy; } ;
struct inode {int i_data; int i_mapping; } ;
struct dentry {struct inode* d_inode; } ;
typedef int filler_t ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (struct nameidata*,void*) ;
 int FUNC_4 (struct inode*,int ) ;
 scalar_t__ VAR_0 ;
 void* FUNC_5 (int *,int ,int *,struct inode*) ;

__attribute__((used)) static void *FUNC_6(struct dentry *VAR_1, struct nameidata *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 struct page *VAR_4;
 void *VAR_5;

 VAR_5 = FUNC_0(FUNC_4(VAR_3, VAR_3->i_mapping));
 if (VAR_5)
  goto read_failed;
 VAR_4 = FUNC_5(&VAR_3->i_data, 0,
    (filler_t *)VAR_0, VAR_3);
 if (FUNC_1(VAR_4)) {
  VAR_5 = VAR_4;
  goto read_failed;
 }
 FUNC_3(VAR_2, FUNC_2(VAR_4));
 return VAR_4;

read_failed:
 FUNC_3(VAR_2, VAR_5);
 return ((void*)0);
}
