
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpsc_port_info {int BRG_BCR_m; scalar_t__ brg_base; scalar_t__ mirror_regs; scalar_t__ brg_can_tune; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mpsc_port_info *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = (VAR_2->mirror_regs) ? VAR_2->BRG_BCR_m : FUNC_0(VAR_2->brg_base + VAR_0);
 VAR_4 = (VAR_4 & ~(0xf << 18)) | ((VAR_3 & 0xf) << 18);

 if (VAR_2->brg_can_tune)
  VAR_4 &= ~(1 << 25);

 if (VAR_2->mirror_regs)
  VAR_2->BRG_BCR_m = VAR_4;
 FUNC_1(VAR_4, VAR_2->brg_base + VAR_0);

 FUNC_1(FUNC_0(VAR_2->brg_base + VAR_1) & 0xffff0000,
  VAR_2->brg_base + VAR_1);
}
