
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;
struct mpsc_port_info {int MPSC_CHR_2_m; scalar_t__ mpsc_base; scalar_t__ mirror_regs; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mpsc_port_info *VAR_2)
{
 FUNC_0("mpsc_enter_hunt[%d]: Hunting...\n", VAR_2->port.line);

 if (VAR_2->mirror_regs) {
  FUNC_3(VAR_2->MPSC_CHR_2_m | VAR_1,
   VAR_2->mpsc_base + VAR_0);

  FUNC_2(100);
 } else {
  FUNC_3(FUNC_1(VAR_2->mpsc_base + VAR_0) | VAR_1,
    VAR_2->mpsc_base + VAR_0);

  while (FUNC_1(VAR_2->mpsc_base + VAR_0) & VAR_1)
   FUNC_2(10);
 }
}
