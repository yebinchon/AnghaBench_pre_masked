
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int close_wait; int open_wait; int * ops; } ;
struct TYPE_3__ {int close_delay; int closing_wait; TYPE_2__ port; int port_write_mutex; int * rd; int magic; } ;
struct scc_port {TYPE_1__ gs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 struct scc_port* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct scc_port *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_6 = VAR_4 + VAR_7;
  FUNC_1(&VAR_6->gs.port);
  VAR_6->gs.port.ops = &VAR_3;
  VAR_6->gs.magic = VAR_2;
  VAR_6->gs.close_delay = VAR_0/2;
  VAR_6->gs.closing_wait = 30 * VAR_0;
  VAR_6->gs.rd = &VAR_5;



  FUNC_0(&VAR_6->gs.port.open_wait);
  FUNC_0(&VAR_6->gs.port.close_wait);
 }
}
