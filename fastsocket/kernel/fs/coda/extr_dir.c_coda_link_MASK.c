
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_count; int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int ,char const*,int) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_1, struct inode *VAR_2,
   struct dentry *VAR_3)
{
 struct inode *VAR_4 = VAR_1->d_inode;
        const char * VAR_5 = VAR_3->d_name.name;
 int VAR_6 = VAR_3->d_name.len;
 int VAR_7;

 FUNC_8();

 if (FUNC_4(VAR_2) && FUNC_3(VAR_5, VAR_6)) {
  FUNC_9();
  return -VAR_0;
 }

 VAR_7 = FUNC_10(VAR_2->i_sb, FUNC_2(VAR_4),
      FUNC_2(VAR_2), (const char *)VAR_5, VAR_6);

 if (VAR_7) {
  FUNC_5(VAR_3);
  goto out;
 }

 FUNC_1(VAR_2);
 FUNC_0(&VAR_4->i_count);
 FUNC_6(VAR_3, VAR_4);
 FUNC_7(VAR_4);

out:
 FUNC_9();
 return(VAR_7);
}
