
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_device {int peb_count; int peb_size; int hdrs_min_io_size; int leb_start; TYPE_1__* mtd; scalar_t__ ro_mode; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* write ) (TYPE_1__*,int,int,size_t*,void const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (struct ubi_device*,int) ;
 int FUNC_3 (struct ubi_device*,int) ;
 int FUNC_4 (struct ubi_device*,int) ;
 int FUNC_5 (TYPE_1__*,int,int,size_t*,void const*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ubi_device*,int,int,int) ;
 int FUNC_8 (struct ubi_device*,int,int,int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (char*,...) ;

int FUNC_12(struct ubi_device *VAR_3, const void *VAR_4, int VAR_5, int VAR_6,
   int VAR_7)
{
 int VAR_8;
 size_t VAR_9;
 loff_t VAR_10;

 FUNC_1("write %d bytes to PEB %d:%d", VAR_7, VAR_5, VAR_6);

 FUNC_6(VAR_5 >= 0 && VAR_5 < VAR_3->peb_count);
 FUNC_6(VAR_6 >= 0 && VAR_6 + VAR_7 <= VAR_3->peb_size);
 FUNC_6(VAR_6 % VAR_3->hdrs_min_io_size == 0);
 FUNC_6(VAR_7 > 0 && VAR_7 % VAR_3->hdrs_min_io_size == 0);

 if (VAR_3->ro_mode) {
  FUNC_11("read-only mode");
  return -VAR_2;
 }



 VAR_8 = FUNC_2(VAR_3, VAR_5);
 if (VAR_8)
  return VAR_8 > 0 ? -VAR_0 : VAR_8;


 VAR_8 = FUNC_7(VAR_3, VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8 > 0 ? -VAR_0 : VAR_8;

 if (VAR_6 >= VAR_3->leb_start) {




  VAR_8 = FUNC_3(VAR_3, VAR_5);
  if (VAR_8)
   return VAR_8 > 0 ? -VAR_0 : VAR_8;
  VAR_8 = FUNC_4(VAR_3, VAR_5);
  if (VAR_8)
   return VAR_8 > 0 ? -VAR_0 : VAR_8;
 }

 if (FUNC_10()) {
  FUNC_0("cannot write %d bytes to PEB %d:%d "
   "(emulated)", VAR_7, VAR_5, VAR_6);
  FUNC_9();
  return -VAR_1;
 }

 VAR_10 = (loff_t)VAR_5 * VAR_3->peb_size + VAR_6;
 VAR_8 = VAR_3->mtd->write(VAR_3->mtd, VAR_10, VAR_7, &VAR_9, VAR_4);
 if (VAR_8) {
  FUNC_11("error %d while writing %d bytes to PEB %d:%d, written "
   "%zd bytes", VAR_8, VAR_7, VAR_5, VAR_6, VAR_9);
  FUNC_9();
  FUNC_8(VAR_3, VAR_5, VAR_6, VAR_7);
 } else
  FUNC_6(VAR_9 == VAR_7);

 return VAR_8;
}
