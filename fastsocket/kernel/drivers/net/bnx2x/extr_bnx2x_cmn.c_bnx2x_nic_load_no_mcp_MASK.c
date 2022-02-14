
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int** VAR_4 ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_5);

 FUNC_1(VAR_3, "NO MCP - load counts[%d]      %d, %d, %d\n",
    VAR_7, VAR_4[VAR_7][0], VAR_4[VAR_7][1],
    VAR_4[VAR_7][2]);
 VAR_4[VAR_7][0]++;
 VAR_4[VAR_7][1 + VAR_6]++;
 FUNC_1(VAR_3, "NO MCP - new load counts[%d]  %d, %d, %d\n",
    VAR_7, VAR_4[VAR_7][0], VAR_4[VAR_7][1],
    VAR_4[VAR_7][2]);
 if (VAR_4[VAR_7][0] == 1)
  return VAR_0;
 else if (VAR_4[VAR_7][1 + VAR_6] == 1)
  return VAR_2;
 else
  return VAR_1;
}
