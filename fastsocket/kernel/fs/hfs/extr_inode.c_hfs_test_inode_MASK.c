
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct hfs_iget_data {TYPE_3__* rec; } ;
struct TYPE_5__ {int FlNum; } ;
struct TYPE_4__ {int DirID; } ;
struct TYPE_6__ {int type; TYPE_2__ file; TYPE_1__ dir; } ;
typedef TYPE_3__ hfs_cat_rec ;


 int FUNC_0 () ;


 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, void *VAR_1)
{
 struct hfs_iget_data *VAR_2 = VAR_1;
 hfs_cat_rec *VAR_3;

 VAR_3 = VAR_2->rec;
 switch (VAR_3->type) {
 case 129:
  return VAR_0->i_ino == FUNC_1(VAR_3->dir.DirID);
 case 128:
  return VAR_0->i_ino == FUNC_1(VAR_3->file.FlNum);
 default:
  FUNC_0();
  return 1;
 }
}
