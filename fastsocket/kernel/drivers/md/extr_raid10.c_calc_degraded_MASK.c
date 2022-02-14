
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int raid_disks; } ;
struct TYPE_5__ {int raid_disks; } ;
struct r10conf {TYPE_3__ prev; TYPE_2__ geo; TYPE_1__* mirrors; } ;
struct md_rdev {int flags; } ;
struct TYPE_4__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct md_rdev* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct r10conf *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;

 FUNC_1();
 VAR_3 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->prev.raid_disks; VAR_5++) {
  struct md_rdev *VAR_6 = FUNC_0(VAR_2->mirrors[VAR_5].rdev);
  if (!VAR_6 || FUNC_3(VAR_0, &VAR_6->flags))
   VAR_3++;
  else if (!FUNC_3(VAR_1, &VAR_6->flags))




   VAR_3++;
 }
 FUNC_2();
 if (VAR_2->geo.raid_disks == VAR_2->prev.raid_disks)
  return VAR_3;
 FUNC_1();
 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->geo.raid_disks; VAR_5++) {
  struct md_rdev *VAR_7 = FUNC_0(VAR_2->mirrors[VAR_5].rdev);
  if (!VAR_7 || FUNC_3(VAR_0, &VAR_7->flags))
   VAR_4++;
  else if (!FUNC_3(VAR_1, &VAR_7->flags)) {





   if (VAR_2->geo.raid_disks <= VAR_2->prev.raid_disks)
    VAR_4++;
  }
 }
 FUNC_2();
 if (VAR_4 > VAR_3)
  return VAR_4;
 return VAR_3;
}
