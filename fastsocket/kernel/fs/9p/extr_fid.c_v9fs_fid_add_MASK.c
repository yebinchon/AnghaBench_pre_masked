
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_dentry {int lock; int fidlist; } ;
struct p9_fid {int dlist; int fid; } ;
struct TYPE_2__ {int name; } ;
struct dentry {struct v9fs_dentry* d_fsdata; TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct v9fs_dentry* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct dentry *VAR_3, struct p9_fid *VAR_4)
{
 struct v9fs_dentry *VAR_5;

 FUNC_1(VAR_2, "fid %d dentry %s\n",
     VAR_4->fid, VAR_3->d_name.name);

 VAR_5 = VAR_3->d_fsdata;
 if (!VAR_5) {
  VAR_5 = FUNC_2(sizeof(struct v9fs_dentry), VAR_1);
  if (!VAR_5)
   return -VAR_0;

  FUNC_5(&VAR_5->lock);
  FUNC_0(&VAR_5->fidlist);
  VAR_3->d_fsdata = VAR_5;
 }

 FUNC_4(&VAR_5->lock);
 FUNC_3(&VAR_4->dlist, &VAR_5->fidlist);
 FUNC_6(&VAR_5->lock);

 return 0;
}
