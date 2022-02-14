
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tty; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct Port {TYPE_2__ gs; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct Port *VAR_1;

 FUNC_0();

 VAR_1 = (struct Port *) VAR_0;
 VAR_1->gs.port.tty = ((void*)0);

 FUNC_1();
}
