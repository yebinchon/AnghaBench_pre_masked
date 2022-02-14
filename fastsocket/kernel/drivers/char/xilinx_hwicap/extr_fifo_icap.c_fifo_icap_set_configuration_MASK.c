
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hwicap_drvdata {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct hwicap_drvdata*) ;
 int FUNC_2 (struct hwicap_drvdata*,scalar_t__) ;
 int FUNC_3 (struct hwicap_drvdata*) ;
 scalar_t__ FUNC_4 (struct hwicap_drvdata*) ;

int FUNC_5(struct hwicap_drvdata *VAR_3,
  u32 *VAR_4, u32 VAR_5)
{

 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 u32 VAR_8;

 FUNC_0(VAR_3->dev, "fifo_set_configuration\n");




 if (FUNC_1(VAR_3))
  return -VAR_0;




 VAR_8 = VAR_5;

 while (VAR_8 > 0) {



  while (VAR_6 == 0) {
   VAR_6 =
    FUNC_4(VAR_3);
   VAR_7++;
   if (VAR_7 > VAR_2)
    return -VAR_1;
  }




  while ((VAR_6 != 0) &&
    (VAR_8 > 0)) {
   FUNC_2(VAR_3, *VAR_4);

   VAR_8--;
   VAR_6--;
   VAR_4++;
  }

  FUNC_3(VAR_3);
 }


 while (FUNC_1(VAR_3)) {
  VAR_7++;
  if (VAR_7 > VAR_2)
   break;
 }

 FUNC_0(VAR_3->dev, "done fifo_set_configuration\n");





 if (VAR_8 != 0)
  return -VAR_1;

 return 0;
}
