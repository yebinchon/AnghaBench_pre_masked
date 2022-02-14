
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ enabled; } ;
struct TYPE_7__ {TYPE_1__ stepOverOut; scalar_t__ backtraceEnabled; scalar_t__ breakpointEnabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (int) ;
 int * VAR_7 ;
 int * VAR_8 ;

int FUNC_3()
{
   int VAR_9;


   for(VAR_9 = 0;VAR_9 < 0x10000;VAR_9++)
      VAR_8[VAR_9] = FUNC_2(VAR_9);

   for (VAR_9 = 0; VAR_9 < 0x100; VAR_9++)
   {
      switch (VAR_9)
      {
         case 0x000:
            VAR_7[VAR_9] = VAR_0;
            break;
         case 0x002:
            VAR_7[VAR_9] = VAR_4;
            break;
         case 0x020:
            VAR_7[VAR_9] = VAR_1;
            break;
         case 0x060:
         case 0x061:
         case 0x062:
         case 0x063:
         case 0x064:
         case 0x065:
         case 0x066:
         case 0x067:
         case 0x068:
         case 0x069:
         case 0x06A:
         case 0x06B:
         case 0x06C:
         case 0x06D:
         case 0x06E:
         case 0x06F:
            VAR_7[VAR_9] = VAR_2;
            break;
         default:
            VAR_7[VAR_9] = VAR_3;
            break;
      }
   }

   FUNC_0(VAR_5);
   FUNC_0(VAR_6);
   FUNC_1(VAR_5);
   FUNC_1(VAR_6);
   VAR_5->breakpointEnabled = 0;
   VAR_6->breakpointEnabled = 0;
   VAR_5->backtraceEnabled = 0;
   VAR_6->backtraceEnabled = 0;
   VAR_5->stepOverOut.enabled = 0;
   VAR_6->stepOverOut.enabled = 0;

   return 0;
}
