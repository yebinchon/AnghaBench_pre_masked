
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int m68krcycles_done; } ;
struct TYPE_3__ {unsigned int m68krcycles_done; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (unsigned int) ;

void FUNC_1(unsigned int VAR_3)
{
  unsigned int VAR_4;

  VAR_4 = VAR_1;
  if (VAR_2 < VAR_4)
    VAR_4 = VAR_2;

  while (VAR_4 < VAR_3) {
    VAR_4 += VAR_0;
    FUNC_0(VAR_4);
  }
}
