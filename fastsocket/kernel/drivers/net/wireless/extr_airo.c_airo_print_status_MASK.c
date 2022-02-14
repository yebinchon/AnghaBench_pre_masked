
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
 int FUNC_0 (char const*,char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, u16 VAR_1)
{
 u8 VAR_2 = VAR_1 & 0xFF;

 switch (VAR_1) {
 case 129:
  FUNC_0(VAR_0, "link lost (missed beacons)");
  break;
 case 130:
 case 131:
  FUNC_0(VAR_0, "link lost (max retries)");
  break;
 case 132:
  FUNC_0(VAR_0, "link lost (local choice)");
  break;
 case 128:
  FUNC_0(VAR_0, "link lost (TSF sync lost)");
  break;
 case 134:
  FUNC_0(VAR_0, "deauthenticated (reason: %d)", VAR_2);
  break;
 case 133:
  FUNC_0(VAR_0, "disassociated (reason: %d)", VAR_2);
  break;
 case 136:
  FUNC_0(VAR_0, "association failed (reason: %d)",
          VAR_2);
  break;
 case 135:
  FUNC_0(VAR_0, "authentication failed (reason: %d)",
          VAR_2);
  break;
 default:
  break;
 }
}
