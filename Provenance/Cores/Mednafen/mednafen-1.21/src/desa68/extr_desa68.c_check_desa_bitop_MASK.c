
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef char u32 ;
struct TYPE_2__ {int adrmode0; size_t opsz; int w; char reg9; int reg0; int mode3; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void)
{
  static u32 VAR_1[] = { 'BTST', 'BCHG', 'BCLR', 'BSET'};
  int VAR_2 = 00775;
  unsigned int VAR_3;

  if(!(VAR_2&(1<<VAR_0.adrmode0)))
    return 0;

  VAR_3 = VAR_1[VAR_0.opsz];

  if(!(VAR_0.w&0400))
    {
      if((VAR_0.w&0xF00)!=0x800)
 return 0;
      FUNC_0(VAR_3);
      FUNC_0(' #');
      FUNC_4();
      FUNC_2((u8)VAR_0.w);
    }
  else

    {
      FUNC_0(VAR_3);
      FUNC_0(' D0'+VAR_0.reg9);
    }
  FUNC_1(',');
  FUNC_3(VAR_0.mode3, VAR_0.reg0, 'B');

  return 1;
}
