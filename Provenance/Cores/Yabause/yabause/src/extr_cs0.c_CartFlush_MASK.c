
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int carttype; scalar_t__ filename; scalar_t__ bupram; scalar_t__ rom; } ;






 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ,void*) ;

void FUNC_2(void){
   if (VAR_1)
   {
      if (VAR_1->carttype == VAR_0)
      {
         if (VAR_1->rom)
         {
            if (FUNC_0(VAR_1->rom, 0x40000, 2, VAR_1->filename) != 0)
               FUNC_1(VAR_2, (void *)VAR_1->filename);
         }
      }

      if (VAR_1->bupram)
      {
         u32 VAR_3 = 0;

         switch (VAR_1->carttype)
         {
            case 129:
            {
               VAR_3 = 0x100000;
               break;
            }
            case 128:
            {
               VAR_3 = 0x200000;
               break;
            }
            case 131:
            {
               VAR_3 = 0x400000;
               break;
            }
            case 130:
            {
               VAR_3 = 0x800000;
               break;
            }
         }

         if (VAR_3 != 0)
         {
            if (FUNC_0(VAR_1->bupram, VAR_3, 1, VAR_1->filename) != 0)
               FUNC_1(VAR_2, (void *)VAR_1->filename);
         }
      }
   }
}
