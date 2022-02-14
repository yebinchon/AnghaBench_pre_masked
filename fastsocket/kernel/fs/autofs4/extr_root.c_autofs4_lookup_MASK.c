
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_4__ {scalar_t__ len; int name; } ;
struct dentry {struct autofs_info* d_fsdata; int d_parent; int * d_op; TYPE_1__ d_name; } ;
struct autofs_sb_info {int type; int catatonic; } ;
struct autofs_info {struct dentry* dentry; } ;
struct TYPE_5__ {int pid; } ;


 int FUNC_0 (char*,scalar_t__,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int VAR_4 ;
 struct autofs_info* FUNC_5 (int *,struct autofs_sb_info*,int) ;
 struct dentry* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_10 (struct dentry*,int *) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static struct dentry *FUNC_12(struct inode *VAR_6, struct dentry *VAR_7, struct nameidata *VAR_8)
{
 struct autofs_sb_info *VAR_9;
 struct autofs_info *VAR_10;
 struct dentry *VAR_11;

 FUNC_0("name = %.*s", VAR_7->d_name.len, VAR_7->d_name.name);


 if (VAR_7->d_name.len > VAR_3)
  return FUNC_1(-VAR_0);

 VAR_9 = FUNC_8(VAR_6->i_sb);

 FUNC_0("pid = %u, pgrp = %u, catatonic = %d",
   VAR_5->pid, FUNC_11(VAR_5), VAR_9->catatonic);

 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11)
  return VAR_11;
 else {
  VAR_7->d_op = &VAR_4;







  if (!FUNC_7(VAR_9) && !FUNC_2(VAR_7->d_parent))
   return FUNC_1(-VAR_1);


  if (FUNC_9(VAR_9->type) && FUNC_2(VAR_7->d_parent))
   FUNC_3(VAR_7);

  VAR_10 = FUNC_5(((void*)0), VAR_9, 0555);
  if (!VAR_10)
   return FUNC_1(-VAR_2);

  VAR_7->d_fsdata = VAR_10;
  VAR_10->dentry = VAR_7;

  FUNC_4(VAR_7);

  FUNC_10(VAR_7, ((void*)0));
 }

 return ((void*)0);
}
