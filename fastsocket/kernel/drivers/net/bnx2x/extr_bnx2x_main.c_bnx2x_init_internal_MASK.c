
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;




 int FUNC_1 (struct bnx2x*) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_0, u32 VAR_1)
{
 switch (VAR_1) {
 case 131:
 case 130:
  FUNC_1(VAR_0);


 case 128:



 case 129:


  break;

 default:
  FUNC_0("Unknown load_code (0x%x) from MCP\n", VAR_1);
  break;
 }
}
