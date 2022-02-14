
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int encountered_congestion; int range_start; int range_end; scalar_t__ nr_to_write; scalar_t__ range_cyclic; scalar_t__ nonblocking; } ;
struct pagevec {int dummy; } ;
struct backing_dev_info {int dummy; } ;
struct address_space {int writeback_index; struct backing_dev_info* backing_dev_info; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct backing_dev_info*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct address_space*,struct writeback_control*,struct pagevec*,int,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct pagevec*,int ) ;
 int FUNC_5 (struct pagevec*,struct address_space*,int*,int ,scalar_t__) ;
 int FUNC_6 (struct pagevec*) ;

__attribute__((used)) static int FUNC_7(struct address_space *VAR_4,
      struct writeback_control *VAR_5)
{
 struct backing_dev_info *VAR_6 = VAR_4->backing_dev_info;
 int VAR_7 = 0;
 int VAR_8 = 0;
 struct pagevec VAR_9;
 int VAR_10;
 pgoff_t VAR_11;
 pgoff_t VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;

 if (VAR_5->nonblocking && FUNC_0(VAR_6)) {
  VAR_5->encountered_congestion = 1;
  return 0;
 }

 FUNC_4(&VAR_9, 0);
 if (VAR_5->range_cyclic) {
  VAR_11 = VAR_4->writeback_index;
  VAR_12 = -1;
 } else {
  VAR_11 = VAR_5->range_start >> VAR_3;
  VAR_12 = VAR_5->range_end >> VAR_3;
  if (VAR_5->range_start == 0 && VAR_5->range_end == VAR_0)
   VAR_14 = 1;
  VAR_13 = 1;
 }

retry:
  while (!VAR_8 && (VAR_11 <= VAR_12) &&
  (VAR_10 = FUNC_5(&VAR_9, VAR_4, &VAR_11,
            VAR_1,
            FUNC_3(VAR_12 - VAR_11, (pgoff_t)VAR_2-1) + 1))) {
  VAR_13 = 1;
  VAR_7 = FUNC_2(VAR_4, VAR_5, &VAR_9, VAR_10, VAR_12);
  if (VAR_7)
   VAR_8 = 1;
  if (VAR_7 > 0)
   VAR_7 = 0;

  FUNC_6(&VAR_9);
  FUNC_1();
 }

 if (!VAR_13 && !VAR_8) {




  VAR_13 = 1;
  VAR_11 = 0;
  goto retry;
 }

 if (VAR_5->range_cyclic || (VAR_14 && VAR_5->nr_to_write > 0))
  VAR_4->writeback_index = VAR_11;
 return VAR_7;
}
