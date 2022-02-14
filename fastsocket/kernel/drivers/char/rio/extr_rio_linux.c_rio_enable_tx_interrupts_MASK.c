
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct Port {TYPE_2__ gs; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct Port *VAR_2 = VAR_1;


 FUNC_1();






 FUNC_0((char *) VAR_2);





 VAR_2->gs.port.flags &= ~VAR_0;

 FUNC_2();
}
