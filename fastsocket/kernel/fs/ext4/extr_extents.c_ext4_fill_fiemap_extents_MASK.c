
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct fiemap_extent_info {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; int * p_hdr; } ;
struct ext4_ext_cache {scalar_t__ ec_block; scalar_t__ ec_len; int ec_start; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef unsigned char __u64 ;
struct TYPE_4__ {int i_data_sem; } ;
struct TYPE_3__ {unsigned char s_blocksize_bits; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*,char*,...) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_4 (struct ext4_ext_path*) ;
 int FUNC_5 (struct ext4_ext_path*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_8 (struct inode*,scalar_t__,struct ext4_ext_path*) ;
 scalar_t__ FUNC_9 (struct ext4_extent*) ;
 scalar_t__ FUNC_10 (struct ext4_extent*) ;
 scalar_t__ FUNC_11 (struct ext4_ext_path*) ;
 int FUNC_12 (struct ext4_extent*) ;
 scalar_t__ FUNC_13 (struct inode*,struct ext4_ext_cache*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct fiemap_extent_info*,unsigned char,unsigned char,unsigned char,unsigned int) ;
 int FUNC_16 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_5,
        ext4_lblk_t VAR_6, ext4_lblk_t VAR_7,
        struct fiemap_extent_info *VAR_8)
{
 struct ext4_ext_path *VAR_9 = ((void*)0);
 struct ext4_ext_cache VAR_10;
 struct ext4_extent *VAR_11;
 ext4_lblk_t VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0;
 ext4_lblk_t VAR_16 = VAR_6 + VAR_7;
 int VAR_17, VAR_18 = 0, VAR_19 = 0;
 unsigned int VAR_20 = 0;
 unsigned char VAR_21 = VAR_5->i_sb->s_blocksize_bits;

 while (VAR_6 < VAR_16 && VAR_6 != VAR_1) {
  VAR_7 = VAR_16 - VAR_6;

  FUNC_6(&FUNC_3(VAR_5)->i_data_sem);

  if (VAR_9 && FUNC_14(VAR_5) != VAR_18) {

   FUNC_16(VAR_9);
   VAR_9 = ((void*)0);
  }

  VAR_9 = FUNC_8(VAR_5, VAR_6, VAR_9);
  if (FUNC_4(VAR_9)) {
   FUNC_19(&FUNC_3(VAR_5)->i_data_sem);
   VAR_19 = FUNC_5(VAR_9);
   VAR_9 = ((void*)0);
   break;
  }

  VAR_18 = FUNC_14(VAR_5);
  if (FUNC_18(VAR_9[VAR_18].p_hdr == ((void*)0))) {
   FUNC_19(&FUNC_3(VAR_5)->i_data_sem);
   FUNC_2(VAR_5, "path[%d].p_hdr == NULL", VAR_18);
   VAR_19 = -VAR_0;
   break;
  }
  VAR_11 = VAR_9[VAR_18].p_ext;
  VAR_12 = FUNC_11(VAR_9);
  FUNC_7(VAR_9);

  VAR_20 = 0;
  VAR_17 = 0;
  if (!VAR_11) {


   VAR_14 = VAR_6;
   VAR_15 = VAR_6 + VAR_7;
  } else if (FUNC_17(VAR_11->ee_block) > VAR_6) {

   VAR_14 = VAR_6;
   VAR_15 = FUNC_17(VAR_11->ee_block);
   if (VAR_6 + VAR_7 < VAR_15)
    VAR_15 = VAR_6 + VAR_7;
  } else if (VAR_6 >= FUNC_17(VAR_11->ee_block)
     + FUNC_9(VAR_11)) {

   VAR_14 = VAR_6;
   VAR_15 = VAR_6 + VAR_7;
   if (VAR_15 >= VAR_12)
    VAR_15 = VAR_12;
  } else if (VAR_6 >= FUNC_17(VAR_11->ee_block)) {




   VAR_14 = VAR_6;
   VAR_15 = FUNC_17(VAR_11->ee_block)
    + FUNC_9(VAR_11);
   if (VAR_6 + VAR_7 < VAR_15)
    VAR_15 = VAR_6 + VAR_7;
   VAR_17 = 1;
  } else {
   FUNC_0();
  }
  FUNC_1(VAR_15 <= VAR_14);

  if (!VAR_17) {
   VAR_10.ec_block = VAR_14;
   VAR_10.ec_len = VAR_15 - VAR_14;
   VAR_10.ec_start = 0;
  } else {
   VAR_10.ec_block = FUNC_17(VAR_11->ee_block);
   VAR_10.ec_len = FUNC_9(VAR_11);
   VAR_10.ec_start = FUNC_12(VAR_11);
   if (FUNC_10(VAR_11))
    VAR_20 |= VAR_4;
  }






  VAR_13 = FUNC_13(VAR_5, &VAR_10);
  if (!VAR_17 && (VAR_13 != VAR_1)) {
   struct ext4_ext_cache VAR_22;

   VAR_17 = 1;
   VAR_20 |= VAR_2;






   VAR_22 = 1;
   VAR_22 = VAR_10.ec_block + VAR_10.ec_len;
   VAR_22 = VAR_12 - VAR_22;
   VAR_13 = FUNC_13(VAR_5, &VAR_22);
  }
  FUNC_19(&FUNC_3(VAR_5)->i_data_sem);

  if (FUNC_18(VAR_10.ec_len == 0)) {
   FUNC_2(VAR_5, "cbex.ec_len == 0");
   VAR_19 = -VAR_0;
   break;
  }


  if (VAR_12 == VAR_13 && VAR_12 == VAR_1)
   VAR_20 |= VAR_3;

  if (VAR_17) {
   VAR_19 = FUNC_15(VAR_8,
    (__u64)VAR_10.ec_block << VAR_21,
    (__u64)VAR_10.ec_start << VAR_21,
    (__u64)VAR_10.ec_len << VAR_21,
    VAR_20);
   if (VAR_19 < 0)
    break;
   if (VAR_19 == 1) {
    VAR_19 = 0;
    break;
   }
  }

  VAR_6 = VAR_10.ec_block + VAR_10.ec_len;
 }

 if (VAR_9) {
  FUNC_7(VAR_9);
  FUNC_16(VAR_9);
 }

 return VAR_19;
}
