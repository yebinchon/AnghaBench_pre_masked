
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {int dummy; } ;
struct TYPE_2__ {int s_blocksize; } ;



__attribute__((used)) static inline int FUNC_0(struct inode *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = (VAR_0->i_sb->s_blocksize - sizeof(struct ext4_extent_header))
   / sizeof(struct ext4_extent);
 if (!VAR_1) {




 }
 return VAR_2;
}
