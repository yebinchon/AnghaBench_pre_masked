
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ ctime; int del_work; scalar_t__ gendisk; struct bio_set* bio_set; int all_mddevs; int hold_active; int disks; int raid_disks; int active; } ;
struct bio_set {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct bio_set*) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mddev *VAR_3)
{
 struct bio_set *VAR_4 = ((void*)0);

 if (!FUNC_1(&VAR_3->active, &VAR_0))
  return;
 if (!VAR_3->raid_disks && FUNC_5(&VAR_3->disks) &&
     VAR_3->ctime == 0 && !VAR_3->hold_active) {


  FUNC_4(&VAR_3->all_mddevs);
  VAR_4 = VAR_3->bio_set;
  VAR_3->bio_set = ((void*)0);
  if (VAR_3->gendisk) {





   FUNC_0(&VAR_3->del_work, VAR_2);
   FUNC_6(VAR_1, &VAR_3->del_work);
  } else
   FUNC_3(VAR_3);
 }
 FUNC_7(&VAR_0);
 if (VAR_4)
  FUNC_2(VAR_4);
}
