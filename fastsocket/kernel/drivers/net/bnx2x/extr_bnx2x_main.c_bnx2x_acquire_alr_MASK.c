
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6 = 0;

 FUNC_3();
 for (VAR_4 = 0; VAR_4 < 1000; VAR_4++) {
  FUNC_2(VAR_3, VAR_2, VAR_1);
  VAR_5 = FUNC_1(VAR_3, VAR_2);
  if (VAR_5 & VAR_1)
   break;

  FUNC_4(5000, 10000);
 }
 if (!(VAR_5 & VAR_1)) {
  FUNC_0("Cannot acquire MCP access lock register\n");
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
