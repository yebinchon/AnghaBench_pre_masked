
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int i_mutex; int i_sb; } ;
struct TYPE_7__ {scalar_t__ len; int name; } ;
struct dentry {int d_flags; scalar_t__ d_inode; int * d_op; TYPE_1__ d_name; } ;
struct autofs_sb_info {int catatonic; } ;
typedef int sigset_t ;
struct TYPE_8__ {int signal; } ;
struct TYPE_9__ {TYPE_2__ pending; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct autofs_sb_info*) ;
 int FUNC_3 (struct dentry*,struct nameidata*) ;
 int FUNC_4 (int ,scalar_t__) ;
 struct autofs_sb_info* FUNC_5 (int ) ;
 TYPE_3__* VAR_9 ;
 int FUNC_6 (struct dentry*,int *) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 () ;

__attribute__((used)) static struct dentry *FUNC_16(struct inode *VAR_10, struct dentry *VAR_11, struct nameidata *VAR_12)
{
 struct autofs_sb_info *VAR_13;
 int VAR_14;

 FUNC_0(("autofs_root_lookup: name = "));
 FUNC_8();
 FUNC_4(VAR_11->d_name.name,VAR_11->d_name.len);

 if (VAR_11->d_name.len > VAR_4) {
  FUNC_15();
  return FUNC_1(-VAR_1);
 }

 VAR_13 = FUNC_5(VAR_10->i_sb);

 VAR_14 = FUNC_2(VAR_13);
 FUNC_0(("autofs_lookup: pid = %u, pgrp = %u, catatonic = %d, "
    "oz_mode = %d\n", FUNC_14(VAR_9),
    FUNC_13(VAR_9), VAR_13->catatonic,
    VAR_14));
 VAR_11->d_op = &VAR_8;
 VAR_11->d_flags |= VAR_0;
 FUNC_6(VAR_11, ((void*)0));

 FUNC_10(&VAR_10->i_mutex);
 FUNC_3(VAR_11, VAR_12);
 FUNC_9(&VAR_10->i_mutex);





 if (VAR_11->d_flags & VAR_0) {

  if (FUNC_12(VAR_9)) {
   sigset_t *VAR_15 = &VAR_9->pending.signal;
   if (FUNC_11 (VAR_15, VAR_6) ||
       FUNC_11 (VAR_15, VAR_7) ||
       FUNC_11 (VAR_15, VAR_5)) {
    FUNC_15();
    return FUNC_1(-VAR_3);
   }
  }
 }
 FUNC_15();







 if (VAR_11->d_inode && FUNC_7(VAR_11))
  return FUNC_1(-VAR_2);

 return ((void*)0);
}
