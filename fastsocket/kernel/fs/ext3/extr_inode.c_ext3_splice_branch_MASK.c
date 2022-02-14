
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct inode {struct timespec i_ctime; } ;
struct ext3_inode_info {int i_datasync_tid; struct ext3_block_alloc_info* i_block_alloc_info; } ;
struct ext3_block_alloc_info {long last_alloc_logical_block; scalar_t__ last_alloc_physical_block; } ;
struct TYPE_12__ {TYPE_1__* h_transaction; } ;
typedef TYPE_2__ handle_t ;
typedef scalar_t__ ext3_fsblk_t ;
struct TYPE_13__ {int key; scalar_t__ bh; int * p; } ;
struct TYPE_11__ {int t_tid; } ;
typedef TYPE_3__ Indirect ;


 int FUNC_0 (scalar_t__,char*) ;
 struct timespec VAR_0 ;
 struct ext3_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,struct inode*,int ,int) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,struct inode*) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct timespec*,struct timespec*) ;

__attribute__((used)) static int FUNC_12(handle_t *VAR_1, struct inode *VAR_2,
   long VAR_3, Indirect *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 struct ext3_block_alloc_info *VAR_9;
 ext3_fsblk_t VAR_10;
 struct ext3_inode_info *VAR_11 = FUNC_1(VAR_2);
 struct timespec VAR_12;

 VAR_9 = VAR_11->i_block_alloc_info;





 if (VAR_4->bh) {
  FUNC_0(VAR_4->bh, "get_write_access");
  VAR_8 = FUNC_7(VAR_1, VAR_4->bh);
  if (VAR_8)
   goto err_out;
 }


 *VAR_4->p = VAR_4->key;





 if (VAR_5 == 0 && VAR_6 > 1) {
  VAR_10 = FUNC_10(VAR_4->key) + 1;
  for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7++)
   *(VAR_4->p + VAR_7 ) = FUNC_3(VAR_10++);
 }






 if (VAR_9) {
  VAR_9->last_alloc_logical_block = VAR_3 + VAR_6 - 1;
  VAR_9->last_alloc_physical_block =
    FUNC_10(VAR_4[VAR_5].key) + VAR_6 - 1;
 }


 VAR_12 = VAR_0;
 if (!FUNC_11(&VAR_2->i_ctime, &VAR_12) || !VAR_4->bh) {
  VAR_2->i_ctime = VAR_12;
  FUNC_8(VAR_1, VAR_2);
 }

 FUNC_2(&VAR_11->i_datasync_tid, VAR_1->h_transaction->t_tid);


 if (VAR_4->bh) {
  FUNC_9(5, "splicing indirect only\n");
  FUNC_0(VAR_4->bh, "call ext3_journal_dirty_metadata");
  VAR_8 = FUNC_5(VAR_1, VAR_4->bh);
  if (VAR_8)
   goto err_out;
 } else {




  FUNC_9(5, "splicing direct\n");
 }
 return VAR_8;

err_out:
 for (VAR_7 = 1; VAR_7 <= VAR_5; VAR_7++) {
  FUNC_0(VAR_4[VAR_7].bh, "call journal_forget");
  FUNC_6(VAR_1, VAR_4[VAR_7].bh);
  FUNC_4(VAR_1,VAR_2,FUNC_10(VAR_4[VAR_7-1].key),1);
 }
 FUNC_4(VAR_1, VAR_2, FUNC_10(VAR_4[VAR_5].key), VAR_6);

 return VAR_8;
}
