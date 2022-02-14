
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u32 ;
struct TYPE_2__ {int w; int reg9; int opsz; int szchar; scalar_t__ reg0; scalar_t__ mode3; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(void)
{
  static u32 VAR_3[8] =
    {
      'ORI' , 'ANDI', 'SUBI', 'ADDI',
      '???I', 'EORI', 'CMPI', '???I'
    };
  int VAR_4=0x6F;

  if((VAR_2.w&0x100) || !(VAR_4&(1<<VAR_2.reg9)) || VAR_2.opsz==3)
    return 0;

  FUNC_0(VAR_3[VAR_2.reg9] );
  FUNC_0((VAR_2.szchar<<8) + ' ');
  FUNC_2(VAR_0, VAR_1-VAR_0, VAR_2.szchar);
  FUNC_1(',');
  FUNC_2(VAR_2.mode3, VAR_2.reg0, VAR_2.szchar);
  return 1;
}
