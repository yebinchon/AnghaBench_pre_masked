
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; scalar_t__ reg0; scalar_t__ reg9; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3()
{
  unsigned int VAR_1;
  switch(VAR_0.w&0770)
    {
    case 0500:
      VAR_1 = 0x0000;
      break;
    case 0510:
      VAR_1 = 0x0808;
      break;
    case 0610:
      VAR_1 = 0x0008;
      break;
    default:
      return 0;
    }
  FUNC_0('EXG ');
  FUNC_2(VAR_0.reg9 + (VAR_1>>8));
  FUNC_1 (',');
  FUNC_2(VAR_0.reg0 + (VAR_1&8));
  return 1;
}
