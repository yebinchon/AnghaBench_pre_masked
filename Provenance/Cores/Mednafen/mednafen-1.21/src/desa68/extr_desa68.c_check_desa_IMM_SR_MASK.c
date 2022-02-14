
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int w; int mode6; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (scalar_t__,scalar_t__,char) ;

__attribute__((used)) static int FUNC_3(void)
{
  u32 VAR_3 = 1 + (1<<2) + (1<<10);
  int VAR_4 = (VAR_2.w>>8)&15, VAR_5='ORI';

  if((VAR_2.w&0677)!=0074 || !(VAR_3&(1<<VAR_4)))
    return 0;

  switch(VAR_4)
    {
    case 0xA:
      VAR_5 = 'EORI';
      break;





    case 0x2:
      VAR_5 = 'ANDI';
      break;
    }
  FUNC_0(VAR_5);
  FUNC_1(' ');
  FUNC_2(VAR_0, VAR_1-VAR_0, 'W');
  FUNC_0((VAR_2.mode6&1) ? ',SR' : ',CCR');
  return 1;
}
