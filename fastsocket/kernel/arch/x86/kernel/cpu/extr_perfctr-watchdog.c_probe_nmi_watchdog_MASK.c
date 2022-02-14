
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int x86_vendor; int x86; int x86_model; int x86_mask; } ;
struct TYPE_8__ {int evntsel; int perfctr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 TYPE_6__ VAR_3 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void FUNC_1(void)
{
 switch (VAR_3.x86_vendor) {
 case 129:
  if (VAR_3.x86 == 6 ||
      (VAR_3.x86 >= 0xf && VAR_3.x86 <= 0x15))
   VAR_8 = &VAR_5;
  return;
 case 128:






  if ((VAR_3.x86 == 6 && VAR_3.x86_model == 14) ||
      ((VAR_3.x86 == 6 && VAR_3.x86_model == 15 &&
       VAR_3.x86_mask == 4))) {
   VAR_4.perfctr = VAR_1;
   VAR_4.evntsel = VAR_0;
  }
  if (FUNC_0(&VAR_3, VAR_2)) {
   VAR_8 = &VAR_4;
   break;
  }
  switch (VAR_3.x86) {
  case 6:
   if (VAR_3.x86_model > 13)
    return;

   VAR_8 = &VAR_7;
   break;
  case 15:
   VAR_8 = &VAR_6;
   break;
  default:
   return;
  }
  break;
 }
}
