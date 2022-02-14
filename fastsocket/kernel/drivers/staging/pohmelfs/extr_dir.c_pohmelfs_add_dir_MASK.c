
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char* name; int hash; scalar_t__ len; } ;
struct pohmelfs_sb {int dummy; } ;
struct pohmelfs_name {unsigned int mode; int data; int hash; scalar_t__ len; int ino; } ;
struct pohmelfs_inode {int offset_lock; int ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pohmelfs_name*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pohmelfs_inode*,struct pohmelfs_name*) ;
 struct pohmelfs_name* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct pohmelfs_sb *VAR_2, struct pohmelfs_inode *VAR_3,
  struct pohmelfs_inode *VAR_4, struct qstr *VAR_5, unsigned int VAR_6, int VAR_7)
{
 int VAR_8 = -VAR_1;
 struct pohmelfs_name *VAR_9;

 VAR_9 = FUNC_4(VAR_5->len + 1);
 if (!VAR_9)
  goto err_out_exit;

 VAR_9->ino = VAR_4->ino;
 VAR_9->mode = VAR_6;
 VAR_9->len = VAR_5->len;
 VAR_9->hash = VAR_5->hash;
 FUNC_5(VAR_9->data, "%s", VAR_5->name);

 FUNC_1(&VAR_3->offset_lock);
 VAR_8 = FUNC_3(VAR_3, VAR_9);
 FUNC_2(&VAR_3->offset_lock);

 if (VAR_8) {
  if (VAR_8 != -VAR_0)
   goto err_out_free;
  FUNC_0(VAR_9);
 }

 return 0;

err_out_free:
 FUNC_0(VAR_9);
err_out_exit:
 return VAR_8;
}
