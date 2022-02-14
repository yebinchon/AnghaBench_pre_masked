
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_2__* d_inode; TYPE_1__ d_name; } ;
struct TYPE_4__ {scalar_t__ i_nlink; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,char const*,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct dentry *VAR_1)
{
 const char *VAR_2 = VAR_1->d_name.name;
 int VAR_3 = VAR_1->d_name.len;
 int VAR_4;

 FUNC_3();

 VAR_4 = FUNC_5(VAR_0->i_sb, FUNC_2(VAR_0), VAR_2, VAR_3);
 if (!VAR_4) {

  if (VAR_1->d_inode)
      VAR_1->d_inode->i_nlink = 0;


  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
 }
 FUNC_4();
 return VAR_4;
}
