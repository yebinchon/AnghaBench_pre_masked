
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned long i_ino; } ;
struct gfs2_skip_data {scalar_t__ no_addr; scalar_t__ skipped; } ;
struct gfs2_inode {scalar_t__ i_no_addr; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, void *VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_1);
 struct gfs2_skip_data *VAR_4 = VAR_2;

 if (VAR_4->skipped)
  return -VAR_0;
 VAR_1->i_ino = (unsigned long)(VAR_4->no_addr);
 VAR_3->i_no_addr = VAR_4->no_addr;
 return 0;
}
