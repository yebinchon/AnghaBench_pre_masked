
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpsc_port_info {int BRG_BCR_m; scalar_t__ brg_base; scalar_t__ mirror_regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mpsc_port_info *VAR_1)
{
 u32 VAR_2;

 VAR_2 = (VAR_1->mirror_regs) ? VAR_1->BRG_BCR_m : FUNC_0(VAR_1->brg_base + VAR_0);
 VAR_2 &= ~(1 << 16);

 if (VAR_1->mirror_regs)
  VAR_1->BRG_BCR_m = VAR_2;
 FUNC_1(VAR_2, VAR_1->brg_base + VAR_0);
}
