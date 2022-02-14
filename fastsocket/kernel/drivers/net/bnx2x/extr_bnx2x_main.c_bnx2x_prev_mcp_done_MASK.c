
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
 int FUNC_1 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3, VAR_0,
      VAR_1);
 if (!VAR_4) {
  FUNC_0("MCP response failure, aborting\n");
  return -VAR_2;
 }

 return 0;
}
