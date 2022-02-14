
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct TYPE_5__ {int ar_quota; } ;
struct gfs2_sbd {TYPE_4__* sd_quota_inode; TYPE_1__ sd_args; } ;
struct TYPE_6__ {int qfs_nextents; int qfs_nblks; int qfs_ino; } ;
struct fs_quota_stat {int qs_flags; int qs_incoredqs; TYPE_2__ qs_uquota; TYPE_2__ qs_gquota; int qs_version; } ;
struct TYPE_8__ {int i_blocks; } ;
struct TYPE_7__ {int i_no_addr; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_4__*) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fs_quota_stat*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_6,
     struct fs_quota_stat *VAR_7)
{
 struct gfs2_sbd *VAR_8 = VAR_6->s_fs_info;

 FUNC_2(VAR_7, 0, sizeof(struct fs_quota_stat));
 VAR_7->qs_version = VAR_0;

 switch (VAR_8->sd_args.ar_quota) {
 case 128:
  VAR_7->qs_flags |= (VAR_4 | VAR_2);

 case 130:
  VAR_7->qs_flags |= (VAR_3 | VAR_1);
  break;
 case 129:
  break;
 }

 if (VAR_8->sd_quota_inode) {
  VAR_7->qs_uquota.qfs_ino = FUNC_0(VAR_8->sd_quota_inode)->i_no_addr;
  VAR_7->qs_uquota.qfs_nblks = VAR_8->sd_quota_inode->i_blocks;
 }
 VAR_7->qs_uquota.qfs_nextents = 1;
 VAR_7->qs_gquota = VAR_7->qs_uquota;
 VAR_7->qs_incoredqs = FUNC_1(&VAR_5);
 return 0;
}
