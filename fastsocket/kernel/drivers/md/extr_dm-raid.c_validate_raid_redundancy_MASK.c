
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int raid_disks; int layout; } ;
struct raid_set {TYPE_4__* dev; TYPE_2__ md; TYPE_1__* raid_type; } ;
struct TYPE_7__ {int flags; int sb_page; } ;
struct TYPE_8__ {TYPE_3__ rdev; } ;
struct TYPE_5__ {int level; unsigned int parity_devs; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct raid_set *VAR_2)
{
 unsigned VAR_3, VAR_4 = 0;
 unsigned VAR_5 = 0, VAR_6, VAR_7;

 for (VAR_3 = 0; VAR_3 < VAR_2->md.raid_disks; VAR_3++)
  if (!FUNC_1(VAR_1, &VAR_2->dev[VAR_3].rdev.flags) ||
      !VAR_2->dev[VAR_3].rdev.sb_page)
   VAR_4++;

 switch (VAR_2->raid_type->level) {
 case 1:
  if (VAR_4 >= VAR_2->md.raid_disks)
   goto too_many;
  break;
 case 4:
 case 5:
 case 6:
  if (VAR_4 > VAR_2->raid_type->parity_devs)
   goto too_many;
  break;
 case 10:
  VAR_6 = FUNC_0(VAR_2->md.layout);
  if (VAR_4 < VAR_6)
   break;
  for (VAR_3 = 0; VAR_3 < VAR_2->md.raid_disks * VAR_6; VAR_3++) {
   if (!(VAR_3 % VAR_6))
    VAR_5 = 0;
   VAR_7 = VAR_3 % VAR_2->md.raid_disks;
   if ((!VAR_2->dev[VAR_7].rdev.sb_page ||
        !FUNC_1(VAR_1, &VAR_2->dev[VAR_7].rdev.flags)) &&
       (++VAR_5 >= VAR_6))
    goto too_many;
  }
  break;
 default:
  if (VAR_4)
   return -VAR_0;
 }

 return 0;

too_many:
 return -VAR_0;
}
