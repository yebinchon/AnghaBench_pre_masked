
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {unsigned int ra_pages; } ;
struct request_queue {TYPE_5__ backing_dev_info; } ;
struct TYPE_9__ {unsigned int raid_devs; unsigned int data_devs; } ;
struct raid_set {TYPE_4__* dev; TYPE_2__ set; TYPE_6__* ti; } ;
struct mapped_device {int dummy; } ;
struct backing_dev_info {unsigned int ra_pages; } ;
struct TYPE_14__ {TYPE_1__* queue; } ;
struct TYPE_13__ {int table; } ;
struct TYPE_11__ {TYPE_3__* dev; } ;
struct TYPE_10__ {int bdev; } ;
struct TYPE_8__ {struct backing_dev_info backing_dev_info; } ;


 int VAR_0 ;
 struct request_queue* FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (struct mapped_device*) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct mapped_device*) ;
 struct mapped_device* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct raid_set *VAR_1,
         unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4 = FUNC_2(VAR_2, VAR_0);
 struct mapped_device *VAR_5 = FUNC_4(VAR_1->ti->table);
 struct backing_dev_info *VAR_6 = &FUNC_1(VAR_5)->queue->backing_dev_info;


 if (VAR_4) {
  unsigned VAR_7 = VAR_1->set.raid_devs;

  VAR_6->ra_pages = VAR_3 * VAR_4 * VAR_1->set.data_devs;

  while (VAR_7--) {
   struct request_queue *VAR_8 =
    FUNC_0(VAR_1->dev[VAR_7].dev->bdev);

   VAR_8->backing_dev_info.ra_pages = VAR_4;
  }
 }

 FUNC_3(VAR_5);
}
