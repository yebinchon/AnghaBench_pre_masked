
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
struct TYPE_5__ {char* name; } ;
struct dentry {TYPE_3__* d_inode; TYPE_2__ d_name; } ;
struct TYPE_6__ {int i_mode; } ;
struct TYPE_4__ {int rename; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct inode*,char const*,char const*,int,TYPE_3__*,struct dentry*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (struct inode*,struct dentry*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_8 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;

int FUNC_9(struct inode *VAR_1, struct dentry *VAR_2,
        struct inode *VAR_3, struct dentry *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_0(VAR_2->d_inode->i_mode);
 const char *VAR_7;

 if (VAR_2->d_inode == VAR_4->d_inode)
   return 0;

 VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_6);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4->d_inode)
  VAR_5 = FUNC_4(VAR_3, VAR_4);
 else
  VAR_5 = FUNC_5(VAR_3, VAR_4, VAR_6);
 if (VAR_5)
  return VAR_5;

 if (!VAR_1->i_op->rename)
  return -VAR_0;

 FUNC_6(VAR_1);
 FUNC_6(VAR_3);

 VAR_7 = FUNC_3(VAR_2->d_name.name);

 if (VAR_6)
  VAR_5 = FUNC_7(VAR_1,VAR_2,VAR_3,VAR_4);
 else
  VAR_5 = FUNC_8(VAR_1,VAR_2,VAR_3,VAR_4);
 if (!VAR_5) {
  const char *VAR_8 = VAR_2->d_name.name;
  FUNC_1(VAR_1, VAR_3, VAR_7, VAR_8, VAR_6,
         VAR_4->d_inode, VAR_2);
 }
 FUNC_2(VAR_7);

 return VAR_5;
}
