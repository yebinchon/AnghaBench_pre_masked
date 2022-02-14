
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {int device_lock; } ;
struct r1bio {int state; TYPE_1__* mddev; struct bio* master_bio; } ;
struct bio {scalar_t__ bi_phys_segments; int bi_flags; } ;
struct TYPE_2__ {struct r1conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r1conf*) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct r1bio *VAR_2)
{
 struct bio *VAR_3 = VAR_2->master_bio;
 int VAR_4;
 struct r1conf *VAR_5 = VAR_2->mddev->private;

 if (VAR_3->bi_phys_segments) {
  unsigned long VAR_6;
  FUNC_3(&VAR_5->device_lock, VAR_6);
  VAR_3->bi_phys_segments--;
  VAR_4 = (VAR_3->bi_phys_segments == 0);
  FUNC_4(&VAR_5->device_lock, VAR_6);
 } else
  VAR_4 = 1;

 if (!FUNC_5(VAR_1, &VAR_2->state))
  FUNC_2(VAR_0, &VAR_3->bi_flags);
 if (VAR_4) {
  FUNC_1(VAR_3, 0);




  FUNC_0(VAR_5);
 }
}
