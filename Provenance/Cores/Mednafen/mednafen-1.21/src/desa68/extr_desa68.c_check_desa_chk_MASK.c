
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int adrmode0; char reg9; int status; int branch; int reg0; int mode3; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2()
{
  int VAR_3 = 07775;
  if((VAR_2.w&0700) != 0600 || !(VAR_3&(1<<VAR_2.adrmode0)))
    return 0;
  FUNC_0('CHK ');
  FUNC_1(VAR_2.mode3, VAR_2.reg0, 0);
  FUNC_0(',D0'+VAR_2.reg9);
  VAR_2.status = VAR_0 | VAR_1;
  VAR_2.branch = 0x18;
  return 1;
}
