
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_7__ {int cts; } ;
struct TYPE_8__ {TYPE_2__* state; TYPE_3__ icount; } ;
struct mn10300_serial_port {int tx_cts; TYPE_4__ uart; int * _control; } ;
struct TYPE_5__ {int delta_msr_wait; } ;
struct TYPE_6__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mn10300_serial_port *VAR_2, u8 VAR_3)
{
 u16 VAR_4;

 VAR_2->tx_cts = VAR_3;
 VAR_2->uart.icount.cts++;



 VAR_4 = *VAR_2->_control;
 VAR_4 ^= VAR_0;
 *VAR_2->_control = VAR_4;

 FUNC_0(&VAR_2->uart, VAR_3 & VAR_1);
 FUNC_1(&VAR_2->uart.state->port.delta_msr_wait);
}
