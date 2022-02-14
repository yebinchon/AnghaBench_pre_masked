
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dirty_pal; } ;
struct TYPE_3__ {scalar_t__ pal_native; scalar_t__ pal; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0(int VAR_2)
{
  unsigned int *VAR_3 = (void *)VAR_1->pal;
  unsigned int *VAR_4 = (void *)VAR_1->pal_native;
  unsigned int VAR_5 = 0x001f001f;
  unsigned int VAR_6 = 0x03e003e0;
  unsigned int VAR_7 = 0xfc00fc00;
  unsigned int VAR_8 = 0;
  int VAR_9;

  if (VAR_2)
    VAR_8 = 0x00200020;


  for (VAR_9 = 0x100/2; VAR_9 > 0; VAR_9--, VAR_3++, VAR_4++) {
    unsigned int VAR_10 = *VAR_3;
    *VAR_4 = (((VAR_10 & VAR_5) << 11) | ((VAR_10 & VAR_6) << 1) | ((VAR_10 & VAR_7) >> 10)) ^ VAR_8;
  }

  VAR_0.dirty_pal = 0;
}
