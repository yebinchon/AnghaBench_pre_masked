
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tilInfo_struct ;
struct TYPE_10__ {scalar_t__ addr; int count; } ;
struct TYPE_8__ {int num; int maxNum; TYPE_4__* match; scalar_t__ enabled; } ;
struct TYPE_7__ {scalar_t__ PC; } ;
struct TYPE_9__ {int instruction; TYPE_2__ trackInfLoop; TYPE_1__ regs; } ;
typedef TYPE_3__ SH2_struct ;


 TYPE_4__* FUNC_0 (TYPE_4__*,int) ;

void FUNC_1(SH2_struct *VAR_0)
{
   if (VAR_0->trackInfLoop.enabled)
   {

      if ((VAR_0->instruction & 0x8B80) == 0x8B80 ||
          (VAR_0->instruction & 0x8F80) == 0x8F80 ||
          (VAR_0->instruction & 0x8980) == 0x8980 ||
          (VAR_0->instruction & 0x8D80) == 0x8D80 ||
          (VAR_0->instruction & 0xA800) == 0xA800)
      {
         int VAR_1;


         for (VAR_1 = 0; VAR_1 < VAR_0->trackInfLoop.num; VAR_1++)
         {
            if (VAR_0->regs.PC == VAR_0->trackInfLoop.match[VAR_1].addr)
            {
               VAR_0->trackInfLoop.match[VAR_1].count++;
               return;
            }
         }

         if (VAR_0->trackInfLoop.num >= VAR_0->trackInfLoop.maxNum)
         {
            VAR_0->trackInfLoop.match = FUNC_0(VAR_0->trackInfLoop.match, sizeof(tilInfo_struct) * (VAR_0->trackInfLoop.maxNum * 2));
            VAR_0->trackInfLoop.maxNum *= 2;
         }


         VAR_1=VAR_0->trackInfLoop.num;
         VAR_0->trackInfLoop.match[VAR_1].addr = VAR_0->regs.PC;
         VAR_0->trackInfLoop.match[VAR_1].count = 1;
         VAR_0->trackInfLoop.num++;
      }
   }
}
