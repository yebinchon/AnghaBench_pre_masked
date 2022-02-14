
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct av7110 {TYPE_1__* ci_slot; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int,char*,struct av7110*) ;

void FUNC_1(struct av7110 *VAR_2, u8 *VAR_3, u16 VAR_4)
{
 FUNC_0(8, "av7110:%p\n",VAR_2);

 if (VAR_4 < 3)
  return;
 switch (VAR_3[0]) {
 case 129:
  if (VAR_3[2] != 1 && VAR_3[2] != 2)
   break;
  switch (VAR_3[1]) {
  case 0:
   VAR_2->ci_slot[VAR_3[2] - 1].flags = 0;
   break;
  case 1:
   VAR_2->ci_slot[VAR_3[2] - 1].flags |= VAR_0;
   break;
  case 2:
   VAR_2->ci_slot[VAR_3[2] - 1].flags |= VAR_1;
   break;
  }
  break;
 case 128:

  break;
 default:
  break;
 }
}
