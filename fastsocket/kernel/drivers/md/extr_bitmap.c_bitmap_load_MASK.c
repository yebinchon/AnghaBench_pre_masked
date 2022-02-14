
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int daemon_sleep; int mutex; } ;
struct mddev {scalar_t__ resync_max_sectors; scalar_t__ degraded; scalar_t__ events; scalar_t__ recovery_cp; TYPE_3__* thread; TYPE_2__ bitmap_info; struct bitmap* bitmap; } ;
struct bitmap {scalar_t__ events_cleared; int flags; TYPE_1__* mddev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {int timeout; } ;
struct TYPE_4__ {int recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bitmap*) ;
 int FUNC_1 (struct bitmap*,scalar_t__) ;
 int FUNC_2 (struct bitmap*,scalar_t__,scalar_t__*,int ) ;
 int FUNC_3 (struct bitmap*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int FUNC_10(struct mddev *VAR_4)
{
 int VAR_5 = 0;
 sector_t VAR_6 = 0;
 sector_t VAR_7 = 0;
 struct bitmap *VAR_8 = VAR_4->bitmap;

 if (!VAR_8)
  goto out;






 while (VAR_7 < VAR_4->resync_max_sectors) {
  sector_t VAR_9;
  FUNC_2(VAR_8, VAR_7, &VAR_9, 0);
  VAR_7 += VAR_9;
 }
 FUNC_0(VAR_8);

 if (VAR_4->degraded == 0
     || VAR_8->events_cleared == VAR_4->events)


  VAR_6 = VAR_4->recovery_cp;

 FUNC_6(&VAR_4->bitmap_info.mutex);
 VAR_5 = FUNC_1(VAR_8, VAR_6);
 FUNC_7(&VAR_4->bitmap_info.mutex);

 if (VAR_5)
  goto out;
 FUNC_4(VAR_0, &VAR_8->flags);


 FUNC_8(VAR_3, &VAR_8->mddev->recovery);

 VAR_4->thread->timeout = VAR_4->bitmap_info.daemon_sleep;
 FUNC_5(VAR_4->thread);

 FUNC_3(VAR_8);

 if (FUNC_9(VAR_1, &VAR_8->flags))
  VAR_5 = -VAR_2;
out:
 return VAR_5;
}
