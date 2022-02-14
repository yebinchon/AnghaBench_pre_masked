
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int sb_wait; int pending_writes; } ;
struct md_rdev {struct mddev* mddev; } ;
struct bio {int bi_flags; struct md_rdev* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct mddev*,struct md_rdev*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct bio *VAR_1, int VAR_2)
{
 struct md_rdev *VAR_3 = VAR_1->bi_private;
 struct mddev *VAR_4 = VAR_3->mddev;

 if (VAR_2 || !FUNC_5(VAR_0, &VAR_1->bi_flags)) {
  FUNC_4("md: super_written gets error=%d, uptodate=%d\n",
         VAR_2, FUNC_5(VAR_0, &VAR_1->bi_flags));
  FUNC_0(FUNC_5(VAR_0, &VAR_1->bi_flags));
  FUNC_3(VAR_4, VAR_3);
 }

 if (FUNC_1(&VAR_4->pending_writes))
  FUNC_6(&VAR_4->sb_wait);
 FUNC_2(VAR_1);
}
