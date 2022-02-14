
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_skip_data {int non_block; scalar_t__ skipped; scalar_t__ no_addr; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct super_block*,unsigned long,int ,struct gfs2_skip_data*) ;

struct inode *FUNC_1(struct super_block *VAR_1, u64 VAR_2, int VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_2;
 struct gfs2_skip_data VAR_5;

 VAR_5.no_addr = VAR_2;
 VAR_5.skipped = 0;
 VAR_5.non_block = VAR_3;
 return FUNC_0(VAR_1, VAR_4, VAR_0, &VAR_5);
}
