
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r10conf {int copies; int mddev; TYPE_1__* mirrors; } ;
struct r10bio {int state; int sectors; TYPE_2__* devs; } ;
struct md_rdev {int dummy; } ;
struct bio {int bi_flags; } ;
struct TYPE_4__ {int devnum; int addr; struct bio* repl_bio; struct bio* bio; } ;
struct TYPE_3__ {struct md_rdev* replacement; struct md_rdev* rdev; } ;


 int VAR_0 ;
 struct bio* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct r10bio*) ;
 int FUNC_1 (int ,struct md_rdev*) ;
 int FUNC_2 (struct r10bio*,int) ;
 int FUNC_3 (struct r10bio*) ;
 int FUNC_4 (struct r10bio*) ;
 int FUNC_5 (struct md_rdev*,int ,int ,int ) ;
 int FUNC_6 (struct md_rdev*,int ) ;
 int FUNC_7 (struct md_rdev*,int ,int ,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct r10conf *VAR_6, struct r10bio *VAR_7)
{






 int VAR_8;
 struct md_rdev *VAR_9;

 if (FUNC_9(VAR_4, &VAR_7->state) ||
     FUNC_9(VAR_3, &VAR_7->state)) {
  for (VAR_8 = 0; VAR_8 < VAR_6->copies; VAR_8++) {
   int VAR_10 = VAR_7->devs[VAR_8].devnum;
   VAR_9 = VAR_6->mirrors[VAR_10].rdev;
   if (VAR_7->devs[VAR_8].bio == ((void*)0))
    continue;
   if (FUNC_9(VAR_0,
         &VAR_7->devs[VAR_8].bio->bi_flags)) {
    FUNC_5(
     VAR_9,
     VAR_7->devs[VAR_8].addr,
     VAR_7->sectors, 0);
   } else {
    if (!FUNC_7(
         VAR_9,
         VAR_7->devs[VAR_8].addr,
         VAR_7->sectors, 0))
     FUNC_1(VAR_6->mddev, VAR_9);
   }
   VAR_9 = VAR_6->mirrors[VAR_10].replacement;
   if (VAR_7->devs[VAR_8].repl_bio == ((void*)0))
    continue;
   if (FUNC_9(VAR_0,
         &VAR_7->devs[VAR_8].repl_bio->bi_flags)) {
    FUNC_5(
     VAR_9,
     VAR_7->devs[VAR_8].addr,
     VAR_7->sectors, 0);
   } else {
    if (!FUNC_7(
         VAR_9,
         VAR_7->devs[VAR_8].addr,
         VAR_7->sectors, 0))
     FUNC_1(VAR_6->mddev, VAR_9);
   }
  }
  FUNC_3(VAR_7);
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_6->copies; VAR_8++) {
   int VAR_11 = VAR_7->devs[VAR_8].devnum;
   struct bio *VAR_12 = VAR_7->devs[VAR_8].bio;
   VAR_9 = VAR_6->mirrors[VAR_11].rdev;
   if (VAR_12 == VAR_1) {
    FUNC_5(
     VAR_9,
     VAR_7->devs[VAR_8].addr,
     VAR_7->sectors, 0);
    FUNC_6(VAR_9, VAR_6->mddev);
   } else if (VAR_12 != ((void*)0) &&
       !FUNC_9(VAR_0, &VAR_12->bi_flags)) {
    if (!FUNC_2(VAR_7, VAR_8)) {
     FUNC_1(VAR_6->mddev, VAR_9);
     FUNC_8(VAR_2,
      &VAR_7->state);
    }
    FUNC_6(VAR_9, VAR_6->mddev);
   }
   VAR_12 = VAR_7->devs[VAR_8].repl_bio;
   VAR_9 = VAR_6->mirrors[VAR_11].replacement;
   if (VAR_9 && VAR_12 == VAR_1) {
    FUNC_5(
     VAR_9,
     VAR_7->devs[VAR_8].addr,
     VAR_7->sectors, 0);
    FUNC_6(VAR_9, VAR_6->mddev);
   }
  }
  if (FUNC_9(VAR_5,
        &VAR_7->state))
   FUNC_0(VAR_7);
  FUNC_4(VAR_7);
 }
}
