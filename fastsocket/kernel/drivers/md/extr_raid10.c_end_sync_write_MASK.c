
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r10conf {TYPE_1__* mirrors; } ;
struct r10bio {int state; int sectors; TYPE_3__* devs; struct mddev* mddev; } ;
struct mddev {struct r10conf* private; } ;
struct md_rdev {TYPE_2__* mddev; int flags; } ;
struct bio {struct r10bio* bi_private; int bi_flags; } ;
typedef int sector_t ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int recovery; } ;
struct TYPE_4__ {struct md_rdev* rdev; struct md_rdev* replacement; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct r10bio*) ;
 int FUNC_1 (struct r10conf*,struct r10bio*,struct bio*,int*,int*) ;
 scalar_t__ FUNC_2 (struct md_rdev*,int ,int ,int *,int*) ;
 int FUNC_3 (struct mddev*,struct md_rdev*) ;
 int FUNC_4 (struct md_rdev*,struct mddev*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct bio *VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_7(VAR_0, &VAR_6->bi_flags);
 struct r10bio *VAR_9 = VAR_6->bi_private;
 struct mddev *VAR_10 = VAR_9->mddev;
 struct r10conf *VAR_11 = VAR_10->private;
 int VAR_12;
 sector_t VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 struct md_rdev *VAR_17 = ((void*)0);

 VAR_12 = FUNC_1(VAR_11, VAR_9, VAR_6, &VAR_15, &VAR_16);
 if (VAR_16)
  VAR_17 = VAR_11->mirrors[VAR_12].replacement;
 else
  VAR_17 = VAR_11->mirrors[VAR_12].rdev;

 if (!VAR_8) {
  if (VAR_16)
   FUNC_3(VAR_10, VAR_17);
  else {
   FUNC_5(VAR_5, &VAR_17->flags);
   if (!FUNC_6(VAR_4, &VAR_17->flags))
    FUNC_5(VAR_1,
     &VAR_17->mddev->recovery);
   FUNC_5(VAR_3, &VAR_9->state);
  }
 } else if (FUNC_2(VAR_17,
        VAR_9->devs[VAR_15].addr,
        VAR_9->sectors,
        &VAR_13, &VAR_14))
  FUNC_5(VAR_2, &VAR_9->state);

 FUNC_4(VAR_17, VAR_10);

 FUNC_0(VAR_9);
}
