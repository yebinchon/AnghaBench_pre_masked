
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; struct ext4_extent_header* p_hdr; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ext4_ext_path*) ;
 int FUNC_1 (struct ext4_ext_path*) ;
 int FUNC_2 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_3 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_4 (struct inode*,scalar_t__,struct ext4_ext_path*) ;
 int FUNC_5 (int *,struct inode*,struct ext4_ext_path*) ;
 unsigned int FUNC_6 (struct ext4_extent*) ;
 int FUNC_7 (struct ext4_extent*) ;
 int FUNC_8 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_9 (struct inode*,struct ext4_ext_path*,struct ext4_extent*) ;
 int FUNC_10 (int *,struct inode*,struct ext4_ext_path*,scalar_t__,unsigned int,int ) ;
 int FUNC_11 (char*,int ,unsigned long long,unsigned int) ;
 int FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(handle_t *VAR_1,
           struct inode *VAR_2,
           ext4_lblk_t VAR_3,
           unsigned int VAR_4,
           struct ext4_ext_path *VAR_5)
{
 struct ext4_extent *VAR_6;
 ext4_lblk_t VAR_7;
 unsigned int VAR_8;
 struct ext4_extent_header *VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_12(VAR_2);
 VAR_9 = VAR_5[VAR_10].p_hdr;
 VAR_6 = VAR_5[VAR_10].p_ext;
 VAR_7 = FUNC_13(VAR_6->ee_block);
 VAR_8 = FUNC_6(VAR_6);

 FUNC_11("ext4_convert_unwritten_extents_endio: inode %lu, logical"
    "block %llu, max_blocks %u\n", VAR_2->i_ino,
    (unsigned long long)VAR_7, VAR_8);



 if (VAR_7 != VAR_3 || VAR_8 > VAR_4) {
  VAR_11 = FUNC_10(VAR_1, VAR_2, VAR_5,
     VAR_3, VAR_4,
     VAR_0);
  if (VAR_11 < 0)
   goto out;
  FUNC_3(VAR_5);
  VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_5);
  if (FUNC_0(VAR_5)) {
   VAR_11 = FUNC_1(VAR_5);
   goto out;
  }
  VAR_10 = FUNC_12(VAR_2);
  VAR_6 = VAR_5[VAR_10].p_ext;
 }

 VAR_11 = FUNC_5(VAR_1, VAR_2, VAR_5 + VAR_10);
 if (VAR_11)
  goto out;

 FUNC_7(VAR_6);




 FUNC_9(VAR_2, VAR_5, VAR_6);


 VAR_11 = FUNC_2(VAR_1, VAR_2, VAR_5 + VAR_10);
out:
 FUNC_8(VAR_2, VAR_5);
 return VAR_11;
}
