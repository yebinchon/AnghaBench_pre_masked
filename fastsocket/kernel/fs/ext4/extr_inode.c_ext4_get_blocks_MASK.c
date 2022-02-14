
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct buffer_head {int b_blocknr; } ;
typedef scalar_t__ sector_t ;
typedef int handle_t ;
struct TYPE_2__ {int i_delalloc_reserved_flag; int i_data_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*,char*,scalar_t__,int ,int) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*,int,int) ;
 int FUNC_10 (int *,struct inode*,scalar_t__,unsigned int,struct buffer_head*,int) ;
 int FUNC_11 (int *,struct inode*,scalar_t__,unsigned int,struct buffer_head*,int) ;
 scalar_t__ FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (char*,int ,int,unsigned int,unsigned long) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(handle_t *VAR_4, struct inode *VAR_5, sector_t VAR_6,
      unsigned int VAR_7, struct buffer_head *VAR_8,
      int VAR_9)
{
 int VAR_10;

 FUNC_4(VAR_8);
 FUNC_5(VAR_8);

 FUNC_13("ext4_get_blocks(): inode %lu, flag %d, max_blocks %u,"
    "logical block %lu\n", VAR_5->i_ino, VAR_9, VAR_7,
    (unsigned long)VAR_6);




 FUNC_6((&FUNC_0(VAR_5)->i_data_sem));
 if (FUNC_12(VAR_5, VAR_2)) {
  VAR_10 = FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7,
    VAR_8, 0);
 } else {
  VAR_10 = FUNC_11(VAR_4, VAR_5, VAR_6, VAR_7,
          VAR_8, 0);
 }
 FUNC_14((&FUNC_0(VAR_5)->i_data_sem));

 if (VAR_10 > 0 && FUNC_1(VAR_8)) {
  int VAR_11 = FUNC_3(VAR_5, "file system corruption",
            VAR_6, VAR_8->b_blocknr, VAR_10);
  if (VAR_11 != 0)
   return VAR_11;
 }


 if ((VAR_9 & VAR_0) == 0)
  return VAR_10;
 if (VAR_10 > 0 && FUNC_1(VAR_8))
  return VAR_10;
 FUNC_5(VAR_8);







 FUNC_7((&FUNC_0(VAR_5)->i_data_sem));







 if (VAR_9 & VAR_1)
  FUNC_0(VAR_5)->i_delalloc_reserved_flag = 1;




 if (FUNC_12(VAR_5, VAR_2)) {
  VAR_10 = FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7,
           VAR_8, VAR_9);
 } else {
  VAR_10 = FUNC_11(VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8, VAR_9);

  if (VAR_10 > 0 && FUNC_2(VAR_8)) {





   FUNC_8(VAR_5, VAR_3);
  }







  if ((VAR_10 > 0) &&
   (VAR_9 & VAR_1))
   FUNC_9(VAR_5, VAR_10, 1);
 }
 if (VAR_9 & VAR_1)
  FUNC_0(VAR_5)->i_delalloc_reserved_flag = 0;

 FUNC_15((&FUNC_0(VAR_5)->i_data_sem));
 if (VAR_10 > 0 && FUNC_1(VAR_8)) {
  int VAR_12 = FUNC_3(VAR_5, "file system "
            "corruption after allocation",
            VAR_6, VAR_8->b_blocknr, VAR_10);
  if (VAR_12 != 0)
   return VAR_12;
 }
 return VAR_10;
}
