
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {scalar_t__ dmae_ready; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,int const*,int ,int ,int ) ;
 int FUNC_2 (struct bnx2x*,int ,int const*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int const*,int ) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_0, u32 VAR_1,
        const u32 *VAR_2, u32 VAR_3)
{
 if (VAR_0->dmae_ready)
  FUNC_1(VAR_0, VAR_2, VAR_1, VAR_3, 0);


 else if (FUNC_0(VAR_0))
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);


 else
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
}
