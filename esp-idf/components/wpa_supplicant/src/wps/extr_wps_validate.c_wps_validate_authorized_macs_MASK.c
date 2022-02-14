
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int const*,size_t) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_2, size_t VAR_3,
     int VAR_4)
{
 if (VAR_2 == ((void*)0)) {
  if (VAR_4) {
   FUNC_1(VAR_1, "WPS-STRICT: Authorized MACs "
       "attribute missing");
   return -1;
  }
  return 0;
 }
 if (VAR_3 > 30 && (VAR_3 % VAR_0) != 0) {
  FUNC_0(VAR_1, "WPS-STRICT: Invalid Authorized "
       "MACs attribute value", VAR_2, VAR_3);
  return -1;
 }
 return 0;
}
