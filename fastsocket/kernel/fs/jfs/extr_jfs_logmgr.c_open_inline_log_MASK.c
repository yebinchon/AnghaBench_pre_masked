
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_blocksize_bits; int s_bdev; } ;
struct jfs_log {scalar_t__ l2bsize; int sb_list; scalar_t__ size; int base; int bdev; int flag; int syncwait; } ;
struct TYPE_2__ {struct jfs_log* log; int log_list; int logpxd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct jfs_log*) ;
 struct jfs_log* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct jfs_log*) ;
 int VAR_3 ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_4)
{
 struct jfs_log *VAR_5;
 int VAR_6;

 if (!(VAR_5 = FUNC_7(sizeof(struct jfs_log), VAR_1)))
  return -VAR_0;
 FUNC_1(&VAR_5->sb_list);
 FUNC_4(&VAR_5->syncwait);

 FUNC_11(VAR_3, &VAR_5->flag);
 VAR_5->bdev = VAR_4->s_bdev;
 VAR_5->base = FUNC_3(&FUNC_2(VAR_4)->logpxd);
 VAR_5->size = FUNC_8(&FUNC_2(VAR_4)->logpxd) >>
     (VAR_2 - VAR_4->s_blocksize_bits);
 VAR_5->l2bsize = VAR_4->s_blocksize_bits;
 FUNC_0(VAR_2 >= VAR_4->s_blocksize_bits);




 if ((VAR_6 = FUNC_10(VAR_5))) {
  FUNC_6(VAR_5);
  FUNC_5("lmLogOpen: exit(%d)", VAR_6);
  return VAR_6;
 }

 FUNC_9(&FUNC_2(VAR_4)->log_list, &VAR_5->sb_list);
 FUNC_2(VAR_4)->log = VAR_5;

 return VAR_6;
}
