
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int len; char* name; } ;
struct pohmelfs_sb {int dummy; } ;
struct TYPE_2__ {int i_sb; } ;
struct pohmelfs_inode {int ino; TYPE_1__ vfs_inode; } ;
struct netfs_trans {int dummy; } ;
struct netfs_cmd {int ext; int size; int start; int id; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pohmelfs_sb* FUNC_0 (int ) ;
 int FUNC_1 (struct netfs_cmd*) ;
 struct netfs_trans* FUNC_2 (struct pohmelfs_sb*,int,int ,int ) ;
 struct netfs_cmd* FUNC_3 (struct netfs_trans*) ;
 int FUNC_4 (struct netfs_trans*,struct pohmelfs_sb*) ;
 int FUNC_5 (struct netfs_trans*) ;
 int FUNC_6 (struct netfs_cmd*,struct netfs_trans*,int) ;
 int FUNC_7 (struct pohmelfs_inode*,char*,int) ;
 int FUNC_8 (struct pohmelfs_inode*) ;
 int FUNC_9 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_10(struct pohmelfs_inode *VAR_3, struct pohmelfs_inode *VAR_4,
  struct qstr *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0, VAR_9, VAR_10;
 char *VAR_11;
 struct netfs_trans *VAR_12;
 struct netfs_cmd *VAR_13;
 struct pohmelfs_sb *VAR_14 = FUNC_0(VAR_3->vfs_inode.i_sb);

 VAR_10 = FUNC_8(VAR_4);
 VAR_9 = FUNC_8(VAR_3);

 if (VAR_10 < 0 || VAR_9 < 0)
  return -VAR_0;

 VAR_6 = VAR_10 + VAR_9 + VAR_5->len + 3;

 VAR_12 = FUNC_2(VAR_14, VAR_6, 0, 0);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_3(VAR_12);
 VAR_11 = (char *)(VAR_13 + 1);

 VAR_7 = FUNC_7(VAR_3, VAR_11, VAR_9);
 if (VAR_7 < 0)
  goto err_out_unlock;

 VAR_13->ext = VAR_7;

 VAR_11 += VAR_7;
 VAR_8 += VAR_7;
 VAR_6 -= VAR_7;

 *VAR_11 = '|';
 VAR_11++;
 VAR_8++;
 VAR_6--;

 VAR_7 = FUNC_7(VAR_4, VAR_11, VAR_10);
 if (VAR_7 < 0)
  goto err_out_unlock;




 VAR_7--;
 VAR_11 += VAR_7;
 VAR_8 += VAR_7;
 VAR_6 -= VAR_7;

 VAR_7 = FUNC_9(VAR_11, VAR_6 - 1, "/%s", VAR_5->name);

 VAR_8 += VAR_7 + 1;
 VAR_6 -= VAR_7 + 1;

 VAR_13->cmd = VAR_2;
 VAR_13->id = VAR_3->ino;
 VAR_13->start = VAR_4->ino;
 VAR_13->size = VAR_8;

 FUNC_1(VAR_13);

 FUNC_6(VAR_13, VAR_12, VAR_8);

 return FUNC_4(VAR_12, VAR_14);

err_out_unlock:
 FUNC_5(VAR_12);
 return VAR_7;
}
