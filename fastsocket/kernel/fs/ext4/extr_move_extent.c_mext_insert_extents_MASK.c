
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {int eh_entries; int eh_max; } ;
struct ext4_extent {scalar_t__ ee_len; } ;
struct ext4_ext_path {int p_depth; int p_bh; struct ext4_extent_header* p_hdr; } ;
typedef int handle_t ;


 int FUNC_0 (int *,struct inode*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct inode*,struct ext4_extent*,struct ext4_extent*,struct ext4_extent*,struct ext4_extent*,struct ext4_extent*) ;
 int FUNC_5 (struct ext4_extent*,struct ext4_extent*,struct ext4_extent*,struct ext4_extent*,struct ext4_extent*,struct ext4_extent_header*,int) ;

__attribute__((used)) static int
FUNC_6(handle_t *VAR_0, struct inode *VAR_1,
    struct ext4_ext_path *VAR_2,
    struct ext4_extent *VAR_3,
    struct ext4_extent *VAR_4,
    struct ext4_extent *VAR_5,
    struct ext4_extent *VAR_6,
    struct ext4_extent *VAR_7)
{
 struct ext4_extent_header *VAR_8;
 unsigned long VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;





 VAR_9 = (VAR_5->ee_len ? 1 : 0) + (VAR_7->ee_len ? 1 : 0) +
  (VAR_6->ee_len ? 1 : 0);


 VAR_10 = ((unsigned long)(VAR_4 + 1) - (unsigned long)VAR_3 + 1)
  / sizeof(struct ext4_extent);


 VAR_11 = VAR_9 - VAR_10;
 VAR_12 = VAR_2->p_depth;
 VAR_2 += VAR_12;
 VAR_8 = VAR_2->p_hdr;

 if (VAR_12) {

  VAR_13 = FUNC_1(VAR_0, VAR_2->p_bh);
  if (VAR_13)
   return VAR_13;
 }


 if (VAR_11 > 0 &&
  (VAR_11 > FUNC_3(VAR_8->eh_max)
   - FUNC_3(VAR_8->eh_entries))) {

  VAR_13 = FUNC_4(VAR_0, VAR_1, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_13 < 0)
   return VAR_13;
 } else
  FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_11);

 if (VAR_12) {
  VAR_13 = FUNC_0(VAR_0, VAR_1,
       VAR_2->p_bh);
  if (VAR_13)
   return VAR_13;
 } else {
  VAR_13 = FUNC_2(VAR_0, VAR_1);
  if (VAR_13 < 0)
   return VAR_13;
 }

 return 0;
}
