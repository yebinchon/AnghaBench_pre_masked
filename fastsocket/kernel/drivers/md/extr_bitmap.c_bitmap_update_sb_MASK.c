
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sb_page; } ;
struct bitmap {scalar_t__ events_cleared; int flags; TYPE_3__ storage; TYPE_2__* mddev; } ;
struct TYPE_10__ {void* sectors_reserved; void* chunksize; void* sync_size; void* write_behind; void* daemon_sleep; void* state; void* events_cleared; void* events; } ;
typedef TYPE_4__ bitmap_super_t ;
struct TYPE_7__ {int daemon_sleep; int max_write_behind; int chunksize; int space; scalar_t__ external; } ;
struct TYPE_8__ {scalar_t__ events; scalar_t__ resync_max_sectors; TYPE_1__ bitmap_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 TYPE_4__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (struct bitmap*,int ,int) ;

void FUNC_5(struct bitmap *VAR_2)
{
 bitmap_super_t *VAR_3;

 if (!VAR_2 || !VAR_2->mddev)
  return;
 if (VAR_2->mddev->bitmap_info.external)
  return;
 if (!VAR_2->storage.sb_page)
  return;
 VAR_3 = FUNC_2(VAR_2->storage.sb_page, VAR_1);
 VAR_3->events = FUNC_1(VAR_2->mddev->events);
 if (VAR_2->mddev->events < VAR_2->events_cleared)

  VAR_2->events_cleared = VAR_2->mddev->events;
 VAR_3->events_cleared = FUNC_1(VAR_2->events_cleared);
 VAR_3->state = FUNC_0(VAR_2->flags);

 VAR_3->daemon_sleep = FUNC_0(VAR_2->mddev->bitmap_info.daemon_sleep/VAR_0);
 VAR_3->write_behind = FUNC_0(VAR_2->mddev->bitmap_info.max_write_behind);

 VAR_3->sync_size = FUNC_1(VAR_2->mddev->resync_max_sectors);
 VAR_3->chunksize = FUNC_0(VAR_2->mddev->bitmap_info.chunksize);
 VAR_3->sectors_reserved = FUNC_0(VAR_2->mddev->
        bitmap_info.space);
 FUNC_3(VAR_3, VAR_1);
 FUNC_4(VAR_2, VAR_2->storage.sb_page, 1);
}
