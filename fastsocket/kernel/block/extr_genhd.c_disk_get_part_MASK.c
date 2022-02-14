
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int dummy; } ;
struct gendisk {int part_tbl; } ;
struct disk_part_tbl {int len; int * part; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct hd_struct*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

struct hd_struct *FUNC_7(struct gendisk *VAR_0, int VAR_1)
{
 struct hd_struct *VAR_2 = ((void*)0);
 struct disk_part_tbl *VAR_3;

 if (FUNC_6(VAR_1 < 0))
  return ((void*)0);

 FUNC_4();

 VAR_3 = FUNC_3(VAR_0->part_tbl);
 if (FUNC_1(VAR_1 < VAR_3->len)) {
  VAR_2 = FUNC_3(VAR_3->part[VAR_1]);
  if (VAR_2)
   FUNC_0(FUNC_2(VAR_2));
 }

 FUNC_5();

 return VAR_2;
}
