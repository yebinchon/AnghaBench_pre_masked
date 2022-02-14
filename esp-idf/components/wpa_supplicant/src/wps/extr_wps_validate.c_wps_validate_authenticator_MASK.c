
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_1, int VAR_2)
{
 if (VAR_1 == ((void*)0)) {
  if (VAR_2) {
   FUNC_0(VAR_0, "WPS-STRICT: Authenticator "
       "attribute missing");
   return -1;
  }
  return 0;
 }
 return 0;
}
