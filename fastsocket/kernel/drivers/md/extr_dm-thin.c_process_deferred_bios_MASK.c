
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int dummy; } ;
struct bio_list {int dummy; } ;
struct pool {int last_commit_jiffies; int pmd; int lock; struct bio_list deferred_flush_bios; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio_list*) ;
 int FUNC_2 (struct bio_list*) ;
 int FUNC_3 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_4 (struct bio_list*) ;
 scalar_t__ FUNC_5 (struct pool*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct bio*) ;
 struct thin_c* FUNC_8 (struct pool*) ;
 struct thin_c* FUNC_9 (struct pool*,struct thin_c*) ;
 int VAR_0 ;
 scalar_t__ FUNC_10 (struct pool*) ;
 int FUNC_11 (struct thin_c*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_14(struct pool *VAR_1)
{
 unsigned long VAR_2;
 struct bio *VAR_3;
 struct bio_list VAR_4;
 struct thin_c *VAR_5;

 VAR_5 = FUNC_8(VAR_1);
 while (VAR_5) {
  FUNC_11(VAR_5);
  VAR_5 = FUNC_9(VAR_1, VAR_5);
 }





 FUNC_2(&VAR_4);
 FUNC_12(&VAR_1->lock, VAR_2);
 FUNC_3(&VAR_4, &VAR_1->deferred_flush_bios);
 FUNC_2(&VAR_1->deferred_flush_bios);
 FUNC_13(&VAR_1->lock, VAR_2);

 if (FUNC_1(&VAR_4) &&
     !(FUNC_6(VAR_1->pmd) && FUNC_10(VAR_1)))
  return;

 if (FUNC_5(VAR_1)) {
  while ((VAR_3 = FUNC_4(&VAR_4)))
   FUNC_0(VAR_3);
  return;
 }
 VAR_1->last_commit_jiffies = VAR_0;

 while ((VAR_3 = FUNC_4(&VAR_4)))
  FUNC_7(VAR_3);
}
