
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct psmouse*,int) ;
 scalar_t__ FUNC_1 (struct psmouse*) ;
 scalar_t__ FUNC_2 (struct psmouse*,int) ;
 scalar_t__ FUNC_3 (struct psmouse*) ;
 scalar_t__ FUNC_4 (struct psmouse*,int) ;
 scalar_t__ FUNC_5 (struct psmouse*) ;
 scalar_t__ FUNC_6 (struct psmouse*,int) ;
 scalar_t__ FUNC_7 (struct psmouse*,int) ;
 scalar_t__ FUNC_8 (struct psmouse*) ;
 scalar_t__ FUNC_9 (struct psmouse*,int) ;
 scalar_t__ FUNC_10 (struct psmouse*,int) ;
 scalar_t__ FUNC_11 (struct psmouse*,int) ;
 scalar_t__ FUNC_12 (struct psmouse*) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (struct psmouse*,int) ;
 scalar_t__ FUNC_15 (struct psmouse*,int) ;
 int FUNC_16 (struct psmouse*) ;
 scalar_t__ FUNC_17 (struct psmouse*,int) ;
 scalar_t__ FUNC_18 (struct psmouse*) ;
 int FUNC_19 (struct psmouse*) ;
 scalar_t__ FUNC_20 () ;
 scalar_t__ FUNC_21 (struct psmouse*,int) ;
 scalar_t__ FUNC_22 (struct psmouse*,int) ;
 scalar_t__ FUNC_23 (struct psmouse*,int) ;

__attribute__((used)) static int FUNC_24(struct psmouse *VAR_15,
         unsigned int VAR_16, bool VAR_17)
{
 bool VAR_18 = 0;





 if (FUNC_11(VAR_15, VAR_17) == 0) {
  if (VAR_16 > VAR_6) {
   if (!VAR_17 || FUNC_12(VAR_15) == 0)
    return VAR_8;
  }
 }






 if (VAR_16 > VAR_6 && FUNC_21(VAR_15, VAR_17) == 0)
  return VAR_12;






 if (VAR_16 > VAR_9 && FUNC_17(VAR_15, VAR_17) == 0) {
  VAR_18 = 1;

  if (VAR_16 > VAR_6) {




   if (FUNC_20() &&
       (!VAR_17 || FUNC_18(VAR_15) == 0)) {
    return VAR_11;
   }






   VAR_16 = VAR_6;
  }



  FUNC_19(VAR_15);
 }




 if (VAR_16 > VAR_6) {
  FUNC_13(&VAR_15->ps2dev, ((void*)0), VAR_1);
  if (FUNC_0(VAR_15, VAR_17) == 0) {
   if (!VAR_17 || FUNC_1(VAR_15) == 0)
    return VAR_0;



   VAR_16 = VAR_6;
  }
 }




 if (VAR_16 > VAR_6 &&
   FUNC_7(VAR_15, VAR_17) == 0) {
  if (!VAR_17 || FUNC_8(VAR_15) == 0)
   return VAR_5;



  VAR_16 = VAR_6;
 }




 if (VAR_16 > VAR_6 &&
   FUNC_2(VAR_15, VAR_17) == 0) {
  if (!VAR_17 || FUNC_3(VAR_15) == 0)
   return VAR_2;



  VAR_16 = VAR_6;
 }


 if (VAR_16 > VAR_6) {
  if (FUNC_6(VAR_15, VAR_17) == 0)
   return VAR_4;

  if (FUNC_15(VAR_15, VAR_17) == 0)
   return VAR_10;

  if (FUNC_23(VAR_15, VAR_17) == 0)
   return VAR_14;

  if (FUNC_22(VAR_15, VAR_17) == 0)
   return VAR_13;
 }





 if (VAR_16 > VAR_6) {
  if (FUNC_4(VAR_15, VAR_17) == 0) {
   if (!VAR_17 || FUNC_5(VAR_15) == 0)
    return VAR_3;



   VAR_16 = VAR_6;
  }
 }






 FUNC_13(&VAR_15->ps2dev, ((void*)0), VAR_1);
 FUNC_16(VAR_15);

 if (VAR_16 >= VAR_6 && FUNC_9(VAR_15, VAR_17) == 0)
  return VAR_6;

 if (VAR_16 >= VAR_7 && FUNC_10(VAR_15, VAR_17) == 0)
  return VAR_7;





 FUNC_14(VAR_15, VAR_17);

 if (VAR_18) {






  FUNC_16(VAR_15);
 }

 return VAR_9;
}
