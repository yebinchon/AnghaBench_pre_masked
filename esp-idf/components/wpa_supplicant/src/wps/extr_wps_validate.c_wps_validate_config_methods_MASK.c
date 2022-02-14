
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_1, int VAR_2,
           int VAR_3)
{
 u16 VAR_4;

 if (VAR_1 == ((void*)0)) {
  if (VAR_3) {
   FUNC_2(VAR_0, "WPS-STRICT: Configuration "
       "Methods attribute missing");
   return -1;
  }
  return 0;
 }

 VAR_4 = FUNC_0(VAR_1);
 if (!FUNC_1(VAR_4, VAR_2)) {
  FUNC_2(VAR_0, "WPS-STRICT: Invalid Configuration "
      "Methods attribute value 0x%04x", VAR_4);
  return -1;
 }
 return 0;
}
