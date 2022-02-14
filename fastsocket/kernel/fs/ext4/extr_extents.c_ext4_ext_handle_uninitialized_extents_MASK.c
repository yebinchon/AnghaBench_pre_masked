
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; int i_ino; } ;
struct ext4_ext_path {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_bdev; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;
struct TYPE_5__ {scalar_t__ flag; } ;
typedef TYPE_2__ ext4_io_end_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_6__ {int i_aiodio_unwritten; TYPE_2__* cur_aio_dio; } ;
struct TYPE_4__ {int s_bdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct inode*,scalar_t__,struct ext4_ext_path*,unsigned int) ;
 int FUNC_3 (int *,struct inode*,scalar_t__,unsigned int,struct ext4_ext_path*) ;
 int FUNC_4 (struct inode*,unsigned int,int ) ;
 int FUNC_5 (int *,struct inode*,struct ext4_ext_path*,scalar_t__,unsigned int,int) ;
 int FUNC_6 (struct ext4_ext_path*) ;
 int FUNC_7 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (int *,struct inode*,struct ext4_ext_path*,scalar_t__,unsigned int,int) ;
 int FUNC_10 (int *,struct inode*,int) ;
 int FUNC_11 (char*,int ,unsigned long long,unsigned int,int,unsigned int) ;
 int FUNC_12 (struct ext4_ext_path*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int
FUNC_17(handle_t *VAR_8, struct inode *VAR_9,
   ext4_lblk_t VAR_10, unsigned int VAR_11,
   struct ext4_ext_path *VAR_12, int VAR_13,
   unsigned int VAR_14, struct buffer_head *VAR_15,
   ext4_fsblk_t VAR_16)
{
 int VAR_17 = 0;
 int VAR_18 = 0;
 ext4_io_end_t *VAR_19 = FUNC_0(VAR_9)->cur_aio_dio;

 FUNC_11("ext4_ext_handle_uninitialized_extents: inode %lu, logical"
    "block %llu, max_blocks %u, flags %d, allocated %u",
    VAR_9->i_ino, (unsigned long long)VAR_10, VAR_11,
    VAR_13, VAR_14);
 FUNC_7(VAR_9, VAR_12);





 VAR_13 |= VAR_5;


 if ((VAR_13 & ~VAR_5) ==
     VAR_4) {
  VAR_17 = FUNC_9(VAR_8,
      VAR_9, VAR_12, VAR_10,
      VAR_11, VAR_13);





  if (VAR_19 && (VAR_19->flag != VAR_0)) {
   VAR_19->flag = VAR_0;
   FUNC_1(&FUNC_0(VAR_9)->i_aiodio_unwritten);
  } else
   FUNC_8(VAR_9, VAR_7);
  goto out;
 }

 if ((VAR_13 & ~VAR_5) ==
     VAR_3) {
  VAR_17 = FUNC_3(VAR_8, VAR_9,
        VAR_10, VAR_11,
        VAR_12);
  if (VAR_17 >= 0) {
   FUNC_10(VAR_8, VAR_9, 1);
   VAR_18 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_12,
       VAR_11);
  } else
   VAR_18 = VAR_17;
  goto out2;
 }





 if (VAR_13 & VAR_6)
  goto map_out;


 if ((VAR_13 & VAR_1) == 0) {







  FUNC_15(VAR_15);
  goto out1;
 }


 VAR_17 = FUNC_5(VAR_8, VAR_9,
      VAR_12, VAR_10,
      VAR_11,
      VAR_13);
 if (VAR_17 >= 0) {
  FUNC_10(VAR_8, VAR_9, 1);
  VAR_18 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_12, VAR_11);
  if (VAR_18 < 0)
   goto out2;
 }
out:
 if (VAR_17 <= 0) {
  VAR_18 = VAR_17;
  goto out2;
 } else
  VAR_14 = VAR_17;
 FUNC_14(VAR_15);







 if (VAR_14 > VAR_11) {
  FUNC_16(VAR_9->i_sb->s_bdev,
     VAR_16 + VAR_11,
     VAR_14 - VAR_11);
  VAR_14 = VAR_11;
 }
 if (VAR_13 & VAR_2)
  FUNC_4(VAR_9, VAR_14, 0);

map_out:
 FUNC_13(VAR_15);
out1:
 if (VAR_14 > VAR_11)
  VAR_14 = VAR_11;
 FUNC_7(VAR_9, VAR_12);
 VAR_15->b_bdev = VAR_9->i_sb->s_bdev;
 VAR_15->b_blocknr = VAR_16;
out2:
 if (VAR_12) {
  FUNC_6(VAR_12);
  FUNC_12(VAR_12);
 }
 return VAR_18 ? VAR_18 : VAR_14;
}
