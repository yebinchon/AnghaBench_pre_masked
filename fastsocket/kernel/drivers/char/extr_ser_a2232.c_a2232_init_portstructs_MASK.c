
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ops; } ;
struct TYPE_3__ {int close_delay; int closing_wait; int * rd; int magic; TYPE_2__ port; } ;
struct a2232_port {int which_a2232; int which_port_on_a2232; TYPE_1__ gs; scalar_t__ cd_status; scalar_t__ throttle_input; scalar_t__ disable_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct a2232_port* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct a2232_port *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2*VAR_3; VAR_8++) {
  VAR_7 = VAR_5 + VAR_8;
  FUNC_0(&VAR_7->gs.port);
  VAR_7->gs.port.ops = &VAR_4;
  VAR_7->which_a2232 = VAR_8/VAR_3;
  VAR_7->which_port_on_a2232 = VAR_8%VAR_3;
  VAR_7->disable_rx = VAR_7->throttle_input = VAR_7->cd_status = 0;
  VAR_7->gs.magic = VAR_0;
  VAR_7->gs.close_delay = VAR_1/2;
  VAR_7->gs.closing_wait = 30 * VAR_1;
  VAR_7->gs.rd = &VAR_6;
 }
}
