
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; } ;
struct gfs2_skip_data {scalar_t__ no_addr; int skipped; scalar_t__ non_block; } ;
struct gfs2_inode {scalar_t__ i_no_addr; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_3, void *VAR_4)
{
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_3);
 struct gfs2_skip_data *VAR_6 = VAR_4;

 if (VAR_5->i_no_addr == VAR_6->no_addr) {
  if (VAR_6->non_block &&
      VAR_3->i_state & (VAR_1|VAR_0|VAR_2)) {
   VAR_6->skipped = 1;
   return 0;
  }
  return 1;
 }
 return 0;
}
