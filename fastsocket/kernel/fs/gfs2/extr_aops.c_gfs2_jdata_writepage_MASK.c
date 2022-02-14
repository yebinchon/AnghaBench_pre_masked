
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct page*,struct writeback_control*) ;
 int FUNC_3 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_4 (struct gfs2_sbd*) ;
 int FUNC_5 (struct page*,struct writeback_control*) ;
 int FUNC_6 (struct writeback_control*,struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct page *VAR_2, struct writeback_control *VAR_3)
{
 struct inode *VAR_4 = VAR_2->mapping->host;
 struct gfs2_sbd *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;
 int VAR_7 = 0;

 if (FUNC_1(VAR_2)) {
  if (VAR_3->sync_mode != VAR_1)
   goto out_ignore;
  VAR_6 = FUNC_3(VAR_5, VAR_0 + 1, 0);
  if (VAR_6)
   goto out_ignore;
  VAR_7 = 1;
 }
 VAR_6 = FUNC_5(VAR_2, VAR_3);
 if (VAR_6 > 0)
  VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_7)
  FUNC_4(VAR_5);
 return VAR_6;

out_ignore:
 FUNC_6(VAR_3, VAR_2);
 FUNC_7(VAR_2);
 return 0;
}
