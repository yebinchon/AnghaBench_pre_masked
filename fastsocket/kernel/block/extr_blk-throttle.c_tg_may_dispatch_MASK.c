
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int* bps; int* iops; int * slice_end; int * bio_lists; scalar_t__* nr_queued; } ;
struct throtl_data {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bio*) ;
 struct bio* FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (struct throtl_data*,struct throtl_grp*,struct bio*,unsigned long*) ;
 scalar_t__ FUNC_5 (struct throtl_data*,struct throtl_grp*,struct bio*,unsigned long*) ;
 int FUNC_6 (struct throtl_data*,struct throtl_grp*,int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (struct throtl_data*,struct throtl_grp*,int) ;
 int FUNC_8 (struct throtl_data*,struct throtl_grp*,int) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_10(struct throtl_data *VAR_2, struct throtl_grp *VAR_3,
    struct bio *VAR_4, unsigned long *VAR_5)
{
 bool VAR_6 = FUNC_1(VAR_4);
 unsigned long VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;







 FUNC_0(VAR_3->nr_queued[VAR_6] && VAR_4 != FUNC_2(&VAR_3->bio_lists[VAR_6]));


 if (VAR_3->bps[VAR_6] == -1 && VAR_3->iops[VAR_6] == -1) {
  if (VAR_5)
   *VAR_5 = 0;
  return 1;
 }






 if (FUNC_7(VAR_2, VAR_3, VAR_6))
  FUNC_8(VAR_2, VAR_3, VAR_6);
 else {
  if (FUNC_9(VAR_3->slice_end[VAR_6], VAR_0 + VAR_1))
   FUNC_6(VAR_2, VAR_3, VAR_6, VAR_0 + VAR_1);
 }

 if (FUNC_4(VAR_2, VAR_3, VAR_4, &VAR_7)
     && FUNC_5(VAR_2, VAR_3, VAR_4, &VAR_8)) {
  if (VAR_5)
   *VAR_5 = 0;
  return 1;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_8);

 if (VAR_5)
  *VAR_5 = VAR_9;

 if (FUNC_9(VAR_3->slice_end[VAR_6], VAR_0 + VAR_9))
  FUNC_6(VAR_2, VAR_3, VAR_6, VAR_0 + VAR_9);

 return 0;
}
