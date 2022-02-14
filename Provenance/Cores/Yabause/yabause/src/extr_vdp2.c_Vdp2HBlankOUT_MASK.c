
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int Vdp2 ;
struct TYPE_9__ {int * data; } ;
struct TYPE_6__ {int all; } ;
struct TYPE_8__ {int TVSTAT; TYPE_1__ VCSTA; } ;
struct TYPE_7__ {int LineCount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (scalar_t__,TYPE_3__*,int) ;
 TYPE_2__ VAR_3 ;

void FUNC_2(void) {
   int VAR_4;
   VAR_1->TVSTAT &= ~0x0004;

   if (VAR_3.LineCount < 270)
   {
      u32 VAR_5 = (VAR_1->VCSTA.all & 0x7FFFE) << 1;
      FUNC_1(VAR_0 + VAR_3.LineCount, VAR_1, sizeof(Vdp2));

      for (VAR_4 = 0; VAR_4 < 88; VAR_4++)
      {
         VAR_2[VAR_3.LineCount].data[VAR_4] = FUNC_0(VAR_5 + VAR_4 * 4);
      }
   }
}
