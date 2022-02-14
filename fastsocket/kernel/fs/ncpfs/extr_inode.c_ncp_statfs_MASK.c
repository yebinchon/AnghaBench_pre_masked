
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct dentry* s_root; } ;
struct ncp_volume_info {int sectors_per_block; int available_dir_entries; int total_dir_entries; int free_blocks; int total_blocks; } ;
struct TYPE_2__ {int * mounted_vol; } ;
struct ncp_server {TYPE_1__ m; } ;
struct ncp_inode_info {int DosDirNum; int volNumber; } ;
struct kstatfs {int f_bsize; int f_namelen; int f_bavail; int f_bfree; int f_blocks; void* f_type; int f_ffree; int f_files; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; struct super_block* d_sb; } ;
typedef int __u8 ;


 int VAR_0 ;
 struct ncp_inode_info* FUNC_0 (struct inode*) ;
 struct ncp_server* FUNC_1 (struct super_block*) ;
 void* VAR_1 ;
 int FUNC_2 (struct ncp_server*,int ,int ,int *) ;
 int FUNC_3 (struct ncp_server*,int ) ;
 int FUNC_4 (struct ncp_server*,int ,struct ncp_volume_info*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct dentry* VAR_4;
 struct inode* VAR_5;
 struct ncp_inode_info* VAR_6;
 struct ncp_server* VAR_7;
 struct ncp_volume_info VAR_8;
 struct super_block *VAR_9 = VAR_2->d_sb;
 int VAR_10;
 __u8 VAR_11;

 VAR_4 = VAR_9->s_root;
 if (!VAR_4) {
  goto dflt;
 }
 VAR_5 = VAR_4->d_inode;
 if (!VAR_5) {
  goto dflt;
 }
 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6) {
  goto dflt;
 }
 VAR_7 = FUNC_1(VAR_9);
 if (!VAR_7) {
  goto dflt;
 }
 if (!VAR_7->m.mounted_vol[0]) {
  goto dflt;
 }

 VAR_10 = FUNC_2(VAR_7, VAR_6->volNumber, VAR_6->DosDirNum, &VAR_11);
 if (VAR_10) {
  goto dflt;
 }
 VAR_10 = FUNC_4(VAR_7, VAR_11, &VAR_8);
 FUNC_3(VAR_7, VAR_11);
 if (VAR_10) {
  goto dflt;
 }
 VAR_3->f_type = VAR_1;
 VAR_3->f_bsize = VAR_8.sectors_per_block * 512;
 VAR_3->f_blocks = VAR_8.total_blocks;
 VAR_3->f_bfree = VAR_8.free_blocks;
 VAR_3->f_bavail = VAR_8.free_blocks;
 VAR_3->f_files = VAR_8.total_dir_entries;
 VAR_3->f_ffree = VAR_8.available_dir_entries;
 VAR_3->f_namelen = 12;
 return 0;







dflt:;
 VAR_3->f_type = VAR_1;
 VAR_3->f_bsize = VAR_0;
 VAR_3->f_blocks = 0;
 VAR_3->f_bfree = 0;
 VAR_3->f_bavail = 0;
 VAR_3->f_namelen = 12;
 return 0;
}
