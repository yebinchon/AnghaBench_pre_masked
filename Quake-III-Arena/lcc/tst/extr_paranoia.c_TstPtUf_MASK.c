
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,char*) ;
 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (double) ;
 int VAR_2 ;
 double VAR_3 ;
 int FUNC_2 () ;
 double VAR_4 ;
 int VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 size_t VAR_8 ;
 double VAR_9 ;
 int VAR_10 ;
 double VAR_11 ;
 double VAR_12 ;
 double VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

FUNC_5()
{
 VAR_2 = 0;
 if (VAR_12 != VAR_13) {
  FUNC_3("Since comparison denies Z = 0, evaluating ");
  FUNC_3("(Z + Z) / Z should be safe.\n");
  VAR_16 = VAR_15;
  if (FUNC_4(VAR_14)) goto very_serious;
  VAR_4 = (VAR_12 + VAR_12) / VAR_12;
  FUNC_3("What the machine gets for (Z + Z) / Z is  %.17e .\n",
   VAR_4);
  if (FUNC_1(VAR_4 - VAR_9) < VAR_5 * VAR_10) {
   FUNC_3("This is O.K., provided Over/Underflow");
   FUNC_3(" has NOT just been signaled.\n");
   }
  else {
   if ((VAR_4 < VAR_3) || (VAR_4 > VAR_9)) {
very_serious:
    VAR_2 = 1;
    VAR_1 [VAR_8] = VAR_1 [VAR_8] + 1;
    FUNC_3("This is a VERY SERIOUS DEFECT!\n");
    }
   else {
    VAR_2 = 1;
    VAR_1 [VAR_0] = VAR_1 [VAR_0] + 1;
    FUNC_3("This is a DEFECT!\n");
    }
   }
  VAR_16 = 0;
  VAR_11 = VAR_12 * VAR_3;
  VAR_6 = VAR_11;
  VAR_11 = VAR_3 * VAR_12;
  VAR_7 = VAR_11;
  VAR_11 = VAR_12 / VAR_3;
  if ((VAR_12 == VAR_6) && (VAR_12 == VAR_7) && (VAR_12 == VAR_11)) {
   if (VAR_2 > 0) FUNC_2();
   }
  else {
   VAR_2 = 1;
   FUNC_0(VAR_0, "What prints as Z = ");
   FUNC_3("%.17e\n\tcompares different from  ", VAR_12);
   if (VAR_12 != VAR_6) FUNC_3("Z * 1 = %.17e ", VAR_6);
   if (! ((VAR_12 == VAR_7)
    || (VAR_7 == VAR_6)))
    FUNC_3("1 * Z == %g\n", VAR_7);
   if (! (VAR_12 == VAR_11)) FUNC_3("Z / 1 = %.17e\n", VAR_11);
   if (VAR_7 != VAR_6) {
    VAR_1 [VAR_0] = VAR_1 [VAR_0] + 1;
    FUNC_0(VAR_0, "Multiplication does not commute!\n");
    FUNC_3("\tComparison alleges that 1 * Z = %.17e\n",
     VAR_7);
    FUNC_3("\tdiffers from Z * 1 = %.17e\n", VAR_6);
    }
   FUNC_2();
   }
  }
 }
