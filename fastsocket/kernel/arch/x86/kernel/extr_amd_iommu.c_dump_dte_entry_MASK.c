
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {int * data; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static void FUNC_1(u16 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; ++VAR_2)
  FUNC_0("AMD-Vi: DTE[%d]: %08x\n", VAR_2,
   VAR_0[VAR_1].data[VAR_2]);
}
