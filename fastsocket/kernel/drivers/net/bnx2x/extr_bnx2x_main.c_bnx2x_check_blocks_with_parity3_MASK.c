
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;






 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(u32 VAR_0, int VAR_1,
        bool *VAR_2, bool VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5 = 0;
 for (VAR_4 = 0; VAR_0; VAR_4++) {
  VAR_5 = ((u32)0x1 << VAR_4);
  if (VAR_0 & VAR_5) {
   switch (VAR_5) {
   case 131:
    if (VAR_3)
     FUNC_0(VAR_1++, "MCP ROM");
    *VAR_2 = 1;
    break;
   case 129:
    if (VAR_3)
     FUNC_0(VAR_1++,
         "MCP UMP RX");
    *VAR_2 = 1;
    break;
   case 128:
    if (VAR_3)
     FUNC_0(VAR_1++,
         "MCP UMP TX");
    *VAR_2 = 1;
    break;
   case 130:
    if (VAR_3)
     FUNC_0(VAR_1++,
         "MCP SCPAD");
    *VAR_2 = 1;
    break;
   }


   VAR_0 &= ~VAR_5;
  }
 }

 return VAR_1;
}
