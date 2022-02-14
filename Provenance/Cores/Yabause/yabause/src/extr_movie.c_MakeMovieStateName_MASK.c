
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Status; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t const) ;
 int FUNC_2 (char*,char*,char const*) ;
 int FUNC_3 (char const*) ;

const char *FUNC_4(const char *VAR_3) {

 static char *VAR_4 = ((void*)0);
 if(VAR_0.Status == VAR_2 || VAR_0.Status == VAR_1) {
  const size_t VAR_5 = FUNC_3(VAR_3) + 5 + 1;
  FUNC_0(VAR_4);
  VAR_4 = FUNC_1(VAR_5);
  if (!VAR_4) {
   return ((void*)0);
  }
  FUNC_2(VAR_4, "%smovie", VAR_3);
  return VAR_4;
 } else {
  return VAR_3;
 }

}
