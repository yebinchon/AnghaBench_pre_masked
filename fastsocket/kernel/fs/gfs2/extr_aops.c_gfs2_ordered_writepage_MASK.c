
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {TYPE_2__* i_sb; } ;
struct gfs2_inode {int dummy; } ;
struct TYPE_4__ {scalar_t__ s_blocksize; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*,int ,struct writeback_control*) ;
 int FUNC_2 (struct page*,scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_3 (struct gfs2_inode*,struct page*,int ,scalar_t__) ;
 int FUNC_4 (struct page*,struct writeback_control*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct page *VAR_3,
      struct writeback_control *VAR_4)
{
 struct inode *VAR_5 = VAR_3->mapping->host;
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (VAR_7 <= 0)
  return VAR_7;

 if (!FUNC_5(VAR_3)) {
  FUNC_2(VAR_3, VAR_5->i_sb->s_blocksize,
         (1 << VAR_0)|(1 << VAR_1));
 }
 FUNC_3(VAR_6, VAR_3, 0, VAR_5->i_sb->s_blocksize-1);
 return FUNC_1(VAR_3, VAR_2, VAR_4);
}
