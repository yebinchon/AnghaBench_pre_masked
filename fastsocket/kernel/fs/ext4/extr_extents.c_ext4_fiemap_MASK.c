
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct fiemap_extent_info {int fi_flags; } ;
typedef int ext4_lblk_t ;
typedef int __u64 ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*,int,int,struct fiemap_extent_info*) ;
 int VAR_5 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,struct fiemap_extent_info*) ;
 scalar_t__ FUNC_3 (struct fiemap_extent_info*,int ) ;
 int FUNC_4 (struct inode*,struct fiemap_extent_info*,int,int,int ) ;

int FUNC_5(struct inode *VAR_6, struct fiemap_extent_info *VAR_7,
  __u64 VAR_8, __u64 VAR_9)
{
 ext4_lblk_t VAR_10;
 int VAR_11 = 0;


 if (!(FUNC_1(VAR_6, VAR_2)))
  return FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9,
   VAR_5);

 if (FUNC_3(VAR_7, VAR_1))
  return -VAR_0;

 if (VAR_7->fi_flags & VAR_4) {
  VAR_11 = FUNC_2(VAR_6, VAR_7);
 } else {
  ext4_lblk_t VAR_12;
  __u64 VAR_13;

  VAR_10 = VAR_8 >> VAR_6->i_sb->s_blocksize_bits;
  VAR_13 = (VAR_8 + VAR_9 - 1) >> VAR_6->i_sb->s_blocksize_bits;
  if (VAR_13 >= VAR_3)
   VAR_13 = VAR_3-1;
  VAR_12 = ((ext4_lblk_t) VAR_13) - VAR_10 + 1;





  VAR_11 = FUNC_0(VAR_6, VAR_10,
       VAR_12, VAR_7);
 }

 return VAR_11;
}
