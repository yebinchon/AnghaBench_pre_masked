
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_bdev; } ;
struct jfs_sb_info {struct jfs_log* log; int log_list; } ;
struct jfs_log {struct block_device* bdev; int journal_list; scalar_t__ no_integrity; int sb_list; int flag; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct jfs_log*) ;
 int FUNC_2 (struct jfs_log*) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct block_device*,int) ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;
 int FUNC_6 (struct jfs_log*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct jfs_log*,struct jfs_sb_info*,int ) ;
 int FUNC_10 (struct jfs_log*) ;
 int VAR_3 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int *) ;

int FUNC_15(struct super_block *VAR_4)
{
 struct jfs_sb_info *VAR_5 = FUNC_0(VAR_4);
 struct jfs_log *VAR_6 = VAR_5->log;
 struct block_device *VAR_7;
 int VAR_8 = 0;

 FUNC_5("lmLogClose: log:0x%p", VAR_6);

 FUNC_11(&VAR_2);
 FUNC_1(VAR_6);
 FUNC_7(&VAR_5->log_list);
 FUNC_2(VAR_6);
 VAR_5->log = ((void*)0);





 FUNC_13(VAR_4->s_bdev);

 if (FUNC_14(VAR_3, &VAR_6->flag)) {



  VAR_8 = FUNC_10(VAR_6);
  FUNC_6(VAR_6);
  goto out;
 }

 if (!VAR_6->no_integrity)
  FUNC_9(VAR_6, VAR_5, 0);

 if (!FUNC_8(&VAR_6->sb_list))
  goto out;
 if (VAR_6->no_integrity)
  goto out;




 FUNC_7(&VAR_6->journal_list);
 VAR_7 = VAR_6->bdev;
 VAR_8 = FUNC_10(VAR_6);

 FUNC_3(VAR_7);
 FUNC_4(VAR_7, VAR_0|VAR_1);

 FUNC_6(VAR_6);

      out:
 FUNC_12(&VAR_2);
 FUNC_5("lmLogClose: exit(%d)", VAR_8);
 return VAR_8;
}
