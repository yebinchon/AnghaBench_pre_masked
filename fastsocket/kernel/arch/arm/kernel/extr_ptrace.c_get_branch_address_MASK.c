
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct task_struct {int dummy; } ;







 unsigned long VAR_0 ;







 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (struct task_struct*,unsigned long) ;
 int FUNC_1 (unsigned long) ;
 long FUNC_2 (struct task_struct*,unsigned long) ;
 long FUNC_3 (struct task_struct*,unsigned long) ;
 void* FUNC_4 (struct task_struct*,unsigned long) ;
 int FUNC_5 (struct task_struct*,unsigned long,unsigned long*) ;

__attribute__((used)) static unsigned long
FUNC_6(struct task_struct *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 u32 VAR_6 = 0;

 switch (VAR_5 & 0x0e000000) {
 case 0x00000000:
 case 0x02000000: {



  long VAR_7, VAR_8, VAR_9;

         if ((VAR_5 & 0x0fffffd0) == 0x012fff10) {



   VAR_6 = FUNC_0(VAR_3, VAR_5 & 15);
   break;
  }


  if ((VAR_5 & 0xf000) != 0xf000)
   break;

  VAR_7 = FUNC_4(VAR_3, VAR_5);
  VAR_8 = FUNC_2(VAR_3, VAR_5);
  VAR_9 = FUNC_0(VAR_3, VAR_2) & VAR_1 ? 1 : 0;

  switch (VAR_5 & VAR_0) {
  case 137: VAR_6 = VAR_7 & VAR_8; break;
  case 135: VAR_6 = VAR_7 ^ VAR_8; break;
  case 128: VAR_6 = VAR_7 - VAR_8; break;
  case 131: VAR_6 = VAR_8 - VAR_7; break;
  case 138: VAR_6 = VAR_7 + VAR_8; break;
  case 139: VAR_6 = VAR_7 + VAR_8 + VAR_9; break;
  case 129: VAR_6 = VAR_7 - VAR_8 + VAR_9; break;
  case 130: VAR_6 = VAR_8 - VAR_7 + VAR_9; break;
  case 132: VAR_6 = VAR_7 | VAR_8; break;
  case 134: VAR_6 = VAR_8; break;
  case 136: VAR_6 = VAR_7 & ~VAR_8; break;
  case 133: VAR_6 = ~VAR_8; break;
  }
  break;
 }

 case 0x04000000:
 case 0x06000000:



  if ((VAR_5 & 0x0010f000) == 0x0010f000) {
   unsigned long VAR_10;

   VAR_10 = FUNC_4(VAR_3, VAR_5);
   if (VAR_5 & 1 << 24) {
    long VAR_11;

    if (VAR_5 & 0x02000000)
     VAR_11 = FUNC_3(VAR_3, VAR_5);
    else
     VAR_11 = VAR_5 & 0xfff;

    if (VAR_5 & 1 << 23)
     VAR_10 += VAR_11;
    else
     VAR_10 -= VAR_11;
   }
   FUNC_5(VAR_3, VAR_10, &VAR_6);
  }
  break;

 case 0x08000000:



  if ((VAR_5 & 0x00108000) == 0x00108000) {
   unsigned long VAR_12;
   unsigned int VAR_13;

   if (VAR_5 & (1 << 23)) {
    VAR_13 = FUNC_1(VAR_5 & 65535) << 2;

    if (!(VAR_5 & (1 << 24)))
     VAR_13 -= 4;
   } else {
    if (VAR_5 & (1 << 24))
     VAR_13 = -4;
    else
     VAR_13 = 0;
   }

   VAR_12 = FUNC_4(VAR_3, VAR_5);

   FUNC_5(VAR_3, VAR_12 + VAR_13, &VAR_6);
   break;
  }
  break;

 case 0x0a000000: {



  signed long VAR_14;







  VAR_14 = (VAR_5 & 0x00ffffff) << 8;
  VAR_14 = (VAR_14 >> 6) + 8;
  if (VAR_14 != 0 && VAR_14 != 4)
   VAR_6 = VAR_4 + VAR_14;
     }
     break;
 }

 return VAR_6;
}
