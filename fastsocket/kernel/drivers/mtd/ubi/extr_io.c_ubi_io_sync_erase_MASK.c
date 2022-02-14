
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int peb_count; scalar_t__ nor_flash; scalar_t__ ro_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubi_device*,int) ;
 int FUNC_1 (struct ubi_device*,int) ;
 int FUNC_2 (struct ubi_device*,int) ;
 int FUNC_3 (struct ubi_device*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct ubi_device *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;

 FUNC_4(VAR_3 >= 0 && VAR_3 < VAR_2->peb_count);

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5 != 0)
  return VAR_5 > 0 ? -VAR_0 : VAR_5;

 if (VAR_2->ro_mode) {
  FUNC_5("read-only mode");
  return -VAR_1;
 }

 if (VAR_2->nor_flash) {
  VAR_5 = FUNC_1(VAR_2, VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 if (VAR_4) {
  VAR_6 = FUNC_3(VAR_2, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
 }

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 return VAR_6 + 1;
}
