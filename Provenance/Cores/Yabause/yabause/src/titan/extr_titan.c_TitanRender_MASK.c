
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pixel_t ;
struct TYPE_4__ {int CCCTL; int SFPRMD; int LNCLEN; int SDCTL; int PRINA; int PRINB; int PRIR; } ;
struct TYPE_3__ {int* layer_priority; int vdp2height; int trans; int inited; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_2(pixel_t * VAR_8)
{
   int VAR_9 = 1;

   if (!VAR_6.inited || (!VAR_6.trans))
   {
      return;
   }


   if ((VAR_5->CCCTL & 0x807f) != 0)
      VAR_9 = 0;


   if ((VAR_5->SFPRMD & 0x3ff) != 0)
      VAR_9 = 0;


   if ((VAR_5->LNCLEN & 0x1f) != 0)
      VAR_9 = 0;


   if ((VAR_5->SDCTL & 0x13F) != 0)
      VAR_9 = 0;

   VAR_6.layer_priority[VAR_0] = VAR_5->PRINA & 0x7;
   VAR_6.layer_priority[VAR_1] = ((VAR_5->PRINA >> 8) & 0x7);
   VAR_6.layer_priority[VAR_2] = (VAR_5->PRINB & 0x7);
   VAR_6.layer_priority[VAR_3] = ((VAR_5->PRINB >> 8) & 0x7);
   VAR_6.layer_priority[VAR_4] = (VAR_5->PRIR & 0x7);

   if (VAR_7 > 0)
   {
      FUNC_1(VAR_8, VAR_9);
   }
   else
   {
      FUNC_0(VAR_8, 0, VAR_6.vdp2height, VAR_9);
   }
}
