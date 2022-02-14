
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wb_writeback_work {long nr_pages; int for_kupdate; int range_cyclic; int sync_mode; } ;
struct bdi_writeback {unsigned long last_old_flush; } ;
struct TYPE_2__ {long nr_inodes; long nr_unused; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (int ) ;
 TYPE_1__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (long) ;
 long FUNC_4 (struct bdi_writeback*,struct wb_writeback_work*) ;

__attribute__((used)) static long FUNC_5(struct bdi_writeback *VAR_6)
{
 unsigned long VAR_7;
 long VAR_8;




 if (!VAR_3)
  return 0;

 VAR_7 = VAR_6->last_old_flush +
   FUNC_1(VAR_3 * 10);
 if (FUNC_2(VAR_5, VAR_7))
  return 0;

 VAR_6->last_old_flush = VAR_5;
 VAR_8 = FUNC_0(VAR_0) +
   FUNC_0(VAR_1) +
   (VAR_4.nr_inodes - VAR_4.nr_unused);

 if (VAR_8) {
  struct wb_writeback_work VAR_9 = {
   .nr_pages = VAR_8,
   .sync_mode = VAR_2,
   .for_kupdate = 1,
   .range_cyclic = 1,
  };

  VAR_8 = FUNC_4(VAR_6, &VAR_9);
  FUNC_3(VAR_8);
  return VAR_8;
 }

 return 0;
}
