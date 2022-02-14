
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,char const*,int) ;

int
FUNC_2(const char *VAR_9, const char *VAR_10)
{
 int VAR_11 = 1, VAR_12 = VAR_0;

 while (VAR_9) {
  int VAR_13 = FUNC_0(VAR_9, ",=");
  switch (VAR_9[VAR_13]) {
  case '=':
   if (FUNC_1(VAR_9, VAR_10, VAR_13))
    VAR_11 = 0;
   VAR_9++;
   break;
  default:
   if (VAR_11) {
    if (!FUNC_1(VAR_9, "fatal", VAR_13))
     VAR_12 = VAR_3;
    else if (!FUNC_1(VAR_9, "error", VAR_13))
     VAR_12 = VAR_2;
    else if (!FUNC_1(VAR_9, "warn", VAR_13))
     VAR_12 = VAR_8;
    else if (!FUNC_1(VAR_9, "info", VAR_13))
     VAR_12 = VAR_4;
    else if (!FUNC_1(VAR_9, "debug", VAR_13))
     VAR_12 = VAR_1;
    else if (!FUNC_1(VAR_9, "trace", VAR_13))
     VAR_12 = VAR_7;
    else if (!FUNC_1(VAR_9, "paranoia", VAR_13))
     VAR_12 = VAR_5;
    else if (!FUNC_1(VAR_9, "spam", VAR_13))
     VAR_12 = VAR_6;
   }

   if (VAR_9[VAR_13] != '\0') {
    VAR_9++;
    VAR_11 = 1;
    break;
   }

   return VAR_12;
  }
  VAR_9 += VAR_13;
 }

 return VAR_12;
}
