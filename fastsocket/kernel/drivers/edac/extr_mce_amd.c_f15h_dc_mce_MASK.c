
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static bool FUNC_3(u16 VAR_0, u8 VAR_1)
{
 bool VAR_2 = 1;

 if (FUNC_1(VAR_0)) {

  switch (VAR_1) {
  case 0x0:
   FUNC_2("Data Array access error.\n");
   break;

  case 0x1:
   FUNC_2("UC error during a linefill from L2/NB.\n");
   break;

  case 0x2:
  case 0x11:
   FUNC_2("STQ access error.\n");
   break;

  case 0x3:
   FUNC_2("SCB access error.\n");
   break;

  case 0x10:
   FUNC_2("Tag error.\n");
   break;

  case 0x12:
   FUNC_2("LDQ access error.\n");
   break;

  default:
   VAR_2 = 0;
  }
 } else if (FUNC_0(VAR_0)) {

  if (!VAR_1)
   FUNC_2("during system linefill.\n");
  else
   FUNC_2(" Internal %s condition.\n",
    ((VAR_1 == 1) ? "livelock" : "deadlock"));
 } else
  VAR_2 = 0;

 return VAR_2;
}
