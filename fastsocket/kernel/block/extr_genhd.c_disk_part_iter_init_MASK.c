
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int part_tbl; } ;
struct disk_part_tbl {int len; } ;
struct disk_part_iter {int idx; unsigned int flags; int * part; struct gendisk* disk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct disk_part_tbl* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct disk_part_iter *VAR_3, struct gendisk *VAR_4,
     unsigned int VAR_5)
{
 struct disk_part_tbl *VAR_6;

 FUNC_1();
 VAR_6 = FUNC_0(VAR_4->part_tbl);

 VAR_3->disk = VAR_4;
 VAR_3->part = ((void*)0);

 if (VAR_5 & VAR_2)
  VAR_3->idx = VAR_6->len - 1;
 else if (VAR_5 & (VAR_1 | VAR_0))
  VAR_3->idx = 0;
 else
  VAR_3->idx = 1;

 VAR_3->flags = VAR_5;

 FUNC_2();
}
