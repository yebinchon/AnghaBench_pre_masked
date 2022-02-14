
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Port; unsigned char State; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(unsigned char VAR_1, unsigned char VAR_2)
{

  VAR_1 &= VAR_2;


  VAR_0.Port = 4 + ((VAR_1 >> 5) & 1);


  VAR_0.State = VAR_1;
}
