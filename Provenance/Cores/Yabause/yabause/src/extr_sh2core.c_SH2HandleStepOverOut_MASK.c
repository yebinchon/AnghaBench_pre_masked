
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int levels; scalar_t__ type; int (* callBack ) (TYPE_3__*,int ,void*) ;scalar_t__ enabled; int address; } ;
struct TYPE_7__ {int PC; int PR; } ;
struct TYPE_9__ {int instruction; TYPE_2__ stepOverOut; TYPE_1__ regs; } ;
typedef TYPE_3__ SH2_struct ;




 int FUNC_0 (TYPE_3__*,int ,void*) ;
 int FUNC_1 (TYPE_3__*,int ,void*) ;

void FUNC_2(SH2_struct *VAR_0)
{
   if (VAR_0->stepOverOut.enabled)
   {
      switch ((int)VAR_0->stepOverOut.type)
      {
      case 128:
         if (VAR_0->regs.PC == VAR_0->stepOverOut.address)
         {
            VAR_0->stepOverOut.enabled = 0;
            VAR_0->stepOverOut.callBack(VAR_0, VAR_0->regs.PC, (void *)VAR_0->stepOverOut.type);
         }
         break;
      case 129:
         {
            u16 VAR_1;

            if (VAR_0->stepOverOut.levels < 0 && VAR_0->regs.PC == VAR_0->regs.PR)
            {
               VAR_0->stepOverOut.enabled = 0;
               VAR_0->stepOverOut.callBack(VAR_0, VAR_0->regs.PC, (void *)VAR_0->stepOverOut.type);
               return;
            }

            VAR_1 = VAR_0->instruction;;

            if ((VAR_1 & 0xF000) == 0xB000 ||
               (VAR_1 & 0xF0FF) == 0x0003 ||
               (VAR_1 & 0xF0FF) == 0x400B)
               VAR_0->stepOverOut.levels++;
            else if (VAR_1 == 0x000B ||
                     VAR_1 == 0x002B)
               VAR_0->stepOverOut.levels--;

            break;
         }
      default: break;
      }
   }
}
