
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;
struct mpsc_port_info {int MPSC_CHR_2_m; scalar_t__ mpsc_base; scalar_t__ mirror_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpsc_port_info*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_3)
{
 struct mpsc_port_info *VAR_4 = (struct mpsc_port_info *)VAR_3;

 FUNC_1("mpsc_stop_rx[%d]: Stopping...\n", VAR_3->line);

 if (VAR_4->mirror_regs) {
  FUNC_4(VAR_4->MPSC_CHR_2_m | VAR_1,
    VAR_4->mpsc_base + VAR_0);

  FUNC_3(100);
 } else {
  FUNC_4(FUNC_2(VAR_4->mpsc_base + VAR_0) | VAR_1,
    VAR_4->mpsc_base + VAR_0);

  while (FUNC_2(VAR_4->mpsc_base + VAR_0) & VAR_1)
   FUNC_3(10);
 }

 FUNC_0(VAR_4, VAR_2);
}
