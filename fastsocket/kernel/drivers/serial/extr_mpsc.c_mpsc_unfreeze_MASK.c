
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int line; } ;
struct mpsc_port_info {TYPE_1__ port; scalar_t__ mpsc_base; int MPSC_MPCR_m; scalar_t__ mirror_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mpsc_port_info *VAR_2)
{
 u32 VAR_3;

 VAR_3 = (VAR_2->mirror_regs) ? VAR_2->MPSC_MPCR_m :
  FUNC_1(VAR_2->mpsc_base + VAR_0);
 VAR_3 &= ~VAR_1;

 if (VAR_2->mirror_regs)
  VAR_2->MPSC_MPCR_m = VAR_3;
 FUNC_2(VAR_3, VAR_2->mpsc_base + VAR_0);

 FUNC_0("mpsc_unfreeze[%d]: Unfrozen\n", VAR_2->port.line);
}
