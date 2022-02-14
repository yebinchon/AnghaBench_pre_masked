
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int pb; int lc; int lp; } ;
struct TYPE_8__ {int dicPos; TYPE_1__ prop; } ;
struct TYPE_9__ {int state; int control; int unpackSize; int packSize; int needInitProp; TYPE_2__ decoder; } ;
typedef int ELzma2State ;
typedef TYPE_3__ CLzma2Dec ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static ELzma2State FUNC_5(CLzma2Dec *VAR_4, uint8_t VAR_5)
{
   switch(VAR_4->state)
   {
      case 133:
         VAR_4->control = VAR_5;
         FUNC_3(FUNC_4("\n %4X ", VAR_4->decoder.dicPos));
         FUNC_3(FUNC_4(" %2X", VAR_5));
         if (VAR_4->control == 0)
            return VAR_3;
         if (FUNC_2(VAR_4))
         {
            if ((VAR_4->control & 0x7F) > 2)
               return VAR_2;
            VAR_4->unpackSize = 0;
         }
         else
            VAR_4->unpackSize = (uint32_t)(VAR_4->control & 0x1F) << 16;
         return 129;

      case 129:
         VAR_4->unpackSize |= (uint32_t)VAR_5 << 8;
         return 128;

      case 128:
         VAR_4->unpackSize |= (uint32_t)VAR_5;
         VAR_4->unpackSize++;
         FUNC_3(FUNC_4(" %8d", VAR_4->unpackSize));
         return (FUNC_2(VAR_4)) ? VAR_1 : 132;

      case 132:
         VAR_4->packSize = (uint32_t)VAR_5 << 8;
         return 131;

      case 131:
         VAR_4->packSize |= (uint32_t)VAR_5;
         VAR_4->packSize++;
         FUNC_3(FUNC_4(" %8d", VAR_4->packSize));
         return FUNC_1(FUNC_0(VAR_4)) ? 130:
            (VAR_4->needInitProp ? VAR_2 : VAR_1);

      case 130:
         {
            int VAR_6, VAR_7;
            if (VAR_5 >= (9 * 5 * 5))
               return VAR_2;
            VAR_6 = VAR_5 % 9;
            VAR_5 /= 9;
            VAR_4->decoder.prop.pb = VAR_5 / 5;
            VAR_7 = VAR_5 % 5;
            if (VAR_6 + VAR_7 > VAR_0)
               return VAR_2;
            VAR_4->decoder.prop.lc = VAR_6;
            VAR_4->decoder.prop.lp = VAR_7;
            VAR_4->needInitProp = 0;
            return VAR_1;
         }
   }
   return VAR_2;
}
