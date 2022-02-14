
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int type; int addr; int val; int enable; } ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_5(void)
{
   int VAR_1;

   for (VAR_1 = 0; ; VAR_1++)
   {
      switch (VAR_0[VAR_1].type)
      {
         case 129:
            return;
         case 131:
            if (VAR_0[VAR_1].enable == 0)
               continue;
            if (FUNC_0(VAR_0[VAR_1].addr) != VAR_0[VAR_1].val)
               return;
            break;
         case 132:
            if (VAR_0[VAR_1].enable == 0)
               continue;
            FUNC_1(VAR_0[VAR_1].addr, (u8)VAR_0[VAR_1].val);
            FUNC_4(VAR_0[VAR_1].addr, 1);
            break;
         case 128:
            if (VAR_0[VAR_1].enable == 0)
               continue;
            FUNC_3(VAR_0[VAR_1].addr, (u16)VAR_0[VAR_1].val);
            FUNC_4(VAR_0[VAR_1].addr, 2);
            break;
         case 130:
            if (VAR_0[VAR_1].enable == 0)
               continue;
            FUNC_2(VAR_0[VAR_1].addr, VAR_0[VAR_1].val);
            FUNC_4(VAR_0[VAR_1].addr, 4);
            break;
      }
   }
}
