
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; scalar_t__ i_nlink; int * i_fop; int * i_op; int i_ino; } ;
struct TYPE_2__ {int name; scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,struct inode*,struct dentry*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (char*,int ,int,int ,int) ;

int
FUNC_6(struct inode *VAR_5, struct dentry *VAR_6, int VAR_7)
{
 struct inode *VAR_8;
 int VAR_9;

 FUNC_5("AFFS: mkdir(%lu,\"%.*s\",0%o)\n",VAR_5->i_ino,
   (int)VAR_6->d_name.len,VAR_6->d_name.name,VAR_7);

 VAR_8 = FUNC_1(VAR_5);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->i_mode = VAR_2 | VAR_7;
 FUNC_4(VAR_8);

 VAR_8->i_op = &VAR_3;
 VAR_8->i_fop = &VAR_4;

 VAR_9 = FUNC_0(VAR_5, VAR_8, VAR_6, VAR_1);
 if (VAR_9) {
  VAR_8->i_nlink = 0;
  FUNC_3(VAR_8);
  FUNC_2(VAR_8);
  return VAR_9;
 }
 return 0;
}
