
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int shift; int * page; int lock; scalar_t__ count; } ;
struct TYPE_3__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct md_rdev {int desc_nr; int saved_raid_disk; int raid_disk; TYPE_2__ badblocks; int blocked_wait; int same_set; int corrected_errors; int read_errors; int nr_pending; int * bb_page; scalar_t__ sb_loaded; TYPE_1__ last_read_error; scalar_t__ sb_events; scalar_t__ new_data_offset; scalar_t__ data_offset; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct md_rdev *VAR_3)
{
 VAR_3->desc_nr = -1;
 VAR_3->saved_raid_disk = -1;
 VAR_3->raid_disk = -1;
 VAR_3->flags = 0;
 VAR_3->data_offset = 0;
 VAR_3->new_data_offset = 0;
 VAR_3->sb_events = 0;
 VAR_3->last_read_error.tv_sec = 0;
 VAR_3->last_read_error.tv_nsec = 0;
 VAR_3->sb_loaded = 0;
 VAR_3->bb_page = ((void*)0);
 FUNC_1(&VAR_3->nr_pending, 0);
 FUNC_1(&VAR_3->read_errors, 0);
 FUNC_1(&VAR_3->corrected_errors, 0);

 FUNC_0(&VAR_3->same_set);
 FUNC_2(&VAR_3->blocked_wait);





 VAR_3->badblocks.count = 0;
 VAR_3->badblocks.shift = -1;
 VAR_3->badblocks.page = FUNC_3(VAR_2, VAR_1);
 FUNC_4(&VAR_3->badblocks.lock);
 if (VAR_3->badblocks.page == ((void*)0))
  return -VAR_0;

 return 0;
}
