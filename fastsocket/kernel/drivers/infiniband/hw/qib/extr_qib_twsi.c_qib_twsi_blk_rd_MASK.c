
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
 int VAR_4 ;
 int FUNC_0 (struct qib_devdata*,char*,int) ;
 int FUNC_1 (struct qib_devdata*,int,int ) ;
 int FUNC_2 (struct qib_devdata*,int) ;
 int FUNC_3 (struct qib_devdata*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct qib_devdata *VAR_5, int VAR_6, int VAR_7,
      void *VAR_8, int VAR_9)
{
 int VAR_10;
 u8 *VAR_11 = VAR_8;

 VAR_10 = 1;

 if (VAR_6 == VAR_0) {

  VAR_7 = (VAR_7 << 1) | VAR_2;
  VAR_10 = FUNC_1(VAR_5, VAR_7, VAR_1);
 } else {

  VAR_10 = FUNC_1(VAR_5, VAR_6 | VAR_4, VAR_1);
  if (VAR_10) {
   FUNC_3(VAR_5);
   VAR_10 = 1;
   goto bail;
  }







  VAR_10 = FUNC_1(VAR_5, VAR_7, 0);
  FUNC_4(VAR_3);

  if (VAR_10) {
   FUNC_0(VAR_5,
    "Failed to write interface read addr %02X\n",
    VAR_7);
   VAR_10 = 1;
   goto bail;
  }
  VAR_10 = FUNC_1(VAR_5, VAR_6 | VAR_2, VAR_1);
 }
 if (VAR_10) {
  FUNC_3(VAR_5);
  VAR_10 = 1;
  goto bail;
 }
 while (VAR_9-- > 0) {




  *VAR_11++ = FUNC_2(VAR_5, !VAR_9);
 }

 VAR_10 = 0;

bail:
 return VAR_10;
}
