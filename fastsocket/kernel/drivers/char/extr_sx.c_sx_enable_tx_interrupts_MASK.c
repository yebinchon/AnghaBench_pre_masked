
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct sx_port {TYPE_2__ gs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sx_port*,int ) ;
 int FUNC_3 (struct sx_port*) ;

__attribute__((used)) static void FUNC_4(void *VAR_4)
{
 struct sx_port *VAR_5 = VAR_4;
 int VAR_6;
 FUNC_0();


 FUNC_3(VAR_5);



 VAR_6 = (FUNC_2(VAR_5, VAR_2) -
     FUNC_2(VAR_5, VAR_3)) & 0xff;


 if (VAR_6 < VAR_1)
  VAR_5->gs.port.flags &= ~VAR_0;

 FUNC_1();
}
