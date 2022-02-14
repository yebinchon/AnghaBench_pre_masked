
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xilinxfb_drvdata {int flags; int dcr_host; scalar_t__ regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct xilinxfb_drvdata *VAR_1, u32 VAR_2,
    u32 VAR_3)
{
 if (VAR_1->flags & VAR_0)
  FUNC_1(VAR_1->regs + (VAR_2 << 2), VAR_3);
 else
  FUNC_0(VAR_1->dcr_host, VAR_2, VAR_3);

}
