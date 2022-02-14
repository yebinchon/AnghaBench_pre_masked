
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int *,int ,int ) ;
 int VAR_3 ;

boolean_t
FUNC_1(char *VAR_4, int64_t *VAR_5, int64_t *VAR_6)
{
 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
  return VAR_0;
 }

 if (VAR_1 != FUNC_0(VAR_4, VAR_5, VAR_3, VAR_2)) {
  return VAR_0;
 }

 while (*VAR_4 != '\0') {
  if (*VAR_4 == '_') {
   break;
  }
  VAR_4++;
 }

 if (*VAR_4 == '_') {
  VAR_4++;
  if (VAR_1 != FUNC_0(VAR_4, VAR_6, VAR_3, VAR_2)) {
   return VAR_0;
  }
 } else {
  return VAR_0;
 }
 return VAR_2;
}
