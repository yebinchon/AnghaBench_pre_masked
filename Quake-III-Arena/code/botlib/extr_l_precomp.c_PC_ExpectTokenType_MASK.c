
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int subtype; int string; } ;
typedef TYPE_1__ token_t ;
typedef int source_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

int FUNC_4(source_t *VAR_16, int VAR_17, int VAR_18, token_t *VAR_19)
{
 char VAR_20[VAR_0];

 if (!FUNC_0(VAR_16, VAR_19))
 {
  FUNC_1(VAR_16, "couldn't read expected token");
  return VAR_14;
 }

 if (VAR_19->type != VAR_17)
 {
  FUNC_3(VAR_20, "");
  if (VAR_17 == VAR_12) FUNC_3(VAR_20, "string");
  if (VAR_17 == VAR_6) FUNC_3(VAR_20, "literal");
  if (VAR_17 == VAR_9) FUNC_3(VAR_20, "number");
  if (VAR_17 == VAR_8) FUNC_3(VAR_20, "name");
  if (VAR_17 == VAR_11) FUNC_3(VAR_20, "punctuation");
  FUNC_1(VAR_16, "expected a %s, found %s", VAR_20, VAR_19->string);
  return VAR_14;
 }
 if (VAR_19->type == VAR_9)
 {
  if ((VAR_19->subtype & VAR_18) != VAR_18)
  {
   if (VAR_18 & VAR_2) FUNC_3(VAR_20, "decimal");
   if (VAR_18 & VAR_4) FUNC_3(VAR_20, "hex");
   if (VAR_18 & VAR_10) FUNC_3(VAR_20, "octal");
   if (VAR_18 & VAR_1) FUNC_3(VAR_20, "binary");
   if (VAR_18 & VAR_7) FUNC_2(VAR_20, " long");
   if (VAR_18 & VAR_13) FUNC_2(VAR_20, " unsigned");
   if (VAR_18 & VAR_3) FUNC_2(VAR_20, " float");
   if (VAR_18 & VAR_5) FUNC_2(VAR_20, " integer");
   FUNC_1(VAR_16, "expected %s, found %s", VAR_20, VAR_19->string);
   return VAR_14;
  }
 }
 else if (VAR_19->type == VAR_11)
 {
  if (VAR_19->subtype != VAR_18)
  {
   FUNC_1(VAR_16, "found %s", VAR_19->string);
   return VAR_14;
  }
 }
 return VAR_15;
}
