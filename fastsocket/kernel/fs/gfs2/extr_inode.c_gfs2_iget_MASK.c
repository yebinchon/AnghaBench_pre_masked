
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_skip_data {int non_block; scalar_t__ skipped; scalar_t__ no_addr; } ;


 struct inode* FUNC_0 (struct super_block*,unsigned long,int ,int ,struct gfs2_skip_data*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_2, u64 VAR_3,
          int VAR_4)
{
 struct gfs2_skip_data VAR_5;
 unsigned long VAR_6 = (unsigned long)VAR_3;

 VAR_5.no_addr = VAR_3;
 VAR_5.skipped = 0;
 VAR_5.non_block = VAR_4;
 return FUNC_0(VAR_2, VAR_6, VAR_1, VAR_0, &VAR_5);
}
