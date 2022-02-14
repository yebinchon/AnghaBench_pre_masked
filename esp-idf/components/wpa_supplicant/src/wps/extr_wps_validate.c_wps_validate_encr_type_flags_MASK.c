
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_3, int VAR_4)
{
 u16 VAR_5;

 if (VAR_3 == ((void*)0)) {
  if (VAR_4) {
   FUNC_1(VAR_0, "WPS-STRICT: Encryption Type "
       "Flags attribute missing");
   return -1;
  }
  return 0;
 }
 VAR_5 = FUNC_0(VAR_3);
 if ((VAR_5 & ~VAR_2) || !(VAR_5 & VAR_1)) {
  FUNC_1(VAR_0, "WPS-STRICT: Invalid Encryption Type "
      "Flags attribute value 0x%04x", VAR_5);
  return -1;
 }
 return 0;
}
