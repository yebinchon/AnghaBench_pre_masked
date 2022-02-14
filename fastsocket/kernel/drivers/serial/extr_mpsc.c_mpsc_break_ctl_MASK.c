
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct mpsc_port_info {int MPSC_CHR_1_m; TYPE_1__ port; scalar_t__ mpsc_base; scalar_t__ mirror_regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1, int VAR_2)
{
 struct mpsc_port_info *VAR_3 = (struct mpsc_port_info *)VAR_1;
 ulong VAR_4;
 u32 VAR_5;

 VAR_5 = VAR_2 ? 0x00ff0000 : 0;

 FUNC_0(&VAR_3->port.lock, VAR_4);
 if (VAR_3->mirror_regs)
  VAR_3->MPSC_CHR_1_m = VAR_5;
 FUNC_2(VAR_5, VAR_3->mpsc_base + VAR_0);
 FUNC_1(&VAR_3->port.lock, VAR_4);
}
