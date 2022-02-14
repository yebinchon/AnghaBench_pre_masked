
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {scalar_t__ all; } ;
struct TYPE_8__ {scalar_t__ OCRA; int TIER; int VCRC; int IPRB; int FTCSR; scalar_t__ OCRB; int VCRD; TYPE_2__ FRC; } ;
struct TYPE_6__ {int shift; scalar_t__ leftover; } ;
struct TYPE_9__ {TYPE_3__ onchip; TYPE_1__ frc; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_4__*,int,int) ;

void FUNC_1(u32 VAR_1)
{
   u32 VAR_2;
   u32 VAR_3;
   u32 VAR_4;

   VAR_2 = VAR_3 = (u32)VAR_0->onchip.FRC.all;
   VAR_4 = (1 << VAR_0->frc.shift) - 1;


   VAR_3 += ((VAR_1 + VAR_0->frc.leftover) >> VAR_0->frc.shift);
   VAR_0->frc.leftover = (VAR_1 + VAR_0->frc.leftover) & VAR_4;


   if (VAR_3 >= VAR_0->onchip.OCRA && VAR_2 < VAR_0->onchip.OCRA)
   {

      if (VAR_0->onchip.TIER & 0x8)
         FUNC_0(VAR_0, VAR_0->onchip.VCRC & 0x7F, (VAR_0->onchip.IPRB & 0xF00) >> 8);


      if (VAR_0->onchip.FTCSR & 0x1)
      {
         VAR_3 = 0;
         VAR_0->frc.leftover = 0;
      }


      VAR_0->onchip.FTCSR |= 0x8;
   }


   if (VAR_3 >= VAR_0->onchip.OCRB && VAR_2 < VAR_0->onchip.OCRB)
   {

      if (VAR_0->onchip.TIER & 0x4)
         FUNC_0(VAR_0, VAR_0->onchip.VCRC & 0x7F, (VAR_0->onchip.IPRB & 0xF00) >> 8);


      VAR_0->onchip.FTCSR |= 0x4;
   }


   if (VAR_3 > 0xFFFF)
   {

      if (VAR_0->onchip.TIER & 0x2)
         FUNC_0(VAR_0, (VAR_0->onchip.VCRD >> 8) & 0x7F, (VAR_0->onchip.IPRB & 0xF00) >> 8);

      VAR_0->onchip.FTCSR |= 2;
   }


   VAR_0->onchip.FRC.all = VAR_3;
}
