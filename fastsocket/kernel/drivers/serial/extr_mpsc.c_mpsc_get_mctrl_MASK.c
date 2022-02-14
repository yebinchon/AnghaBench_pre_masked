
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
struct uart_port {int dummy; } ;
struct mpsc_port_info {int MPSC_CHR_10_m; scalar_t__ mpsc_base; scalar_t__ mirror_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static uint FUNC_1(struct uart_port *VAR_4)
{
 struct mpsc_port_info *VAR_5 = (struct mpsc_port_info *)VAR_4;
 u32 VAR_6, VAR_7;

 VAR_7 = (VAR_5->mirror_regs) ? VAR_5->MPSC_CHR_10_m
  : FUNC_0(VAR_5->mpsc_base + VAR_0);

 VAR_6 = 0;
 if (VAR_7 & 0x1)
  VAR_6 |= VAR_2;
 if (VAR_7 & 0x2)
  VAR_6 |= VAR_1;

 return VAR_6 | VAR_3;
}
