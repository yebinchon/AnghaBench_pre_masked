
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct fuse_inode_handle {int nodeid; scalar_t__ generation; } ;
struct fid {scalar_t__* raw; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct super_block*,struct fuse_inode_handle*) ;

__attribute__((used)) static struct dentry *FUNC_1(struct super_block *VAR_0,
  struct fid *VAR_1, int VAR_2, int VAR_3)
{
 struct fuse_inode_handle VAR_4;

 if (VAR_3 != 0x82 || VAR_2 < 6)
  return ((void*)0);

 VAR_4.nodeid = (u64) VAR_1->raw[3] << 32;
 VAR_4.nodeid |= (u64) VAR_1->raw[4];
 VAR_4.generation = VAR_1->raw[5];
 return FUNC_0(VAR_0, &VAR_4);
}
