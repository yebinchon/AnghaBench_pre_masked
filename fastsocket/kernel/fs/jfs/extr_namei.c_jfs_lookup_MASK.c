
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; scalar_t__ i_ino; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {int * d_op; TYPE_1__ d_name; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef scalar_t__ ino_t ;
struct TYPE_4__ {int mntflag; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,int *) ;
 struct dentry* FUNC_6 (struct inode*,struct dentry*) ;
 int FUNC_7 (struct inode*,struct component_name*,scalar_t__*,struct btstack*,int ) ;
 int FUNC_8 (struct component_name*) ;
 int FUNC_9 (struct component_name*,struct dentry*) ;
 int VAR_3 ;
 int FUNC_10 (char*,int) ;
 struct inode* FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (char*,char const*) ;
 scalar_t__ FUNC_13 (char const*,char*) ;

__attribute__((used)) static struct dentry *FUNC_14(struct inode *VAR_4, struct dentry *VAR_5, struct nameidata *VAR_6)
{
 struct btstack VAR_7;
 ino_t VAR_8;
 struct inode *VAR_9;
 struct component_name VAR_10;
 const char *VAR_11 = VAR_5->d_name.name;
 int VAR_12 = VAR_5->d_name.len;
 int VAR_13;

 FUNC_12("jfs_lookup: name = %s", VAR_11);

 if (FUNC_3(VAR_4->i_sb)->mntflag & VAR_2)
  VAR_5->d_op = &VAR_3;

 if ((VAR_11[0] == '.') && (VAR_12 == 1))
  VAR_8 = VAR_4->i_ino;
 else if (FUNC_13(VAR_11, "..") == 0)
  VAR_8 = FUNC_4(VAR_4);
 else {
  if ((VAR_13 = FUNC_9(&VAR_10, VAR_5)))
   return FUNC_1(VAR_13);
  VAR_13 = FUNC_7(VAR_4, &VAR_10, &VAR_8, &VAR_7, VAR_1);
  FUNC_8(&VAR_10);
  if (VAR_13 == -VAR_0) {
   FUNC_5(VAR_5, ((void*)0));
   return ((void*)0);
  } else if (VAR_13) {
   FUNC_10("jfs_lookup: dtSearch returned %d", VAR_13);
   return FUNC_1(VAR_13);
  }
 }

 VAR_9 = FUNC_11(VAR_4->i_sb, VAR_8);
 if (FUNC_2(VAR_9)) {
  FUNC_10("jfs_lookup: iget failed on inum %d", (uint) VAR_8);
  return FUNC_0(VAR_9);
 }

 VAR_5 = FUNC_6(VAR_9, VAR_5);

 if (VAR_5 && (FUNC_3(VAR_4->i_sb)->mntflag & VAR_2))
  VAR_5->d_op = &VAR_3;

 return VAR_5;
}
