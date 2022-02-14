
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r10conf {int mddev; TYPE_2__* mirrors; } ;
struct r10bio {int read_slot; int remaining; int state; int sectors; struct bio* master_bio; TYPE_1__* mddev; } ;
struct bio {int bi_flags; struct r10bio* bi_private; } ;
struct TYPE_6__ {int corrected_errors; } ;
struct TYPE_5__ {TYPE_3__* rdev; } ;
struct TYPE_4__ {struct r10conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct r10conf*,struct r10bio*,struct bio*,int *,int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (struct r10bio*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct bio *VAR_3, int VAR_4)
{
 struct r10bio *VAR_5 = VAR_3->bi_private;
 struct r10conf *VAR_6 = VAR_5->mddev->private;
 int VAR_7;

 if (VAR_3 == VAR_5->master_bio) {

  VAR_7 = VAR_5->read_slot;
 } else
  VAR_7 = FUNC_2(VAR_6, VAR_5, VAR_3, ((void*)0), ((void*)0));

 if (FUNC_6(VAR_0, &VAR_3->bi_flags))
  FUNC_5(VAR_2, &VAR_5->state);
 else



  FUNC_0(VAR_5->sectors,
      &VAR_6->mirrors[VAR_7].rdev->corrected_errors);




 FUNC_3(VAR_6->mirrors[VAR_7].rdev, VAR_6->mddev);
 if (FUNC_6(VAR_1, &VAR_5->state) ||
     FUNC_1(&VAR_5->remaining)) {



  FUNC_4(VAR_5);
 }
}
