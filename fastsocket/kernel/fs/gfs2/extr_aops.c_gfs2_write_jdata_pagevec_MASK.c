
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; scalar_t__ nr_to_write; int encountered_congestion; scalar_t__ nonblocking; int range_cyclic; } ;
struct pagevec {struct page** pages; } ;
struct page {scalar_t__ index; struct address_space* mapping; } ;
struct inode {TYPE_1__* i_sb; } ;
struct gfs2_sbd {int dummy; } ;
struct backing_dev_info {int dummy; } ;
struct address_space {TYPE_2__* a_ops; struct backing_dev_info* backing_dev_info; struct inode* host; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
struct TYPE_4__ {int (* invalidatepage ) (struct page*,int ) ;} ;
struct TYPE_3__ {int s_blocksize; } ;


 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct page*,struct writeback_control*) ;
 scalar_t__ FUNC_3 (struct backing_dev_info*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct gfs2_sbd*,unsigned int,unsigned int) ;
 int FUNC_6 (struct gfs2_sbd*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;

__attribute__((used)) static int FUNC_13(struct address_space *VAR_3,
        struct writeback_control *VAR_4,
        struct pagevec *VAR_5,
        int VAR_6, pgoff_t VAR_7)
{
 struct inode *VAR_8 = VAR_3->host;
 struct gfs2_sbd *VAR_9 = FUNC_0(VAR_8);
 loff_t VAR_10 = FUNC_7(VAR_8);
 pgoff_t VAR_11 = VAR_10 >> VAR_0;
 unsigned VAR_12 = VAR_10 & (VAR_1-1);
 unsigned VAR_13 = VAR_6 * (VAR_1/VAR_8->i_sb->s_blocksize);
 struct backing_dev_info *VAR_14 = VAR_3->backing_dev_info;
 int VAR_15;
 int VAR_16;

 VAR_16 = FUNC_5(VAR_9, VAR_13, VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 for(VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  struct page *VAR_17 = VAR_5->pages[VAR_15];

  FUNC_8(VAR_17);

  if (FUNC_10(VAR_17->mapping != VAR_3)) {
   FUNC_11(VAR_17);
   continue;
  }

  if (!VAR_4->range_cyclic && VAR_17->index > VAR_7) {
   VAR_16 = 1;
   FUNC_11(VAR_17);
   continue;
  }

  if (VAR_4->sync_mode != VAR_2)
   FUNC_12(VAR_17);

  if (FUNC_1(VAR_17) ||
      !FUNC_4(VAR_17)) {
   FUNC_11(VAR_17);
   continue;
  }


  if (VAR_17->index > VAR_11 || (VAR_17->index == VAR_11 && !VAR_12)) {
   VAR_17->mapping->a_ops->invalidatepage(VAR_17, 0);
   FUNC_11(VAR_17);
   continue;
  }

  VAR_16 = FUNC_2(VAR_17, VAR_4);

  if (VAR_16 || (--(VAR_4->nr_to_write) <= 0))
   VAR_16 = 1;
  if (VAR_4->nonblocking && FUNC_3(VAR_14)) {
   VAR_4->encountered_congestion = 1;
   VAR_16 = 1;
  }

 }
 FUNC_6(VAR_9);
 return VAR_16;
}
