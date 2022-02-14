
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mn10300_serial_port {int* rx_icr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mn10300_serial_port *VAR_2)
{
 u16 VAR_3;
 *VAR_2->rx_icr = VAR_1 | VAR_0;
 VAR_3 = *VAR_2->rx_icr;
}
