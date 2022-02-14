
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int dummy; } ;
struct gendisk {struct hd_struct part0; int part_tbl; } ;
struct disk_part_tbl {int len; int last_lookup; int * part; } ;
typedef int sector_t ;


 int FUNC_0 (int ,struct hd_struct*) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct hd_struct*,int ) ;

struct hd_struct *FUNC_3(struct gendisk *VAR_0, sector_t VAR_1)
{
 struct disk_part_tbl *VAR_2;
 struct hd_struct *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1(VAR_0->part_tbl);

 VAR_3 = FUNC_1(VAR_2->last_lookup);
 if (VAR_3 && FUNC_2(VAR_3, VAR_1))
  return VAR_3;

 for (VAR_4 = 1; VAR_4 < VAR_2->len; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2->part[VAR_4]);

  if (VAR_3 && FUNC_2(VAR_3, VAR_1)) {
   FUNC_0(VAR_2->last_lookup, VAR_3);
   return VAR_3;
  }
 }
 return &VAR_0->part0;
}
