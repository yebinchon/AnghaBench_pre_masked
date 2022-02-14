
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;

__attribute__((used)) static inline int
FUNC_1 (unsigned long VAR_3, int VAR_4, int VAR_5, unsigned long VAR_6)
{
  unsigned long VAR_7, VAR_8;

  switch (VAR_4)
    {
    case 130:
      switch (VAR_5)
 {
 case 132:

   __asm__ __volatile__ ("nop\n\t"
    ".chip 68040\n\t"
    "cpusha %dc\n\t"
    ".chip 68k");
   break;
 case 131:
   __asm__ __volatile__ ("nop\n\t"
    ".chip 68040\n\t"
    "cpusha %ic\n\t"
    ".chip 68k");
   break;
 default:
 case 133:
   __asm__ __volatile__ ("nop\n\t"
    ".chip 68040\n\t"
    "cpusha %bc\n\t"
    ".chip 68k");
   break;
 }
      break;

    case 129:


      if ((VAR_7 = FUNC_0(VAR_3))) {
        VAR_7 += VAR_3 & ~(VAR_0 | 15);
        VAR_6 = (VAR_6 + (VAR_3 & 15) + 15) >> 4;
      } else {
 unsigned long VAR_9 = VAR_2 - (VAR_3 & ~VAR_0);

 if (VAR_6 <= VAR_9)
   return 0;
 VAR_3 += VAR_9;
 VAR_6 -= VAR_9;
 VAR_9 = VAR_2;
 for (;;)
   {
     if ((VAR_7 = FUNC_0(VAR_3)))
       break;
     if (VAR_6 <= VAR_9)
       return 0;
     VAR_3 += VAR_9;
     VAR_6 -= VAR_9;
   }
 VAR_6 = (VAR_6 + 15) >> 4;
      }
      VAR_8 = (VAR_2 - (VAR_7 & ~VAR_0)) >> 4;
      while (VAR_6--)
 {
   switch (VAR_5)
     {
     case 132:
       __asm__ __volatile__ ("nop\n\t"
        ".chip 68040\n\t"
        "cpushl %%dc,(%0)\n\t"
        ".chip 68k"
        : : "a" (VAR_7));
       break;
     case 131:
       __asm__ __volatile__ ("nop\n\t"
        ".chip 68040\n\t"
        "cpushl %%ic,(%0)\n\t"
        ".chip 68k"
        : : "a" (VAR_7));
       break;
     default:
     case 133:
       __asm__ __volatile__ ("nop\n\t"
        ".chip 68040\n\t"
        "cpushl %%bc,(%0)\n\t"
        ".chip 68k"
        : : "a" (VAR_7));
       break;
     }
   if (!--VAR_8 && VAR_6)
     {




       VAR_3 += VAR_2;
       VAR_8 = VAR_2 / 16;


       for (;;)
  {
    if ((VAR_7 = FUNC_0(VAR_3)))
      break;
    if (VAR_6 <= VAR_8)
      return 0;
    VAR_6 -= VAR_8;
    VAR_3 += VAR_2;
  }
     }
   else
     VAR_7 += 16;
 }
      break;

    default:
    case 128:
      VAR_6 += (VAR_3 & ~VAR_0) + (VAR_2 - 1);
      for (VAR_6 >>= VAR_1; VAR_6--; VAR_3 += VAR_2)
 {
   if (!(VAR_7 = FUNC_0(VAR_3)))
     continue;
   switch (VAR_5)
     {
     case 132:
       __asm__ __volatile__ ("nop\n\t"
        ".chip 68040\n\t"
        "cpushp %%dc,(%0)\n\t"
        ".chip 68k"
        : : "a" (VAR_7));
       break;
     case 131:
       __asm__ __volatile__ ("nop\n\t"
        ".chip 68040\n\t"
        "cpushp %%ic,(%0)\n\t"
        ".chip 68k"
        : : "a" (VAR_7));
       break;
     default:
     case 133:
       __asm__ __volatile__ ("nop\n\t"
        ".chip 68040\n\t"
        "cpushp %%bc,(%0)\n\t"
        ".chip 68k"
        : : "a" (VAR_7));
       break;
     }
 }
      break;
    }
  return 0;
}
