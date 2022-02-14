
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int node_id; struct disk_part_tbl* part_tbl; } ;
struct disk_part_tbl {int len; int * part; int rcu_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (struct gendisk*,struct disk_part_tbl*) ;
 struct disk_part_tbl* FUNC_3 (size_t,int ,int ) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct gendisk *VAR_3, int VAR_4)
{
 struct disk_part_tbl *VAR_5 = VAR_3->part_tbl;
 struct disk_part_tbl *VAR_6;
 int VAR_7 = VAR_5 ? VAR_5->len : 0;
 int VAR_8 = VAR_4 + 1;
 size_t VAR_9;
 int VAR_10;


 if (FUNC_1(VAR_3) && VAR_8 > FUNC_1(VAR_3))
  return -VAR_0;

 if (VAR_8 <= VAR_7)
  return 0;

 VAR_9 = sizeof(*VAR_6) + VAR_8 * sizeof(VAR_6->part[0]);
 VAR_6 = FUNC_3(VAR_9, VAR_2, VAR_3->node_id);
 if (!VAR_6)
  return -VAR_1;

 FUNC_0(&VAR_6->rcu_head);
 VAR_6->len = VAR_8;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  FUNC_4(VAR_6->part[VAR_10], VAR_5->part[VAR_10]);

 FUNC_2(VAR_3, VAR_6);
 return 0;
}
