
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_2__ {int confirm_save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 TYPE_1__ VAR_13 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,char*) ;
 int VAR_14 ;
 char* FUNC_3 (int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*) ;
 int * VAR_15 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (char*,int,char*,char const*) ;
 int VAR_16 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(unsigned int VAR_17)
{
 if (VAR_17 & (VAR_8|VAR_9))
 {
  int VAR_18 = 1;
  if ( FUNC_0(VAR_16, ((void*)0)) &&
   (((VAR_17 & VAR_8) && (VAR_13.confirm_save & VAR_0)) ||
    ((VAR_17 & VAR_9) && (VAR_13.confirm_save & VAR_1))) )
  {
   const char *VAR_19;
   char VAR_20[64];
   int VAR_21, VAR_22;

   FUNC_9(VAR_20, (VAR_17 & VAR_8) ? "LOAD STATE? " : "OVERWRITE SAVE? ");
   VAR_22 = FUNC_10(VAR_20);
   VAR_19 = FUNC_3(-1, -VAR_4);
   FUNC_8(VAR_20 + VAR_22, sizeof(VAR_20) - VAR_22, "(%s=yes, ", VAR_19);
   VAR_22 = FUNC_10(VAR_20);
   VAR_19 = FUNC_3(-1, -VAR_3);
   FUNC_8(VAR_20 + VAR_22, sizeof(VAR_20) - VAR_22, "%s=no)", VAR_19);

   FUNC_6(VAR_20);

   FUNC_5(0, VAR_2, 1);
   while (FUNC_4(((void*)0), 50) & (VAR_4 | VAR_3))
    ;
   while ( !((VAR_21 = FUNC_4(((void*)0), 50)) & (VAR_4 | VAR_3)))
    ;
   if (VAR_21 & VAR_3)
    VAR_18 = 0;
   while (FUNC_4(((void*)0), 50) & (VAR_4 | VAR_3))
    ;
   FUNC_5(0, VAR_2, 0);
  }
  if (VAR_18) {
   FUNC_6((VAR_17 & VAR_8) ? "LOADING STATE" : "SAVING STATE");
   VAR_12 = VAR_15;
   FUNC_1((VAR_17 & VAR_8) ? 1 : 0, 0);
   VAR_12 = ((void*)0);
  }
 }
 if (VAR_17 & VAR_10)
 {
  FUNC_7(1, 0);
 }
 if (VAR_17 & (VAR_7|VAR_6))
 {
  if (VAR_17 & VAR_7) {
   VAR_16 -= 1;
   if (VAR_16 < 0)
    VAR_16 = 9;
  } else {
   VAR_16 += 1;
   if (VAR_16 > 9)
    VAR_16 = 0;
  }

  FUNC_2("SAVE SLOT %i [%s]", VAR_16,
   FUNC_0(VAR_16, ((void*)0)) ? "USED" : "FREE");
 }
 if (VAR_17 & VAR_5)
  VAR_14 = VAR_11;
}
