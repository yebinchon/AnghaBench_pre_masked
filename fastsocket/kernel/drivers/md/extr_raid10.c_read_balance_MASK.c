
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct geom {int near_copies; int far_copies; } ;
struct r10conf {scalar_t__ const next_resync; int copies; TYPE_3__* mddev; TYPE_2__* mirrors; struct geom geo; } ;
struct r10bio {scalar_t__ sector; int sectors; int read_slot; TYPE_1__* devs; } ;
struct md_rdev {scalar_t__ recovery_offset; int flags; int nr_pending; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {scalar_t__ recovery_cp; } ;
struct TYPE_5__ {scalar_t__ head_position; int rdev; int replacement; } ;
struct TYPE_4__ {scalar_t__ bio; int devnum; scalar_t__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct md_rdev*,scalar_t__,int,scalar_t__*,int*) ;
 int FUNC_4 (struct r10conf*,struct r10bio*) ;
 struct md_rdev* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct md_rdev*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static struct md_rdev *FUNC_10(struct r10conf *VAR_5,
        struct r10bio *VAR_6,
        int *VAR_7)
{
 const sector_t VAR_8 = VAR_6->sector;
 int VAR_9, VAR_10;
 int VAR_11 = VAR_6->sectors;
 int VAR_12;
 sector_t VAR_13, VAR_14;
 struct md_rdev *VAR_15, *VAR_16 = ((void*)0);
 int VAR_17;
 int VAR_18;
 struct geom *VAR_19 = &VAR_5->geo;

 FUNC_4(VAR_5, VAR_6);
 FUNC_6();
retry:
 VAR_11 = VAR_6->sectors;
 VAR_18 = -1;
 VAR_15 = ((void*)0);
 VAR_14 = VAR_3;
 VAR_12 = 0;
 VAR_17 = 1;






 if (VAR_5->mddev->recovery_cp < VAR_3
     && (VAR_8 + VAR_11 >= VAR_5->next_resync))
  VAR_17 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_5->copies ; VAR_10++) {
  sector_t VAR_20;
  int VAR_21;
  sector_t VAR_22;

  if (VAR_6->devs[VAR_10].bio == VAR_1)
   continue;
  VAR_9 = VAR_6->devs[VAR_10].devnum;
  VAR_16 = FUNC_5(VAR_5->mirrors[VAR_9].replacement);
  if (VAR_16 == ((void*)0) || FUNC_9(VAR_0, &VAR_16->flags) ||
      FUNC_9(VAR_4, &VAR_16->flags) ||
      VAR_6->devs[VAR_10].addr + VAR_11 > VAR_16->recovery_offset)
   VAR_16 = FUNC_5(VAR_5->mirrors[VAR_9].rdev);
  if (VAR_16 == ((void*)0) ||
      FUNC_9(VAR_0, &VAR_16->flags) ||
      FUNC_9(VAR_4, &VAR_16->flags))
   continue;
  if (!FUNC_9(VAR_2, &VAR_16->flags) &&
      VAR_6->devs[VAR_10].addr + VAR_11 > VAR_16->recovery_offset)
   continue;

  VAR_22 = VAR_6->devs[VAR_10].addr;
  if (FUNC_3(VAR_16, VAR_22, VAR_11,
    &VAR_20, &VAR_21)) {
   if (VAR_14 < VAR_3)

    continue;
   if (VAR_20 <= VAR_22) {




    VAR_21 -= (VAR_22 - VAR_20);
    if (!VAR_17 && VAR_11 > VAR_21)
     VAR_11 = VAR_21;
    if (VAR_12 > VAR_11)
     VAR_12 = VAR_11;
   } else {
    sector_t VAR_23 =
     VAR_20 - VAR_22;
    if (VAR_23 > VAR_12) {
     VAR_12 = VAR_23;
     VAR_18 = VAR_10;
     VAR_15 = VAR_16;
    }
    if (!VAR_17)

     break;
   }
   continue;
  } else
   VAR_12 = VAR_11;

  if (!VAR_17)
   break;





  if (VAR_19->near_copies > 1 && !FUNC_2(&VAR_16->nr_pending))
   break;


  if (VAR_19->far_copies > 1)
   VAR_13 = VAR_6->devs[VAR_10].addr;
  else
   VAR_13 = FUNC_0(VAR_6->devs[VAR_10].addr -
        VAR_5->mirrors[VAR_9].head_position);
  if (VAR_13 < VAR_14) {
   VAR_14 = VAR_13;
   VAR_18 = VAR_10;
   VAR_15 = VAR_16;
  }
 }
 if (VAR_10 >= VAR_5->copies) {
  VAR_10 = VAR_18;
  VAR_16 = VAR_15;
 }

 if (VAR_10 >= 0) {
  FUNC_1(&VAR_16->nr_pending);
  if (FUNC_9(VAR_0, &VAR_16->flags)) {



   FUNC_8(VAR_16, VAR_5->mddev);
   goto retry;
  }
  VAR_6->read_slot = VAR_10;
 } else
  VAR_16 = ((void*)0);
 FUNC_7();
 *VAR_7 = VAR_12;

 return VAR_16;
}
