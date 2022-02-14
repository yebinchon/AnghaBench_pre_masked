
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ bits; } ;
typedef TYPE_1__ ieee754sp ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__) ;
 int FUNC_5 (char*,...) ;

ieee754sp FUNC_6(char *VAR_2, ieee754sp VAR_3)
{
 int VAR_4;

 FUNC_5("%s=", VAR_2);
 FUNC_5("<%08x>\n", (unsigned) VAR_3.bits);
 FUNC_5("\t=");
 switch (FUNC_4(VAR_3)) {
 case 130:
 case 129:
  FUNC_5("Nan %c", FUNC_2(VAR_3) ? '-' : '+');
  for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--)
   FUNC_5("%c", FUNC_1(VAR_3) & FUNC_3(VAR_4) ? '1' : '0');
  break;
 case 132:
  FUNC_5("%cInfinity", FUNC_2(VAR_3) ? '-' : '+');
  break;
 case 128:
  FUNC_5("%cZero", FUNC_2(VAR_3) ? '-' : '+');
  break;
 case 133:
  FUNC_5("%c0.", FUNC_2(VAR_3) ? '-' : '+');
  for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--)
   FUNC_5("%c", FUNC_1(VAR_3) & FUNC_3(VAR_4) ? '1' : '0');
  FUNC_5("e%d", FUNC_0(VAR_3) - VAR_0);
  break;
 case 131:
  FUNC_5("%c1.", FUNC_2(VAR_3) ? '-' : '+');
  for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--)
   FUNC_5("%c", FUNC_1(VAR_3) & FUNC_3(VAR_4) ? '1' : '0');
  FUNC_5("e%d", FUNC_0(VAR_3) - VAR_0);
  break;
 default:
  FUNC_5("Illegal/Unknown IEEE754 value class");
 }
 FUNC_5("\n");
 return VAR_3;
}
