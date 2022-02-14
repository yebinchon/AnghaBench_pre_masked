
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct substring {char* string; scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct substring,struct substring,int) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(struct substring VAR_2, u_int8_t VAR_3, char *VAR_4, u_int8_t VAR_5)
{
 if (VAR_2.string == ((void*)0) || VAR_4 == ((void*)0)) {
  return (VAR_2.string == VAR_4);
 }

 struct substring VAR_6;
 VAR_6.string = VAR_4;
 VAR_6.length = FUNC_1(VAR_4);

 if (VAR_3 == VAR_5) {

  if (VAR_2.length == VAR_6.length &&
   FUNC_2(VAR_2.string, VAR_6.string, VAR_2.length) == 0) {
   return (VAR_1);
  }
 } else if (VAR_5 < VAR_3) {
  if (FUNC_0(VAR_2, VAR_6, VAR_1)) {
   return (VAR_1);
  }
 }

 return (VAR_0);
}
