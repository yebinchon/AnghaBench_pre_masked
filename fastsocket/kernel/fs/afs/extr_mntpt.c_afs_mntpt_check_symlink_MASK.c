
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct key {int dummy; } ;
struct file {struct key* private_data; } ;
struct TYPE_5__ {size_t size; } ;
struct TYPE_4__ {int unique; int vnode; int vid; } ;
struct afs_vnode {int lock; int flags; TYPE_2__ status; TYPE_1__ fid; } ;
struct TYPE_6__ {int i_mapping; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct afs_vnode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (char*,int) ;
 char* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 struct page* FUNC_10 (int ,int ,struct file*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct afs_vnode *VAR_2, struct key *VAR_3)
{
 struct file VAR_4 = {
  .private_data = VAR_3,
 };
 struct page *VAR_5;
 size_t VAR_6;
 char *VAR_7;
 int VAR_8;

 FUNC_5("{%x:%u,%u}",
        VAR_2->fid.vid, VAR_2->fid.vnode, VAR_2->fid.unique);


 VAR_5 = FUNC_10(FUNC_0(VAR_2)->i_mapping, 0, &VAR_4);
 if (FUNC_1(VAR_5)) {
  VAR_8 = FUNC_2(VAR_5);
  goto out;
 }

 VAR_8 = -VAR_1;
 if (FUNC_3(VAR_5))
  goto out_free;

 VAR_7 = FUNC_7(VAR_5);


 VAR_6 = VAR_2->status.size;
 FUNC_4("symlink to %*.*s", (int) VAR_6, (int) VAR_6, VAR_7);

 if (VAR_6 > 2 &&
     (VAR_7[0] == '%' || VAR_7[0] == '#') &&
     VAR_7[VAR_6 - 1] == '.'
     ) {
  FUNC_4("symlink is a mountpoint");
  FUNC_12(&VAR_2->lock);
  FUNC_11(VAR_0, &VAR_2->flags);
  FUNC_13(&VAR_2->lock);
 }

 VAR_8 = 0;

 FUNC_8(VAR_5);
out_free:
 FUNC_9(VAR_5);
out:
 FUNC_6(" = %d", VAR_8);
 return VAR_8;
}
