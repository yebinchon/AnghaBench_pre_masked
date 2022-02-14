
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct raid_type {unsigned int parity_devs; int algorithm; int level; } ;
struct TYPE_4__ {unsigned int raid_disks; scalar_t__ recovery_cp; scalar_t__ delta_disks; int layout; int new_layout; int level; int new_level; } ;
struct raid_set {TYPE_1__* dev; TYPE_2__ md; struct raid_type* raid_type; struct dm_target* ti; } ;
struct dm_target {char* error; } ;
struct TYPE_3__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct raid_set* FUNC_0 (int ) ;
 int VAR_2 ;
 struct raid_set* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static struct raid_set *FUNC_4(struct dm_target *VAR_3, struct raid_type *VAR_4, unsigned VAR_5)
{
 unsigned VAR_6;
 struct raid_set *VAR_7;

 if (VAR_5 <= VAR_4->parity_devs) {
  VAR_3->error = "Insufficient number of devices";
  return FUNC_0(-VAR_0);
 }

 VAR_7 = FUNC_1(sizeof(*VAR_7) + VAR_5 * sizeof(VAR_7->dev[0]), VAR_2);
 if (!VAR_7) {
  VAR_3->error = "Cannot allocate raid context";
  return FUNC_0(-VAR_1);
 }

 FUNC_3(&VAR_7->md);

 VAR_7->ti = VAR_3;
 VAR_7->raid_type = VAR_4;
 VAR_7->md.raid_disks = VAR_5;
 VAR_7->md.level = VAR_4->level;
 VAR_7->md.new_level = VAR_7->md.level;
 VAR_7->md.layout = VAR_4->algorithm;
 VAR_7->md.new_layout = VAR_7->md.layout;
 VAR_7->md.delta_disks = 0;
 VAR_7->md.recovery_cp = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_2(&VAR_7->dev[VAR_6].rdev);
 return VAR_7;
}
