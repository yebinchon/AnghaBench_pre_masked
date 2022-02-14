
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {char* pc; } ;
struct TYPE_7__ {int pending; TYPE_1__* regs; } ;
struct TYPE_6__ {int h; int l; } ;
struct TYPE_5__ {TYPE_2__ byte; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*) ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_3__ VAR_2 ;

int FUNC_2(int VAR_3)
{
  {

    VAR_2.pending &= ~(1 << VAR_3);


    if (VAR_3 == 2)
    {

      VAR_2.regs[0x00].byte.h &= ~0x01;
    }


    FUNC_1((VAR_2.pending & VAR_2.regs[0x32>>1].byte.l) >> 1);
  }

  return VAR_0;
}
