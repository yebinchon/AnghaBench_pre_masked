
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct a2232status {int OutDisable; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct a2232_port {TYPE_2__ gs; int which_port_on_a2232; int which_a2232; } ;


 int VAR_0 ;
 struct a2232status* FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct a2232_port *VAR_2;
 volatile struct a2232status *VAR_3;
 unsigned long VAR_4;

 VAR_2 = VAR_1;
 VAR_3 = FUNC_0(VAR_2->which_a2232, VAR_2->which_port_on_a2232);
 VAR_3->OutDisable = -1;


 FUNC_2(VAR_4);
 VAR_2->gs.port.flags &= ~VAR_0;
 FUNC_1(VAR_4);
}
