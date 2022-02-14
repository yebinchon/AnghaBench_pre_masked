
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_3__* i_sb; int i_mode; } ;
struct TYPE_6__ {TYPE_2__* s_export_op; TYPE_1__* s_type; } ;
struct TYPE_5__ {int fh_to_dentry; } ;
struct TYPE_4__ {int fs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_6, int *VAR_7, unsigned char *VAR_8)
{





 if (!FUNC_0(VAR_6->i_mode) &&
     !FUNC_1(VAR_6->i_mode) &&
     !FUNC_2(VAR_6->i_mode))
  return -VAR_1;





 if (*VAR_7 & VAR_5)
  *VAR_7 |= VAR_4;
 if (!(VAR_6->i_sb->s_type->fs_flags & VAR_2) &&
     !(*VAR_7 & VAR_3) &&
     VAR_8 == ((void*)0)) {
  FUNC_3("exp_export: export of non-dev fs without fsid\n");
  return -VAR_0;
 }

 if (!VAR_6->i_sb->s_export_op ||
     !VAR_6->i_sb->s_export_op->fh_to_dentry) {
  FUNC_3("exp_export: export of invalid fs type.\n");
  return -VAR_0;
 }

 return 0;

}
