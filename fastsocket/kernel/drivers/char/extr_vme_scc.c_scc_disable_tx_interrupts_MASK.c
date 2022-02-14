
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct scc_port {TYPE_2__ gs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scc_port*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
 struct scc_port *VAR_4 = VAR_3;
 unsigned long VAR_5;
 FUNC_0(VAR_4);

 FUNC_3(VAR_5);
 FUNC_1(VAR_2, ~VAR_1, 0);
 VAR_4->gs.port.flags &= ~VAR_0;
 FUNC_2(VAR_5);
}
