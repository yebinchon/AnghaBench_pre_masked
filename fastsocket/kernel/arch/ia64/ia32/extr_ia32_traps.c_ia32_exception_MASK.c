
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siginfo {unsigned long si_isr; void* si_signo; void* si_code; scalar_t__ si_flags; scalar_t__ si_imm; scalar_t__ si_errno; } ;
struct pt_regs {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (void*,struct siginfo*,int ) ;
 unsigned long FUNC_1 (int ) ;

int
FUNC_2 (struct pt_regs *VAR_19, unsigned long VAR_20)
{
 struct siginfo VAR_21;


 VAR_21.si_errno = 0;
 VAR_21.si_flags = 0;
 VAR_21.si_isr = 0;
 VAR_21.si_imm = 0;
 switch ((VAR_20 >> 16) & 0xff) {
       case 1:
       case 2:
  VAR_21.si_signo = VAR_11;
  if (VAR_20 == 0)
   VAR_21.si_code = VAR_14;
  else if (VAR_20 & 0x4)
   VAR_21.si_code = VAR_12;
  else
   VAR_21.si_code = VAR_13;
  break;

       case 3:
  VAR_21.si_signo = VAR_11;
  VAR_21.si_code = VAR_13;
  break;

       case 0:
  VAR_21.si_signo = VAR_8;
  VAR_21.si_code = VAR_6;
  break;

       case 4:
       case 5:
  VAR_21.si_signo = VAR_8;
  VAR_21.si_code = 0;
  break;

       case 6:
  VAR_21.si_signo = VAR_9;
  VAR_21.si_code = VAR_7;
  break;

       case 7:
       case 8:
       case 9:
       case 11:
       case 12:
       case 13:
  VAR_21.si_signo = VAR_10;
  VAR_21.si_code = 0;
  break;

       case 16:
  {
   unsigned long VAR_22, VAR_23;

   VAR_22 = FUNC_1(VAR_16);
   VAR_23 = FUNC_1(VAR_15);

   VAR_21.si_signo = VAR_8;
   VAR_21.si_isr = VAR_20;
   VAR_21.si_flags = VAR_17;
   switch(((~VAR_23) & (VAR_22 & 0x3f)) | (VAR_22 & 0x240)) {
    case 0x000:
    default:
     VAR_21.si_code = 0;
     break;
    case 0x001:
    case 0x040:
    case 0x240:
     VAR_21.si_code = VAR_2;
     break;
    case 0x002:
    case 0x010:
     VAR_21.si_code = VAR_5;
     break;
    case 0x004:
     VAR_21.si_code = VAR_1;
     break;
    case 0x008:
     VAR_21.si_code = VAR_3;
     break;
    case 0x020:
     VAR_21.si_code = VAR_4;
     break;
   }

   break;
  }

       case 17:
  VAR_21.si_signo = VAR_10;
  VAR_21.si_code = VAR_0;
  break;

       case 19:
  VAR_21.si_signo = VAR_8;
  VAR_21.si_code = 0;
  break;

       default:
  return -1;
 }
 FUNC_0(VAR_21.si_signo, &VAR_21, VAR_18);
 return 0;
}
