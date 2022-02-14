
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int origin; } ;
struct bio {struct bio* bi_next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bio*) ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void FUNC_2(struct dm_snapshot *VAR_1, struct bio *VAR_2)
{
 struct bio *VAR_3;
 int VAR_4;

 while (VAR_2) {
  VAR_3 = VAR_2->bi_next;
  VAR_2->bi_next = ((void*)0);
  VAR_4 = FUNC_0(VAR_1->origin, VAR_2);
  if (VAR_4 == VAR_0)
   FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }
}
