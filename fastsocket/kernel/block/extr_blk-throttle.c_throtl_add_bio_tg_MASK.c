
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int * nr_queued; int * bio_lists; } ;
struct throtl_data {int * nr_queued; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (struct throtl_data*,struct throtl_grp*) ;
 int FUNC_3 (struct throtl_grp*) ;

__attribute__((used)) static void FUNC_4(struct throtl_data *VAR_0, struct throtl_grp *VAR_1,
   struct bio *VAR_2)
{
 bool VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_1->bio_lists[VAR_3], VAR_2);

 FUNC_3(VAR_1);
 VAR_1->nr_queued[VAR_3]++;
 VAR_0->nr_queued[VAR_3]++;
 FUNC_2(VAR_0, VAR_1);
}
