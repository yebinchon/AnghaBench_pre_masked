
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int dummy; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio_list*) ;
 struct bio* FUNC_2 (struct bio_list*) ;
 int FUNC_3 (struct pool*,struct dm_bio_prison_cell*) ;
 int FUNC_4 (struct pool*,struct dm_bio_prison_cell*,struct bio_list*) ;
 int FUNC_5 (struct bio*) ;
 scalar_t__ FUNC_6 (struct pool*) ;

__attribute__((used)) static void FUNC_7(struct pool *VAR_0, struct dm_bio_prison_cell *VAR_1)
{
 struct bio *VAR_2;
 struct bio_list VAR_3;

 if (FUNC_6(VAR_0)) {
  FUNC_3(VAR_0, VAR_1);
  return;
 }

 FUNC_1(&VAR_3);
 FUNC_4(VAR_0, VAR_1, &VAR_3);

 if (FUNC_6(VAR_0))
  while ((VAR_2 = FUNC_2(&VAR_3)))
   FUNC_0(VAR_2);
 else
  while ((VAR_2 = FUNC_2(&VAR_3)))
   FUNC_5(VAR_2);
}
