
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int address; unsigned int status; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(unsigned int VAR_1, unsigned int VAR_2)
{
  if( !(VAR_1&2) )
  {
    if( !(VAR_1&1) )
    {

      VAR_0 = VAR_2 & 0xff;
    }
    else
    {

      FUNC_0(VAR_0,VAR_2);
    }
  }
  else
  {

    VAR_0 = VAR_2 & 0x01;
  }
}
