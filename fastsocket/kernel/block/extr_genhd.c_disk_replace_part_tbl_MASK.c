
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct disk_part_tbl* part_tbl; } ;
struct disk_part_tbl {int rcu_head; struct disk_part_tbl* last_lookup; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct disk_part_tbl*,struct disk_part_tbl*) ;

__attribute__((used)) static void FUNC_2(struct gendisk *VAR_1,
      struct disk_part_tbl *VAR_2)
{
 struct disk_part_tbl *VAR_3 = VAR_1->part_tbl;

 FUNC_1(VAR_1->part_tbl, VAR_2);

 if (VAR_3) {
  FUNC_1(VAR_3->last_lookup, ((void*)0));
  FUNC_0(&VAR_3->rcu_head, VAR_0);
 }
}
