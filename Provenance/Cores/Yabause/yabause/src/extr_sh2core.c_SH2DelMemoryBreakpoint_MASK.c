
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int nummemorybreakpoints; TYPE_1__* memorybreakpoint; } ;
struct TYPE_8__ {TYPE_2__ bp; } ;
struct TYPE_6__ {int addr; int flags; int oldwritelong; int oldwriteword; int oldwritebyte; int oldreadlong; int oldreadword; int oldreadbyte; } ;
typedef TYPE_3__ SH2_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;

int FUNC_1(SH2_struct *VAR_12, u32 VAR_13) {
   int VAR_14, VAR_15;

   if (VAR_12->bp.nummemorybreakpoints > 0) {
      for (VAR_14 = 0; VAR_14 < VAR_12->bp.nummemorybreakpoints; VAR_14++) {
         if (VAR_12->bp.memorybreakpoint[VAR_14].addr == VAR_13)
         {



            for (VAR_15 = 0; VAR_15 < VAR_12->bp.nummemorybreakpoints; VAR_15++)
            {
               if (((VAR_12->bp.memorybreakpoint[VAR_14].addr >> 16) & 0xFFF) ==
                   ((VAR_12->bp.memorybreakpoint[VAR_15].addr >> 16) & 0xFFF) &&
                   VAR_14 != VAR_15)
               {

                  VAR_12->bp.memorybreakpoint[VAR_14].flags &= ~VAR_12->bp.memorybreakpoint[VAR_15].flags;
               }
            }

            if (VAR_12->bp.memorybreakpoint[VAR_14].flags & VAR_0)
               VAR_6[(VAR_13 >> 16) & 0xFFF] = VAR_12->bp.memorybreakpoint[VAR_14].oldreadbyte;

            if (VAR_12->bp.memorybreakpoint[VAR_14].flags & VAR_4)
               VAR_8[(VAR_13 >> 16) & 0xFFF] = VAR_12->bp.memorybreakpoint[VAR_14].oldreadword;

            if (VAR_12->bp.memorybreakpoint[VAR_14].flags & VAR_2)
               VAR_7[(VAR_13 >> 16) & 0xFFF] = VAR_12->bp.memorybreakpoint[VAR_14].oldreadlong;

            if (VAR_12->bp.memorybreakpoint[VAR_14].flags & VAR_1)
               VAR_9[(VAR_13 >> 16) & 0xFFF] = VAR_12->bp.memorybreakpoint[VAR_14].oldwritebyte;

            if (VAR_12->bp.memorybreakpoint[VAR_14].flags & VAR_5)
               VAR_11[(VAR_13 >> 16) & 0xFFF] = VAR_12->bp.memorybreakpoint[VAR_14].oldwriteword;

            if (VAR_12->bp.memorybreakpoint[VAR_14].flags & VAR_3)
               VAR_10[(VAR_13 >> 16) & 0xFFF] = VAR_12->bp.memorybreakpoint[VAR_14].oldwritelong;

            VAR_12->bp.memorybreakpoint[VAR_14].addr = 0xFFFFFFFF;
            FUNC_0(VAR_12);
            VAR_12->bp.nummemorybreakpoints--;
            return 0;
         }
      }
   }

   return -1;
}
