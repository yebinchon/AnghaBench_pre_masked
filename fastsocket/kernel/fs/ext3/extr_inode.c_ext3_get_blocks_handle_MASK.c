
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct ext3_inode_info {int truncate_mutex; int i_block_alloc_info; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
typedef int handle_t ;
typedef scalar_t__ ext3_fsblk_t ;
struct TYPE_10__ {int key; struct buffer_head* bh; int * p; } ;
typedef TYPE_1__ Indirect ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ext3_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *,struct inode*,int,int*,scalar_t__,int*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,unsigned long,int) ;
 int FUNC_8 (struct inode*,int ,int*,int*) ;
 scalar_t__ FUNC_9 (struct inode*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_10 (struct inode*,int,int*,TYPE_1__*,int*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *,struct inode*,int ,TYPE_1__*,int,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct buffer_head*,int ,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (struct inode*,int ,unsigned long,int) ;
 int FUNC_20 (struct inode*,int ,scalar_t__,int,int) ;
 int FUNC_21 (TYPE_1__*,TYPE_1__*) ;

int FUNC_22(handle_t *VAR_2, struct inode *VAR_3,
  sector_t VAR_4, unsigned long VAR_5,
  struct buffer_head *VAR_6,
  int VAR_7)
{
 int VAR_8 = -VAR_1;
 int VAR_9[4];
 Indirect VAR_10[4];
 Indirect *VAR_11;
 ext3_fsblk_t VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 struct ext3_inode_info *VAR_16 = FUNC_1(VAR_3);
 int VAR_17 = 0;
 ext3_fsblk_t VAR_18 = 0;


 FUNC_19(VAR_3, VAR_4, VAR_5, VAR_7);
 FUNC_2(VAR_2 != ((void*)0) || VAR_7 == 0);
 VAR_15 = FUNC_8(VAR_3,VAR_4,VAR_9,&VAR_14);

 if (VAR_15 == 0)
  goto out;

 VAR_11 = FUNC_10(VAR_3, VAR_15, VAR_9, VAR_10, &VAR_8);


 if (!VAR_11) {
  VAR_18 = FUNC_13(VAR_10[VAR_15 - 1].key);
  FUNC_5(VAR_6);
  VAR_17++;

  while (VAR_17 < VAR_5 && VAR_17 <= VAR_14) {
   ext3_fsblk_t VAR_19;

   if (!FUNC_21(VAR_10, VAR_10 + VAR_15 - 1)) {







    VAR_8 = -VAR_0;
    VAR_17 = 0;
    break;
   }
   VAR_19 = FUNC_13(*(VAR_10[VAR_15-1].p + VAR_17));

   if (VAR_19 == VAR_18 + VAR_17)
    VAR_17++;
   else
    break;
  }
  if (VAR_8 != -VAR_0)
   goto got_it;
 }


 if (!VAR_7 || VAR_8 == -VAR_1)
  goto cleanup;

 FUNC_15(&VAR_16->truncate_mutex);
 if (VAR_8 == -VAR_0 || !FUNC_21(VAR_10, VAR_11)) {
  while (VAR_11 > VAR_10) {
   FUNC_4(VAR_11->bh);
   VAR_11--;
  }
  VAR_11 = FUNC_10(VAR_3, VAR_15, VAR_9, VAR_10, &VAR_8);
  if (!VAR_11) {
   VAR_17++;
   FUNC_16(&VAR_16->truncate_mutex);
   if (VAR_8)
    goto cleanup;
   FUNC_5(VAR_6);
   goto got_it;
  }
 }





 if (FUNC_3(VAR_3->i_mode) && (!VAR_16->i_block_alloc_info))
  FUNC_11(VAR_3);

 VAR_12 = FUNC_9(VAR_3, VAR_4, VAR_11);


 VAR_13 = (VAR_10 + VAR_15) - VAR_11 - 1;





 VAR_17 = FUNC_7(VAR_11, VAR_13,
     VAR_5, VAR_14);



 VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_13, &VAR_17, VAR_12,
    VAR_9 + (VAR_11 - VAR_10), VAR_11);
 if (!VAR_8)
  VAR_8 = FUNC_12(VAR_2, VAR_3, VAR_4,
     VAR_11, VAR_13, VAR_17);
 FUNC_16(&VAR_16->truncate_mutex);
 if (VAR_8)
  goto cleanup;

 FUNC_18(VAR_6);
got_it:
 FUNC_14(VAR_6, VAR_3->i_sb, FUNC_13(VAR_10[VAR_15-1].key));
 if (VAR_17 > VAR_14)
  FUNC_17(VAR_6);
 VAR_8 = VAR_17;

 VAR_11 = VAR_10 + VAR_15 - 1;
cleanup:
 while (VAR_11 > VAR_10) {
  FUNC_0(VAR_11->bh, "call brelse");
  FUNC_4(VAR_11->bh);
  VAR_11--;
 }
 FUNC_0(VAR_6, "returned");
out:
 FUNC_20(VAR_3, VAR_4,
       VAR_15 ? FUNC_13(VAR_10[VAR_15-1].key) : 0,
       VAR_17, VAR_8);
 return VAR_8;
}
