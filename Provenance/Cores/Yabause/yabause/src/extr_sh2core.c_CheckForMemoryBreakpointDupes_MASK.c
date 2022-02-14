
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int nummemorybreakpoints; TYPE_1__* memorybreakpoint; } ;
struct TYPE_7__ {TYPE_2__ bp; } ;
struct TYPE_5__ {int addr; int flags; } ;
typedef TYPE_3__ SH2_struct ;



__attribute__((used)) static int FUNC_0(SH2_struct *VAR_0, u32 VAR_1, u32 VAR_2, int *VAR_3)
{
   int VAR_4;

   for (VAR_4 = 0; VAR_4 < VAR_0->bp.nummemorybreakpoints; VAR_4++)
   {
      if (((VAR_0->bp.memorybreakpoint[VAR_4].addr >> 16) & 0xFFF) ==
          ((VAR_1 >> 16) & 0xFFF))
      {

         if (VAR_0->bp.memorybreakpoint[VAR_4].flags & VAR_2)
         {
            *VAR_3 = VAR_4;
            return 1;
         }
      }
   }

   return 0;
}
