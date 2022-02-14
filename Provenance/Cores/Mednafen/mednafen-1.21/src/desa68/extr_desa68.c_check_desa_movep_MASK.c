
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int opsz; char reg9; int reg0; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(void)
{
  if((VAR_1.w & 0470) != 0410 )
    return 0;

  FUNC_1("MOVEP.");
  FUNC_0((VAR_1.opsz&1)?'L ' : 'W ');


  if(!(VAR_1.w&(1<<7)))
    {
      FUNC_2(VAR_0, VAR_1.reg0, 0 );
      FUNC_0(',D0' + VAR_1.reg9 );
    }

  else
    {
      FUNC_0('D0,' + (VAR_1.reg9<<8) );
      FUNC_2(VAR_0, VAR_1.reg0, 0 );
    }
  return 1;
}
