
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_2, size_t VAR_3,
        const u8 *VAR_4, int VAR_5)
{
 if (VAR_2 == ((void*)0)) {
  if (VAR_5) {
   FUNC_2(VAR_0, "WPS-STRICT: Network Key "
       "attribute missing");
   return -1;
  }
  return 0;
 }
 if (((VAR_4 == ((void*)0) || FUNC_0(VAR_4) != VAR_1) &&
      VAR_3 > 8 && VAR_3 < 64 && VAR_2[VAR_3 - 1] == 0) ||
     VAR_3 > 64) {
  FUNC_1(VAR_0, "WPS-STRICT: Invalid Network "
          "Key attribute value", VAR_2, VAR_3);
  return -1;
 }
 return 0;
}
