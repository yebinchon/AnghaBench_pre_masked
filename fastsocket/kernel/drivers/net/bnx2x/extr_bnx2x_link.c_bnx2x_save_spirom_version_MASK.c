
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*,int,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_1, u8 VAR_2,
          u32 VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_0, "FW version 0x%x:0x%x for port %d\n",
   (u16)(VAR_3>>16), (u16)VAR_3, VAR_2);

 if (VAR_4)
  FUNC_1(VAR_1, VAR_4, VAR_3);
}
