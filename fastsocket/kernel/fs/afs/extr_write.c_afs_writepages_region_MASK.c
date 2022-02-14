
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ nr_to_write; scalar_t__ sync_mode; int encountered_congestion; scalar_t__ nonblocking; } ;
struct page {scalar_t__ index; struct address_space* mapping; } ;
struct backing_dev_info {int dummy; } ;
struct afs_writeback {TYPE_1__* vnode; int state; } ;
struct address_space {struct backing_dev_info* backing_dev_info; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_2__ {int writeback_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (struct afs_writeback*,struct page*) ;
 scalar_t__ FUNC_7 (struct backing_dev_info*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct address_space*,scalar_t__*,int ,int,struct page**) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (struct page*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static int FUNC_17(struct address_space *VAR_3,
     struct writeback_control *VAR_4,
     pgoff_t VAR_5, pgoff_t VAR_6, pgoff_t *VAR_7)
{
 struct backing_dev_info *VAR_8 = VAR_3->backing_dev_info;
 struct afs_writeback *VAR_9;
 struct page *VAR_10;
 int VAR_11, VAR_12;

 FUNC_4(",,%lx,%lx,", VAR_5, VAR_6);

 do {
  VAR_12 = FUNC_9(VAR_3, &VAR_5, VAR_1,
           1, &VAR_10);
  if (!VAR_12)
   break;

  FUNC_3("wback %lx", VAR_10->index);

  if (VAR_10->index > VAR_6) {
   *VAR_7 = VAR_5;
   FUNC_11(VAR_10);
   FUNC_5(" = 0 [%lx]", *VAR_7);
   return 0;
  }






  FUNC_10(VAR_10);

  if (VAR_10->mapping != VAR_3) {
   FUNC_15(VAR_10);
   FUNC_11(VAR_10);
   continue;
  }

  if (VAR_4->sync_mode != VAR_2)
   FUNC_16(VAR_10);

  if (FUNC_2(VAR_10) || !FUNC_1(VAR_10)) {
   FUNC_15(VAR_10);
   continue;
  }

  VAR_9 = (struct afs_writeback *) FUNC_12(VAR_10);
  FUNC_0(VAR_9 != ((void*)0));

  FUNC_13(&VAR_9->vnode->writeback_lock);
  VAR_9->state = VAR_0;
  FUNC_14(&VAR_9->vnode->writeback_lock);

  VAR_11 = FUNC_6(VAR_9, VAR_10);
  FUNC_15(VAR_10);
  FUNC_11(VAR_10);
  if (VAR_11 < 0) {
   FUNC_5(" = %d", VAR_11);
   return VAR_11;
  }

  VAR_4->nr_to_write -= VAR_11;

  if (VAR_4->nonblocking && FUNC_7(VAR_8)) {
   VAR_4->encountered_congestion = 1;
   break;
  }

  FUNC_8();
 } while (VAR_5 < VAR_6 && VAR_4->nr_to_write > 0);

 *VAR_7 = VAR_5;
 FUNC_5(" = 0 [%lx]", *VAR_7);
 return 0;
}
