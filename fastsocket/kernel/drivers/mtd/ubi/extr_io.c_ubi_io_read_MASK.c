
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_device {int peb_count; int peb_size; TYPE_1__* mtd; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* read ) (TYPE_1__*,int,int,size_t*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int,int,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ubi_device const*,int) ;
 int FUNC_4 (TYPE_1__*,int,int,size_t*,void*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,int,int,int,int,size_t) ;
 int FUNC_9 () ;

int FUNC_10(const struct ubi_device *VAR_6, void *VAR_7, int VAR_8, int VAR_9,
  int VAR_10)
{
 int VAR_11, VAR_12 = 0;
 size_t VAR_13;
 loff_t VAR_14;

 FUNC_1("read %d bytes from PEB %d:%d", VAR_10, VAR_8, VAR_9);

 FUNC_5(VAR_8 >= 0 && VAR_8 < VAR_6->peb_count);
 FUNC_5(VAR_9 >= 0 && VAR_9 + VAR_10 <= VAR_6->peb_size);
 FUNC_5(VAR_10 > 0);

 VAR_11 = FUNC_3(VAR_6, VAR_8);
 if (VAR_11)
  return VAR_11 > 0 ? -VAR_1 : VAR_11;

 VAR_14 = (loff_t)VAR_8 * VAR_6->peb_size + VAR_9;
retry:
 VAR_11 = VAR_6->mtd->read(VAR_6->mtd, VAR_14, VAR_10, &VAR_13, VAR_7);
 if (VAR_11) {
  if (VAR_11 == -VAR_3) {
   FUNC_2("fixable bit-flip detected at PEB %d", VAR_8);
   FUNC_5(VAR_10 == VAR_13);
   return VAR_4;
  }

  if (VAR_13 != VAR_10 && VAR_12++ < VAR_5) {
   FUNC_1("error %d while reading %d bytes from PEB %d:%d,"
          " read only %zd bytes, retry",
          VAR_11, VAR_10, VAR_8, VAR_9, VAR_13);
   FUNC_9();
   goto retry;
  }

  FUNC_8("error %d while reading %d bytes from PEB %d:%d, "
   "read %zd bytes", VAR_11, VAR_10, VAR_8, VAR_9, VAR_13);
  FUNC_6();






  if (VAR_13 != VAR_10 && VAR_11 == -VAR_0) {
   FUNC_5(0);
   VAR_11 = -VAR_2;
  }
 } else {
  FUNC_5(VAR_10 == VAR_13);

  if (FUNC_7()) {
   FUNC_0("bit-flip (emulated)");
   VAR_11 = VAR_4;
  }
 }

 return VAR_11;
}
