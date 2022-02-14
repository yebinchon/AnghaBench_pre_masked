
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {size_t nummemorybreakpoints; TYPE_1__* memorybreakpoint; } ;
struct TYPE_8__ {TYPE_2__ bp; } ;
struct TYPE_6__ {int addr; int flags; int * oldwritelong; int * oldwriteword; int * oldwritebyte; int * oldreadword; int * oldreadbyte; int * oldreadlong; } ;
typedef TYPE_3__ SH2_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int,int,int*) ;
 size_t VAR_6 ;
 int ** VAR_7 ;
 int ** VAR_8 ;
 int ** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int ** VAR_16 ;
 int ** VAR_17 ;
 int ** VAR_18 ;

int FUNC_1(SH2_struct *VAR_19, u32 VAR_20, u32 VAR_21) {
   int VAR_22;
   int VAR_23;

   if (VAR_21 == 0)
      return -1;

   if (VAR_19->bp.nummemorybreakpoints < VAR_6) {

      switch (VAR_20 >> 29) {
         case 0x0:
         case 0x1:
         case 0x5:
            break;
         default:
            return -1;
      }

      VAR_20 &= 0x0FFFFFFF;


      for (VAR_23 = 0; VAR_23 < VAR_19->bp.nummemorybreakpoints; VAR_23++)
      {
         if (VAR_20 == VAR_19->bp.memorybreakpoint[VAR_23].addr)
            return -1;
      }

      VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].addr = VAR_20;
      VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].flags = VAR_21;

      VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldreadbyte = VAR_7[(VAR_20 >> 16) & 0xFFF];
      VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldreadword = VAR_9[(VAR_20 >> 16) & 0xFFF];
      VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldreadlong = VAR_8[(VAR_20 >> 16) & 0xFFF];
      VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldwritebyte = VAR_16[(VAR_20 >> 16) & 0xFFF];
      VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldwriteword = VAR_18[(VAR_20 >> 16) & 0xFFF];
      VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldwritelong = VAR_17[(VAR_20 >> 16) & 0xFFF];

      if (VAR_21 & VAR_0)
      {

         if (!FUNC_0(VAR_19, VAR_20, VAR_0, &VAR_22))
            VAR_7[(VAR_20 >> 16) & 0xFFF] = &VAR_10;
         else

            VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldreadbyte = VAR_19->bp.memorybreakpoint[VAR_22].oldreadbyte;
      }

      if (VAR_21 & VAR_4)
      {

         if (!FUNC_0(VAR_19, VAR_20, VAR_4, &VAR_22))
            VAR_9[(VAR_20 >> 16) & 0xFFF] = &VAR_12;
         else

            VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldreadword = VAR_19->bp.memorybreakpoint[VAR_22].oldreadword;
      }

      if (VAR_21 & VAR_2)
      {

         if (!FUNC_0(VAR_19, VAR_20, VAR_2, &VAR_22))
            VAR_8[(VAR_20 >> 16) & 0xFFF] = &VAR_11;
         else

            VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldreadword = VAR_19->bp.memorybreakpoint[VAR_22].oldreadword;
      }

      if (VAR_21 & VAR_1)
      {

         if (!FUNC_0(VAR_19, VAR_20, VAR_1, &VAR_22))
            VAR_16[(VAR_20 >> 16) & 0xFFF] = &VAR_13;
         else

            VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldwritebyte = VAR_19->bp.memorybreakpoint[VAR_22].oldwritebyte;
      }

      if (VAR_21 & VAR_5)
      {

         if (!FUNC_0(VAR_19, VAR_20, VAR_5, &VAR_22))
            VAR_18[(VAR_20 >> 16) & 0xFFF] = &VAR_15;
         else

            VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldwriteword = VAR_19->bp.memorybreakpoint[VAR_22].oldwriteword;
      }

      if (VAR_21 & VAR_3)
      {

         if (!FUNC_0(VAR_19, VAR_20, VAR_3, &VAR_22))
            VAR_17[(VAR_20 >> 16) & 0xFFF] = &VAR_14;
         else

            VAR_19->bp.memorybreakpoint[VAR_19->bp.nummemorybreakpoints].oldwritelong = VAR_19->bp.memorybreakpoint[VAR_22].oldwritelong;
      }

      VAR_19->bp.nummemorybreakpoints++;

      return 0;
   }

   return -1;
}
