
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_cell {int dummy; } ;
struct dm_bio_prison {int lock; } ;
struct bio_list {int dummy; } ;


 int FUNC_0 (struct dm_bio_prison_cell*,struct bio_list*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct dm_bio_prison *VAR_0,
       struct dm_bio_prison_cell *VAR_1,
       struct bio_list *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock, VAR_3);
}
