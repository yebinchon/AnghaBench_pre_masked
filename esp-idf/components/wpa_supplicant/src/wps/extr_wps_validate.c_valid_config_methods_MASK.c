
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(u16 VAR_3, int VAR_4)
{
 if (VAR_4) {
  if (!(VAR_3 & 0x6000) && (VAR_3 & VAR_1)) {
   FUNC_0(VAR_0, "WPS-STRICT: Display flag "
       "without Physical/Virtual Display flag");
   return 0;
  }
  if (!(VAR_3 & 0x0600) && (VAR_3 & VAR_2)) {
   FUNC_0(VAR_0, "WPS-STRICT: PushButton flag "
       "without Physical/Virtual PushButton flag");
   return 0;
  }
 }

 return 1;
}
