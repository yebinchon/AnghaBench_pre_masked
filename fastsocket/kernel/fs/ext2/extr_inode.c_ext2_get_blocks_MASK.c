
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct ext2_inode_info {int truncate_mutex; int i_block_alloc_info; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
typedef scalar_t__ ext2_fsblk_t ;
struct TYPE_10__ {int bh; int key; int * p; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext2_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*,int,int*,scalar_t__,int*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,unsigned long,int) ;
 int FUNC_6 (struct inode*,int ,int*,int*) ;
 int FUNC_7 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct inode*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_9 (struct inode*,int,int*,TYPE_1__*,int*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,int ,TYPE_1__*,int,int) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct buffer_head*,int ,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_2,
      sector_t VAR_3, unsigned long VAR_4,
      struct buffer_head *VAR_5,
      int VAR_6)
{
 int VAR_7 = -VAR_1;
 int VAR_8[4];
 Indirect VAR_9[4];
 Indirect *VAR_10;
 ext2_fsblk_t VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 struct ext2_inode_info *VAR_15 = FUNC_0(VAR_2);
 int VAR_16 = 0;
 ext2_fsblk_t VAR_17 = 0;

 VAR_14 = FUNC_6(VAR_2,VAR_3,VAR_8,&VAR_13);

 if (VAR_14 == 0)
  return (VAR_7);

 VAR_10 = FUNC_9(VAR_2, VAR_14, VAR_8, VAR_9, &VAR_7);

 if (!VAR_10) {
  VAR_17 = FUNC_13(VAR_9[VAR_14 - 1].key);
  FUNC_3(VAR_5);
  VAR_16++;

  while (VAR_16 < VAR_4 && VAR_16 <= VAR_13) {
   ext2_fsblk_t VAR_18;

   if (!FUNC_19(VAR_9, VAR_9 + VAR_14 - 1)) {






    VAR_7 = -VAR_0;
    VAR_16 = 0;
    break;
   }
   VAR_18 = FUNC_13(*(VAR_9[VAR_14-1].p + VAR_16));
   if (VAR_18 == VAR_17 + VAR_16)
    VAR_16++;
   else
    break;
  }
  if (VAR_7 != -VAR_0)
   goto got_it;
 }


 if (!VAR_6 || VAR_7 == -VAR_1)
  goto cleanup;

 FUNC_15(&VAR_15->truncate_mutex);
 if (VAR_7 == -VAR_0 || !FUNC_19(VAR_9, VAR_10)) {
  while (VAR_10 > VAR_9) {
   FUNC_2(VAR_10->bh);
   VAR_10--;
  }
  VAR_10 = FUNC_9(VAR_2, VAR_14, VAR_8, VAR_9, &VAR_7);
  if (!VAR_10) {
   VAR_16++;
   FUNC_16(&VAR_15->truncate_mutex);
   if (VAR_7)
    goto cleanup;
   FUNC_3(VAR_5);
   goto got_it;
  }
 }





 if (FUNC_1(VAR_2->i_mode) && (!VAR_15->i_block_alloc_info))
  FUNC_10(VAR_2);

 VAR_11 = FUNC_8(VAR_2, VAR_3, VAR_10);


 VAR_12 = (VAR_9 + VAR_14) - VAR_10 - 1;




 VAR_16 = FUNC_5(VAR_10, VAR_12,
     VAR_4, VAR_13);



 VAR_7 = FUNC_4(VAR_2, VAR_12, &VAR_16, VAR_11,
    VAR_8 + (VAR_10 - VAR_9), VAR_10);

 if (VAR_7) {
  FUNC_16(&VAR_15->truncate_mutex);
  goto cleanup;
 }

 if (FUNC_12(VAR_2->i_sb)) {



  VAR_7 = FUNC_7 (VAR_2,
   FUNC_13(VAR_9[VAR_14-1].key));
  if (VAR_7) {
   FUNC_16(&VAR_15->truncate_mutex);
   goto cleanup;
  }
 }

 FUNC_11(VAR_2, VAR_3, VAR_10, VAR_12, VAR_16);
 FUNC_16(&VAR_15->truncate_mutex);
 FUNC_18(VAR_5);
got_it:
 FUNC_14(VAR_5, VAR_2->i_sb, FUNC_13(VAR_9[VAR_14-1].key));
 if (VAR_16 > VAR_13)
  FUNC_17(VAR_5);
 VAR_7 = VAR_16;

 VAR_10 = VAR_9 + VAR_14 - 1;
cleanup:
 while (VAR_10 > VAR_9) {
  FUNC_2(VAR_10->bh);
  VAR_10--;
 }
 return VAR_7;
}
