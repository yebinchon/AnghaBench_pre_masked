
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,char*,int ) ;
 scalar_t__ FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct adapter *VAR_1, u32 VAR_2, u32 VAR_3)
{
 FUNC_2(VAR_1, VAR_0, VAR_2);
 if (FUNC_1(VAR_1, VAR_3) == 0)
  return 0;
 FUNC_0(VAR_1, "MC5 timeout writing to TCAM address 0x%x\n",
        VAR_2);
 return -1;
}
