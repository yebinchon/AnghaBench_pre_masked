
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int cmd32; unsigned int cmd; } ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned long) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_3, unsigned int VAR_4, unsigned long VAR_5)
{
        int VAR_6;
        unsigned int VAR_7 = 0;

 switch (VAR_4) {
 case 131:
 case 130:
 case 134:
 case 129:
 case 135:
 case 128:
 case 133:
 case 132:
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4 == VAR_2[VAR_6].cmd32) {
   VAR_7 = VAR_2[VAR_6].cmd;
   break;
  }
 }
 if (VAR_6 == VAR_1)
         return -VAR_0;

        switch (VAR_7) {
 case 145:
  return FUNC_0(VAR_3, VAR_7, VAR_5);

 case 147:
        case 142:
        case 148:
        case 150:
        case 140:
        case 152:
        case 151:
        case 149:
 case 139:
 case 138:
 case 137:
 case 144:
 case 143:
 case 146:
 case 136:
 case 141:
                return FUNC_1(VAR_3, VAR_7, VAR_5);
        }

        return -VAR_0;
}
