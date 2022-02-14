
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int * nr_queued; int * bio_lists; } ;
struct throtl_data {scalar_t__* nr_queued; } ;
struct bio_list {int dummy; } ;
struct bio {int bi_rw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bio_list*,struct bio*) ;
 struct bio* FUNC_2 (int *) ;
 int FUNC_3 (struct throtl_grp*,struct bio*) ;
 int FUNC_4 (struct throtl_grp*) ;
 int FUNC_5 (struct throtl_data*,struct throtl_grp*,int) ;

__attribute__((used)) static void FUNC_6(struct throtl_data *VAR_1, struct throtl_grp *VAR_2,
    bool VAR_3, struct bio_list *VAR_4)
{
 struct bio *VAR_5;

 VAR_5 = FUNC_2(&VAR_2->bio_lists[VAR_3]);
 VAR_2->nr_queued[VAR_3]--;

 FUNC_4(VAR_2);

 FUNC_0(VAR_1->nr_queued[VAR_3] <= 0);
 VAR_1->nr_queued[VAR_3]--;

 FUNC_3(VAR_2, VAR_5);
 FUNC_1(VAR_4, VAR_5);
 VAR_5->bi_rw |= (1 << VAR_0);

 FUNC_5(VAR_1, VAR_2, VAR_3);
}
