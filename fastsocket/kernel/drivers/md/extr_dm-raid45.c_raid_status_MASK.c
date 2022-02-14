
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int chunk_size_parm; int io_size_parm; unsigned int raid_devs; unsigned int pi; unsigned int dev_to_init; unsigned long long raid_parms; TYPE_3__* raid_type; } ;
struct TYPE_12__ {int io_size_parm; int bandwidth_parm; int recovery_stripes; int recovery; struct dm_dirty_log* dl; scalar_t__ nr_regions; } ;
struct TYPE_9__ {int stripes_parm; } ;
struct raid_set {TYPE_8__* dev; TYPE_5__ set; TYPE_4__ recover; TYPE_1__ sc; } ;
struct dm_target {struct raid_set* private; } ;
struct dm_dirty_log {TYPE_2__* type; } ;
typedef int status_type_t ;
struct TYPE_16__ {scalar_t__ start; TYPE_7__* dev; } ;
struct TYPE_15__ {TYPE_6__* bdev; } ;
struct TYPE_14__ {int bd_dev; } ;
struct TYPE_11__ {unsigned long long name; } ;
struct TYPE_10__ {unsigned int (* status ) (struct dm_dirty_log*,int,char*,unsigned int) ;scalar_t__ (* get_sync_count ) (struct dm_dirty_log*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct raid_set*) ;


 unsigned long long FUNC_3 (char*,int ) ;
 int FUNC_4 (struct dm_target*,char*,unsigned int*,unsigned int) ;
 scalar_t__ FUNC_5 (struct dm_dirty_log*) ;
 unsigned int FUNC_6 (struct dm_dirty_log*,int,char*,unsigned int) ;
 unsigned int FUNC_7 (struct dm_dirty_log*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct dm_target *VAR_1, status_type_t VAR_2,
         char *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5, VAR_6 = 0;
 char VAR_7[VAR_0];
 struct raid_set *VAR_8 = VAR_1->private;
 struct dm_dirty_log *VAR_9 = VAR_8->recover.dl;
 int VAR_10[] = {
  VAR_8->set.chunk_size_parm,
  VAR_8->sc.stripes_parm,
  VAR_8->set.io_size_parm,
  VAR_8->recover.io_size_parm,
  VAR_8->recover.bandwidth_parm,
  -2,
  VAR_8->recover.recovery_stripes,
 };

 switch (VAR_2) {
 case 129:

  if (FUNC_2(VAR_8))
   FUNC_4(VAR_1, VAR_3, &VAR_6, VAR_4);

  FUNC_0("%u ", VAR_8->set.raid_devs);

  for (VAR_5 = 0; VAR_5 < VAR_8->set.raid_devs; VAR_5++)
   FUNC_0("%s ",
          FUNC_3(VAR_7, VAR_8->dev[VAR_5].dev->bdev->bd_dev));

  FUNC_0("2 ");
  for (VAR_5 = 0; VAR_5 < VAR_8->set.raid_devs; VAR_5++) {
   FUNC_0("%c", !FUNC_1(VAR_8->dev + VAR_5) ? 'A' : 'D');

   if (VAR_5 == VAR_8->set.pi)
    FUNC_0("p");

   if (VAR_5 == VAR_8->set.dev_to_init)
    FUNC_0("i");
  }

  FUNC_0(" %llu/%llu ",
        (unsigned long long) VAR_9->type->get_sync_count(VAR_9),
        (unsigned long long) VAR_8->recover.nr_regions);

  VAR_6 += VAR_9->type->status(VAR_9, VAR_2, VAR_3+VAR_6, VAR_4-VAR_6);
  break;
 case 128:
  VAR_6 = VAR_8->recover.dl->type->status(VAR_8->recover.dl, VAR_2,
        VAR_3, VAR_4);
  FUNC_0("%s %u ", VAR_8->set.raid_type->name, VAR_8->set.raid_parms);

  for (VAR_5 = 0; VAR_5 < VAR_8->set.raid_parms; VAR_5++) {
   if (VAR_10[VAR_5] > -2)
    FUNC_0("%d ", VAR_10[VAR_5]);
   else
    FUNC_0("%s ", VAR_8->recover.recovery ?
           "sync" : "nosync");
  }

  FUNC_0("%u %d ", VAR_8->set.raid_devs, VAR_8->set.dev_to_init);

  for (VAR_5 = 0; VAR_5 < VAR_8->set.raid_devs; VAR_5++)
   FUNC_0("%s %llu ",
          FUNC_3(VAR_7, VAR_8->dev[VAR_5].dev->bdev->bd_dev),
          (unsigned long long) VAR_8->dev[VAR_5].start);
 }

 return 0;
}
