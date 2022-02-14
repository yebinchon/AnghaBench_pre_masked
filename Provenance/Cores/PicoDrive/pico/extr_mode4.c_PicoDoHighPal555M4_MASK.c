
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dirtyPal; } ;
struct TYPE_4__ {TYPE_1__ m; scalar_t__ cram; } ;


 scalar_t__* VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_0(void)
{
  unsigned int *VAR_2=(void *)VAR_1.cram;
  unsigned int *VAR_3=(void *)VAR_0;
  unsigned int VAR_4;
  int VAR_5;

  VAR_1.m.dirtyPal = 0;


  for (VAR_5 = 0x20/2; VAR_5 > 0; VAR_5--, VAR_2++, VAR_3++) {
    VAR_4 = *VAR_2;



    VAR_4 = ((VAR_4 & 0x00030003)<<14) | ((VAR_4 & 0x000c000c)<<7) | ((VAR_4 & 0x00300030)>>1);

    VAR_4 |= VAR_4 >> 2;
    VAR_4 |= (VAR_4 >> 4) & 0x08610861;
    *VAR_3 = VAR_4;
  }
  VAR_0[0xe0] = 0;
}
