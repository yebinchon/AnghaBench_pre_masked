
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int dummy; } ;
struct gendisk {int part_tbl; } ;
struct disk_part_tbl {int * part; int len; int last_lookup; } ;
typedef int sector_t ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hd_struct*,int ) ;

int FUNC_2(struct gendisk *VAR_0, sector_t VAR_1, sector_t VAR_2,
   struct hd_struct **VAR_3, struct hd_struct **VAR_4)
{
 struct disk_part_tbl *VAR_5;
 struct hd_struct *VAR_6;
 int VAR_7 = 1;

 *VAR_3 = *VAR_4 = ((void*)0);

 VAR_5 = FUNC_0(VAR_0->part_tbl);
 VAR_6 = FUNC_0(VAR_5->last_lookup);

 do {
  if (VAR_6) {
   if (FUNC_1(VAR_6, VAR_1))
    *VAR_3 = VAR_6;
   if (FUNC_1(VAR_6, VAR_2))
    *VAR_4 = VAR_6;

   if (*VAR_3 && *VAR_4)

    return *VAR_3 == *VAR_4;
  }

  VAR_6 = FUNC_0(VAR_5->part[VAR_7]);
 } while (VAR_7++ < VAR_5->len);


 return *VAR_3 == *VAR_4;
}
