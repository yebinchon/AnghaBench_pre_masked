
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int offset; int * data; } ;
struct TYPE_6__ {TYPE_1__ port2; TYPE_1__ port1; scalar_t__ firstPeri; } ;
struct TYPE_5__ {int SR; int* IREG; TYPE_1__* OREG; } ;
typedef int PortData_struct ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_2(void) {
  int VAR_5;
  PortData_struct *VAR_6, *VAR_7;

  if (VAR_3->firstPeri)
    VAR_4->SR = 0xC0 | (VAR_4->IREG[1] >> 4);
  else
    VAR_4->SR = 0x80 | (VAR_4->IREG[1] >> 4);

  VAR_3->firstPeri = 0;
  VAR_5=0;

  if (VAR_3->port1.size == 0 && VAR_3->port2.size == 0)
  {

     VAR_6 = &VAR_1;
     VAR_7 = &VAR_2;
     FUNC_1(&VAR_3->port1, VAR_6, sizeof(PortData_struct));
     FUNC_1(&VAR_3->port2, VAR_7, sizeof(PortData_struct));
     FUNC_0(&VAR_1);
     FUNC_0(&VAR_2);
     VAR_3->port1.offset = 0;
     VAR_3->port2.offset = 0;
     VAR_0=0;
  }


  if (VAR_3->port1.size > 0)
  {
     if ((VAR_3->port1.size-VAR_3->port1.offset) < 32)
     {
        FUNC_1(VAR_4->OREG, VAR_3->port1.data+VAR_3->port1.offset, VAR_3->port1.size-VAR_3->port1.offset);
        VAR_5 += VAR_3->port1.size-VAR_3->port1.offset;
        VAR_3->port1.size = 0;
     }
     else
     {
        FUNC_1(VAR_4->OREG, VAR_3->port1.data, 32);
        VAR_5 += 32;
        VAR_3->port1.offset += 32;
     }
  }

  if (VAR_3->port2.size > 0 && VAR_5 < 32)
  {
     if ((VAR_3->port2.size-VAR_3->port2.offset) < (32 - VAR_5))
     {
        FUNC_1(VAR_4->OREG + VAR_5, VAR_3->port2.data+VAR_3->port2.offset, VAR_3->port2.size-VAR_3->port2.offset);
        VAR_3->port2.size = 0;
     }
     else
     {
        FUNC_1(VAR_4->OREG + VAR_5, VAR_3->port2.data, 32 - VAR_5);
        VAR_3->port2.offset += 32 - VAR_5;
     }
  }
}
