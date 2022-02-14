
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hwicap_drvdata {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct hwicap_drvdata*) ;
 int FUNC_2 (struct hwicap_drvdata*) ;
 scalar_t__ FUNC_3 (struct hwicap_drvdata*) ;
 int FUNC_4 (struct hwicap_drvdata*,scalar_t__) ;
 int FUNC_5 (struct hwicap_drvdata*) ;

int FUNC_6(struct hwicap_drvdata *VAR_4,
  u32 *VAR_5, u32 VAR_6)
{

 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 *VAR_9 = VAR_5;
 u32 VAR_10;
 u32 VAR_11;

 FUNC_0(VAR_4->dev, "fifo_get_configuration\n");




 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_10 = VAR_6;

 while (VAR_10 > 0) {
  VAR_11 = VAR_10;


  if (VAR_11 > VAR_2)
   VAR_11 = VAR_2;

  VAR_10 -= VAR_11;

  FUNC_4(VAR_4, VAR_11);
  FUNC_5(VAR_4);

  while (VAR_11 > 0) {

   while (VAR_7 == 0) {
    VAR_7 =
     FUNC_3(VAR_4);
    VAR_8++;
    if (VAR_8 > VAR_3)
     return -VAR_1;
   }

   if (VAR_7 > VAR_11)
    VAR_7 = VAR_11;

   VAR_11 -= VAR_7;


   while (VAR_7 != 0) {
    *VAR_9++ = FUNC_2(VAR_4);
    VAR_7--;
   }
  }
 }

 FUNC_0(VAR_4->dev, "done fifo_get_configuration\n");

 return 0;
}
