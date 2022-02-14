
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_inode {struct inode i_inode; int * i_res; int * i_rgd; int * i_gl; scalar_t__ i_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_2)
{
 struct gfs2_inode *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3) {
  VAR_3->i_flags = 0;
  VAR_3->i_gl = ((void*)0);
  VAR_3->i_rgd = ((void*)0);
  VAR_3->i_res = ((void*)0);
 }
 return &VAR_3->i_inode;
}
