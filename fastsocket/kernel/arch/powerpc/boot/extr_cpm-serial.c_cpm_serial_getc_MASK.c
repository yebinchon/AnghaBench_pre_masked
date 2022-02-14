
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* addr; int sc; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static unsigned char FUNC_3(void)
{
 unsigned char VAR_1;

 while (!FUNC_0())
  ;

 FUNC_2();
 VAR_1 = VAR_0->addr[0];
 FUNC_1();
 VAR_0->sc |= 0x8000;

 return VAR_1;
}
