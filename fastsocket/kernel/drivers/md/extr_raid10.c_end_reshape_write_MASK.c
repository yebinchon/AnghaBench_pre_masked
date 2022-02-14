
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {TYPE_1__* mirrors; } ;
struct r10bio {struct mddev* mddev; } ;
struct mddev {struct r10conf* private; } ;
struct md_rdev {int dummy; } ;
struct bio {struct r10bio* bi_private; int bi_flags; } ;
struct TYPE_2__ {struct md_rdev* rdev; struct md_rdev* replacement; } ;


 int VAR_0 ;
 int FUNC_0 (struct r10bio*) ;
 int FUNC_1 (struct r10conf*,struct r10bio*,struct bio*,int*,int*) ;
 int FUNC_2 (struct mddev*,struct md_rdev*) ;
 int FUNC_3 (struct md_rdev*,struct mddev*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_5(VAR_0, &VAR_1->bi_flags);
 struct r10bio *VAR_4 = VAR_1->bi_private;
 struct mddev *VAR_5 = VAR_4->mddev;
 struct r10conf *VAR_6 = VAR_5->private;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 struct md_rdev *VAR_10 = ((void*)0);

 VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_1, &VAR_8, &VAR_9);
 if (VAR_9)
  VAR_10 = VAR_6->mirrors[VAR_7].replacement;
 if (!VAR_10) {
  FUNC_4();
  VAR_10 = VAR_6->mirrors[VAR_7].rdev;
 }

 if (!VAR_3) {

  FUNC_2(VAR_5, VAR_10);
 }

 FUNC_3(VAR_10, VAR_5);
 FUNC_0(VAR_4);
}
