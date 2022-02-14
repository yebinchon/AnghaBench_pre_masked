
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(
 char *VAR_2,
 const char *VAR_3,
 int VAR_4)
{
 int VAR_5 = 0;
 boolean_t VAR_6 = VAR_0;
 int VAR_7 = 0;

 if (VAR_4 <= 0 || VAR_2 == ((void*)0)) {
  return 0;
 }

 if (VAR_3 == ((void*)0)) {
  VAR_6 = VAR_1;
 }

 for (VAR_5 = 1; VAR_5 < VAR_4; VAR_5++) {
  if (!VAR_6) {
   if (!(*VAR_2++ = *VAR_3++)) {
    VAR_7 = VAR_5;
    VAR_6 = VAR_1;
   }
  } else {
   *VAR_2++ = '\0';
  }
 }

 *VAR_2 = '\0';
 if (!VAR_6) {
  VAR_7 = VAR_5;
 }

 return VAR_7;
}
