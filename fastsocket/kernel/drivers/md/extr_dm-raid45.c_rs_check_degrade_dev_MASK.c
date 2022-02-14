
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stripe {scalar_t__ key; } ;
struct TYPE_10__ {int ws_do_table_event; } ;
struct TYPE_8__ {unsigned int raid_devs; unsigned int ei; TYPE_1__* raid_type; int failed_devs; } ;
struct raid_set {TYPE_4__ io; TYPE_5__* dev; TYPE_2__ set; } ;
struct TYPE_11__ {TYPE_3__* dev; } ;
struct TYPE_9__ {int bdev; } ;
struct TYPE_7__ {scalar_t__ parity_devs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct raid_set*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct raid_set*) ;
 int FUNC_5 (struct raid_set*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct raid_set *VAR_1,
     struct stripe *VAR_2, unsigned VAR_3)
{
 if (FUNC_3(VAR_1->dev + VAR_3))
  return;


 if ((FUNC_6(&VAR_1->set.failed_devs) >
      VAR_1->set.raid_type->parity_devs) &&
      !FUNC_4(VAR_1)) {

  unsigned VAR_4;
  char VAR_5[VAR_0];

  FUNC_0("FATAL: too many devices failed -> RAID set broken");
  for (VAR_4 = 0; VAR_4 < VAR_1->set.raid_devs; VAR_4++) {
   if (FUNC_1(VAR_1->dev + VAR_4))
    FUNC_0("device /dev/%s failed",
          FUNC_7(VAR_1->dev[VAR_4].dev->bdev, VAR_5));
  }
 }


 if (!FUNC_5(VAR_1)) {
  char VAR_6[VAR_0];


  VAR_1->set.ei = VAR_3;
  FUNC_0("CRITICAL: %sio error on device /dev/%s "
        "in region=%llu; DEGRADING RAID set\n",
        VAR_2 ? "" : "FAKED ",
        FUNC_7(VAR_1->dev[VAR_3].dev->bdev, VAR_6),
        (unsigned long long) (VAR_2 ? VAR_2->key : 0));
  FUNC_0("further device error messages suppressed");
 }


 FUNC_2(VAR_1);
 FUNC_8(&VAR_1->io.ws_do_table_event);
}
