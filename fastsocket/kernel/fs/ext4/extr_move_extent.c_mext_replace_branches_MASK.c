
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct inode*) ;
 int FUNC_1 (struct inode*,struct inode*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct ext4_ext_path*) ;
 int FUNC_4 (struct ext4_extent*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,scalar_t__,struct ext4_ext_path**) ;
 int FUNC_8 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ext4_extent*,struct ext4_extent*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (int *,struct inode*,struct ext4_ext_path*,struct ext4_extent*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_12(handle_t *VAR_1, struct inode *VAR_2,
      struct inode *VAR_3, ext4_lblk_t VAR_4,
      ext4_lblk_t VAR_5, int *VAR_6)
{
 struct ext4_ext_path *VAR_7 = ((void*)0);
 struct ext4_ext_path *VAR_8 = ((void*)0);
 struct ext4_extent *VAR_9, *VAR_10;
 struct ext4_extent VAR_11, VAR_12;
 ext4_lblk_t VAR_13 = VAR_4, VAR_14 = VAR_4;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17;


 FUNC_0(VAR_2, VAR_3);


 *VAR_6 = FUNC_7(VAR_2, VAR_13, &VAR_7);
 if (*VAR_6)
  goto out;


 *VAR_6 = FUNC_7(VAR_3, VAR_14, &VAR_8);
 if (*VAR_6)
  goto out;
 VAR_15 = FUNC_6(VAR_2);
 VAR_9 = VAR_7[VAR_15].p_ext;
 VAR_12 = *VAR_9;

 VAR_15 = FUNC_6(VAR_3);
 VAR_10 = VAR_8[VAR_15].p_ext;
 VAR_11 = *VAR_10;

 *VAR_6 = FUNC_10(&VAR_11, &VAR_12, VAR_13,
          VAR_14, VAR_5);
 if (*VAR_6)
  goto out;


 while (1) {

  if (!VAR_10) {
   FUNC_2(VAR_3->i_sb,
       "The extent for donor must be found");
   *VAR_6 = -VAR_0;
   goto out;
  } else if (VAR_14 != FUNC_9(VAR_11.ee_block)) {
   FUNC_2(VAR_3->i_sb,
    "Donor offset(%u) and the first block of donor "
    "extent(%u) should be equal",
    VAR_14,
    FUNC_9(VAR_11.ee_block));
   *VAR_6 = -VAR_0;
   goto out;
  }


  *VAR_6 = FUNC_11(VAR_1, VAR_2,
        VAR_7, &VAR_11, &VAR_13);
  if (*VAR_6)
   goto out;


  *VAR_6 = FUNC_11(VAR_1, VAR_3,
        VAR_8, &VAR_12, &VAR_14);
  if (*VAR_6)
   goto out;

  VAR_17 = FUNC_4(&VAR_11);
  VAR_16 += VAR_17;
  VAR_14 += VAR_17;
  VAR_13 += VAR_17;


  if (VAR_16 >= VAR_5)
   break;

  if (VAR_7)
   FUNC_3(VAR_7);
  *VAR_6 = FUNC_7(VAR_2, VAR_13, &VAR_7);
  if (*VAR_6)
   goto out;
  VAR_15 = FUNC_6(VAR_2);
  VAR_9 = VAR_7[VAR_15].p_ext;
  VAR_12 = *VAR_9;

  if (VAR_8)
   FUNC_3(VAR_8);
  *VAR_6 = FUNC_7(VAR_3, VAR_14, &VAR_8);
  if (*VAR_6)
   goto out;
  VAR_15 = FUNC_6(VAR_3);
  VAR_10 = VAR_8[VAR_15].p_ext;
  VAR_11 = *VAR_10;

  *VAR_6 = FUNC_10(&VAR_11, &VAR_12, VAR_13,
        VAR_14, VAR_5 - VAR_16);
  if (*VAR_6)
   goto out;
 }

out:
 if (VAR_7) {
  FUNC_3(VAR_7);
  FUNC_8(VAR_7);
 }
 if (VAR_8) {
  FUNC_3(VAR_8);
  FUNC_8(VAR_8);
 }

 FUNC_5(VAR_2);
 FUNC_5(VAR_3);

 FUNC_1(VAR_2, VAR_3);

 return VAR_16;
}
