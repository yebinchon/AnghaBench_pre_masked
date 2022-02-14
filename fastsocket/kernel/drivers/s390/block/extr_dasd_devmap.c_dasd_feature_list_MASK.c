
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
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_7, char **VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 VAR_11 = 0;
 if (*VAR_7 != '(') {
  *VAR_8 = VAR_7;
  return VAR_0;
 }
 VAR_7++;
 VAR_9 = 0;

 while (1) {
  for (VAR_10 = 0;
       VAR_7[VAR_10] && VAR_7[VAR_10] != ':' && VAR_7[VAR_10] != ')'; VAR_10++);
  if (VAR_10 == 2 && !FUNC_1(VAR_7, "ro", 2))
   VAR_9 |= VAR_3;
  else if (VAR_10 == 4 && !FUNC_1(VAR_7, "diag", 4))
   VAR_9 |= VAR_4;
  else if (VAR_10 == 3 && !FUNC_1(VAR_7, "raw", 3))
   VAR_9 |= VAR_5;
  else if (VAR_10 == 6 && !FUNC_1(VAR_7, "erplog", 6))
   VAR_9 |= VAR_1;
  else if (VAR_10 == 8 && !FUNC_1(VAR_7, "failfast", 8))
   VAR_9 |= VAR_2;
  else {
   FUNC_0("%*s is not a supported device option\n",
       VAR_10, VAR_7);
   VAR_11 = -VAR_6;
  }
  VAR_7 += VAR_10;
  if (*VAR_7 != ':')
   break;
  VAR_7++;
 }
 if (*VAR_7 != ')') {
  FUNC_0("A closing parenthesis ')' is missing in the "
      "dasd= parameter\n");
  VAR_11 = -VAR_6;
 } else
  VAR_7++;
 *VAR_8 = VAR_7;
 if (VAR_11 != 0)
  return VAR_11;
 return VAR_9;
}
