
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int xmit_size; } ;
typedef TYPE_1__ modem_info ;
struct TYPE_6__ {int* mdmreg; } ;
typedef TYPE_2__ atemu ;


 int VAR_0 ;



 int VAR_1 ;




 size_t VAR_2 ;

 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(int VAR_4, int VAR_5, modem_info * VAR_6, atemu * VAR_7)
{

 switch (VAR_4) {
  case 132:
   if (VAR_5 > VAR_0)
    return 1;
   break;
  case 130:
   if ((VAR_5 * 16) > VAR_1)
    return 1;




   VAR_6->xmit_size = VAR_5 * 16;
   switch (VAR_7->mdmreg[132]) {
    case 133:
    case 135:
    case 134:
     VAR_6->xmit_size /= 10;
   }
   break;
  case 128:
  case 131:
  case 129:

   return 1;
 }
 return 0;
}
