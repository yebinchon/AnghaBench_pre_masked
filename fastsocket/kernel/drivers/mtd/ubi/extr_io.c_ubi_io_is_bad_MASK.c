
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int peb_count; int peb_size; scalar_t__ bad_allowed; struct mtd_info* mtd; } ;
struct mtd_info {int (* block_isbad ) (struct mtd_info*,int) ;} ;
typedef int loff_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct mtd_info*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;

int FUNC_4(const struct ubi_device *VAR_0, int VAR_1)
{
 struct mtd_info *VAR_2 = VAR_0->mtd;

 FUNC_2(VAR_1 >= 0 && VAR_1 < VAR_0->peb_count);

 if (VAR_0->bad_allowed) {
  int VAR_3;

  VAR_3 = VAR_2->block_isbad(VAR_2, (loff_t)VAR_1 * VAR_0->peb_size);
  if (VAR_3 < 0)
   FUNC_3("error %d while checking if PEB %d is bad",
    VAR_3, VAR_1);
  else if (VAR_3)
   FUNC_0("PEB %d is bad", VAR_1);
  return VAR_3;
 }

 return 0;
}
