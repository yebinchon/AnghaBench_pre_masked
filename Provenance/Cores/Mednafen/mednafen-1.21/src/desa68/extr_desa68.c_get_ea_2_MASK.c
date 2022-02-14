
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef void* s8 ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_2__ {void* w; int ea; int flags; int pc; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(u32 VAR_2, u32 VAR_3, u8 VAR_4)
{
  s32 VAR_5;

  if(VAR_2==138) {
    VAR_2 += VAR_3;
  }

  switch(VAR_2 )
    {
    case 135:
      FUNC_3('D0'+VAR_3);
      break;
    case 137:
      FUNC_3('A0'+VAR_3);
      break;
    case 129:
      FUNC_3('(A0)'+(VAR_3<<8));
      break;
    case 128:
      FUNC_4('-');
      FUNC_3('(A0)'+(VAR_3<<8));
      break;
    case 136:
      FUNC_3('(A0)'+(VAR_3<<8));
      FUNC_4('+');
      break;
    case 133:
      FUNC_14();
      FUNC_7(VAR_1.w);
      FUNC_3('(A0)'+(VAR_3<<8));
      break;
    case 132:
      VAR_5 = FUNC_13();
      VAR_1.ea = (s8)(VAR_5>>8);
      FUNC_7((s8)(VAR_5>>8));
      FUNC_3('(A0,'+(VAR_3<<8));
      VAR_5 = (VAR_5&0xFFFF00FF)+('.'<<8);
      FUNC_3(VAR_5);
      FUNC_4(')');
      break;
    case 138:
      VAR_1.ea = VAR_5 = FUNC_1();
      FUNC_9(VAR_5);
      FUNC_3('.W');
      break;
    case 139:
      VAR_1.ea = VAR_5 = FUNC_0();
      FUNC_16(VAR_5);
      FUNC_2(VAR_5);
      break;
    case 131:
      VAR_1.ea = VAR_5 = FUNC_15();
      FUNC_16(VAR_5);
      if (VAR_1.flags & VAR_0) {
 FUNC_6(VAR_5);
      } else {
 FUNC_9(VAR_5);
      }
      FUNC_8("(PC)");
      break;
    case 130:
      VAR_5 = FUNC_13();
      VAR_1.ea = VAR_1.pc-2+(s8)(VAR_5>>8);
      FUNC_16(VAR_1.ea);
      if (VAR_1.flags & VAR_0) {
 FUNC_6(VAR_1.ea);
      } else {
 FUNC_9(VAR_1.ea);
      }
      FUNC_8("(PC,");
      VAR_5 = (VAR_5&0xFFFF00FF)+('.'<<8);
      FUNC_3(VAR_5);
      FUNC_4(')');
      break;
    case 134:
      switch(VAR_4 )
 {
 case 1:
 case 'B':
   VAR_5 = (s8)FUNC_10();
   FUNC_5(VAR_5);
   break;
 case 2:
 case 'W':
   VAR_5 = (s16)FUNC_12();
   FUNC_5(VAR_5);
   break;
 case 4:
 case 'L':
   VAR_5 = (u32)FUNC_11();
   FUNC_5(VAR_5);
   return;
 default:
   FUNC_8("#");

   break;
 }
      break;
    default:
      FUNC_4('?');
      FUNC_9(VAR_2);
      FUNC_4('?');
      break;
    }
}
