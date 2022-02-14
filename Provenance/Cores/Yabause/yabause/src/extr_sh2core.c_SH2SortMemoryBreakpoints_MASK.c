
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int addr; } ;
typedef TYPE_2__ memorybreakpoint_struct ;
struct TYPE_7__ {TYPE_2__* memorybreakpoint; } ;
struct TYPE_9__ {TYPE_1__ bp; } ;
typedef TYPE_3__ SH2_struct ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(SH2_struct *VAR_1) {
   int VAR_2, VAR_3;
   memorybreakpoint_struct VAR_4;

   for (VAR_2 = 0; VAR_2 < (VAR_0-1); VAR_2++)
   {
      for (VAR_3 = VAR_2+1; VAR_3 < VAR_0; VAR_3++)
      {
         if (VAR_1->bp.memorybreakpoint[VAR_2].addr == 0xFFFFFFFF &&
             VAR_1->bp.memorybreakpoint[VAR_3].addr != 0xFFFFFFFF)
         {
            FUNC_0(&VAR_4, VAR_1->bp.memorybreakpoint+VAR_2, sizeof(memorybreakpoint_struct));
            FUNC_0(VAR_1->bp.memorybreakpoint+VAR_2, VAR_1->bp.memorybreakpoint+VAR_3, sizeof(memorybreakpoint_struct));
            FUNC_0(VAR_1->bp.memorybreakpoint+VAR_3, &VAR_4, sizeof(memorybreakpoint_struct));
         }
      }
   }
}
