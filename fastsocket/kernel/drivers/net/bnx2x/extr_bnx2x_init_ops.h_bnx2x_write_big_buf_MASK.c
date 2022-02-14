
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct bnx2x {scalar_t__ dmae_ready; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int ,int ) ;
 int FUNC_5 (struct bnx2x*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_0, u32 VAR_1, u32 VAR_2,
    u8 VAR_3)
{
 if (VAR_0->dmae_ready)
  FUNC_5(VAR_0, FUNC_2(VAR_0), VAR_1, VAR_2);


 else if (VAR_3 && FUNC_0(VAR_0))
  FUNC_3(VAR_0, VAR_1, FUNC_1(VAR_0), VAR_2);


 else
  FUNC_4(VAR_0, VAR_1, FUNC_1(VAR_0), VAR_2);
}
