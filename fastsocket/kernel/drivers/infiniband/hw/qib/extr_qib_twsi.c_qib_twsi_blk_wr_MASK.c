
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct qib_devdata*,char*,int) ;
 int FUNC_2 (struct qib_devdata*,int,int ) ;
 int FUNC_3 (struct qib_devdata*,int) ;
 int FUNC_4 (struct qib_devdata*) ;

int FUNC_5(struct qib_devdata *VAR_4, int VAR_5, int VAR_6,
      const void *VAR_7, int VAR_8)
{
 int VAR_9;
 const u8 *VAR_10 = VAR_7;
 int VAR_11, VAR_12;
 int VAR_13;
 VAR_13 = 1;

 while (VAR_8 > 0) {
  if (VAR_5 == VAR_0) {
   if (FUNC_2(VAR_4, (VAR_6 << 1) | VAR_3,
     VAR_1)) {
    goto failed_write;
   }
  } else {

   if (FUNC_2(VAR_4, VAR_5 | VAR_3, VAR_1))
    goto failed_write;
   VAR_13 = FUNC_2(VAR_4, VAR_6, 0);
   if (VAR_13) {
    FUNC_1(VAR_4,
     "Failed to write interface write addr %02X\n",
     VAR_6);
    goto failed_write;
   }
  }

  VAR_9 = FUNC_0(VAR_8, 4);
  VAR_6 += VAR_9;
  VAR_8 -= VAR_9;

  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
   if (FUNC_2(VAR_4, *VAR_10++, 0))
    goto failed_write;

  FUNC_4(VAR_4);
  VAR_11 = 100;
  while (FUNC_2(VAR_4, VAR_5 | VAR_2, VAR_1)) {
   FUNC_4(VAR_4);
   if (!--VAR_11)
    goto failed_write;
  }

  FUNC_3(VAR_4, 1);
 }

 VAR_13 = 0;
 goto bail;

failed_write:
 FUNC_4(VAR_4);
 VAR_13 = 1;

bail:
 return VAR_13;
}
