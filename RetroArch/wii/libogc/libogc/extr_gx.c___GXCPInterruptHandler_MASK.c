
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cpSRreg; int cpCRreg; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(u32 VAR_2,void *VAR_3)
{
 VAR_0->cpSRreg = VAR_1[0];

 if((VAR_0->cpCRreg&0x08) && (VAR_0->cpSRreg&0x02))
  FUNC_1();

 if((VAR_0->cpCRreg&0x04) && (VAR_0->cpSRreg&0x01))
  FUNC_0();

 if((VAR_0->cpCRreg&0x20) && (VAR_0->cpSRreg&0x10)) {
  VAR_0->cpCRreg &= ~0x20;
  VAR_1[1] = VAR_0->cpCRreg;
  if(&FUNC_2)
   FUNC_2();
 }
}
