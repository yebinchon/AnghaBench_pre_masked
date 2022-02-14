
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int * function; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 () ;
 char* VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_5 () ;
 int VAR_15 ;
 int FUNC_6 () ;
 int VAR_16 ;
 int FUNC_7 (char) ;
 scalar_t__ VAR_17 ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned char) ;
 scalar_t__ VAR_18 ;
 TYPE_1__ VAR_19 ;
 int FUNC_10 () ;
 int * FUNC_11 (char*,char) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_13(struct file *VAR_20,
    const char *VAR_21, size_t VAR_22, loff_t *VAR_23)
{

 const char *VAR_24 = VAR_21;
 char VAR_25;

 for (; VAR_22-- > 0; (VAR_23 ? (*VAR_23)++ : 0), ++VAR_24) {
  if (!FUNC_1() && (((VAR_22 + 1) & 0x1f) == 0))
   FUNC_10();

  if (VAR_23 == ((void*)0) && VAR_20 == ((void*)0))
   VAR_25 = *VAR_24;
  else if (FUNC_0(VAR_25, VAR_24))
   return -VAR_0;


  if ((VAR_25 != '\n') && VAR_13 >= 0) {
   VAR_12[VAR_13++] = VAR_25;
   VAR_12[VAR_13] = 0;
  } else {
   VAR_13 = -1;

   switch (VAR_25) {
   case 128:
    VAR_13 = 0;
    VAR_12[VAR_13] = 0;
    break;
   case '\b':
    if (VAR_9 > 0) {
     if (VAR_9 < VAR_11)
      FUNC_8(0x10);
     VAR_9--;
    }
    FUNC_9(' ');
    FUNC_8(0x10);
    break;
   case '\014':
    FUNC_4();
    break;
   case '\n':

    for (; VAR_9 < VAR_11; VAR_9++)
     FUNC_9(' ');
    VAR_9 = 0;
    VAR_10 = (VAR_10 + 1) % VAR_15;
    FUNC_5();
    break;
   case '\r':
    VAR_9 = 0;
    FUNC_5();
    break;
   case '\t':
    FUNC_7(' ');
    break;
   default:
    FUNC_7(VAR_25);
    break;
   }
  }




  if (VAR_13 >= 2) {
   int VAR_26 = 0;

   if (!FUNC_12(VAR_12, "[2J")) {
    FUNC_4();
    VAR_26 = 1;
   } else if (!FUNC_12(VAR_12, "[H")) {
    VAR_9 = VAR_10 = 0;
    FUNC_5();
    VAR_26 = 1;
   }

   else if ((VAR_13 >= 3) &&
     (VAR_12[0] == '[') && (VAR_12[1] == 'L')) {

    char *VAR_27 = VAR_12 + 2;
    int VAR_28 = VAR_14;


    switch (*VAR_27) {
    case 'D':
     VAR_14 |= VAR_5;
     VAR_26 = 1;
     break;
    case 'd':
     VAR_14 &= ~VAR_5;
     VAR_26 = 1;
     break;
    case 'C':
     VAR_14 |= VAR_4;
     VAR_26 = 1;
     break;
    case 'c':
     VAR_14 &= ~VAR_4;
     VAR_26 = 1;
     break;
    case 'B':
     VAR_14 |= VAR_3;
     VAR_26 = 1;
     break;
    case 'b':
     VAR_14 &= ~VAR_3;
     VAR_26 = 1;
     break;
    case '+':
     VAR_14 |= VAR_7;
     VAR_26 = 1;
     break;
    case '-':
     VAR_14 &= ~VAR_7;
     VAR_26 = 1;
     break;
    case '*':
     if (VAR_19.function != ((void*)0)) {
      if (VAR_18 == 0
          && ((VAR_14 & VAR_7)
       == 0))
       FUNC_3(1);
      VAR_18 = VAR_1;
     }
     VAR_26 = 1;
     break;
    case 'f':
     VAR_14 &= ~VAR_6;
     VAR_26 = 1;
     break;
    case 'F':
     VAR_14 |= VAR_6;
     VAR_26 = 1;
     break;
    case 'n':
     VAR_14 &= ~VAR_8;
     VAR_26 = 1;
     break;
    case 'N':
     VAR_14 |= VAR_8;
     break;

    case 'l':
     if (VAR_9 > 0) {
      if (VAR_9 < VAR_11)
       FUNC_8(0x10);
      VAR_9--;
     }
     VAR_26 = 1;
     break;

    case 'r':
     if (VAR_9 < VAR_17) {
      if (VAR_9 < (VAR_11 - 1))
       FUNC_8(0x14);
      VAR_9++;
     }
     VAR_26 = 1;
     break;

    case 'L':
     VAR_16++;
     FUNC_8(0x18);
     VAR_26 = 1;
     break;

    case 'R':
     VAR_16--;
     FUNC_8(0x1C);
     VAR_26 = 1;
     break;

    case 'k':{
      int VAR_29;
      for (VAR_29 = VAR_9; VAR_29 < VAR_11; VAR_29++)
       FUNC_9(' ');
      FUNC_5();
      VAR_26 = 1;
      break;
     }
    case 'I':
     FUNC_6();
     VAR_16 = 0;
     VAR_26 = 1;
     break;

    case 'G': {






      unsigned char VAR_30[8];
      unsigned char VAR_31;
      int VAR_32;
      int VAR_33;
      char VAR_34;
      int VAR_35;

      if (FUNC_11(VAR_27, ';') == ((void*)0))
       break;

      VAR_27++;

      VAR_31 = *(VAR_27++) - '0';
      if (VAR_31 > 7) {
       VAR_26 = 1;
       break;
      }

      VAR_32 = 0;
      VAR_33 = 0;
      VAR_34 = 0;
      while (*VAR_27 && VAR_32 < 8) {
       VAR_33 ^= 4;
       if (*VAR_27 >= '0' && *VAR_27 <= '9')
        VAR_34 |= (*VAR_27 - '0') << VAR_33;
       else if (*VAR_27 >= 'A' && *VAR_27 <= 'Z')
        VAR_34 |= (*VAR_27 - 'A' + 10) << VAR_33;
       else if (*VAR_27 >= 'a' && *VAR_27 <= 'z')
        VAR_34 |= (*VAR_27 - 'a' + 10) << VAR_33;
       else {
        VAR_27++;
        continue;
       }

       if (VAR_33 == 0) {
        VAR_30[VAR_32++] = VAR_34;
        VAR_34 = 0;
       }

       VAR_27++;
      }

      FUNC_8(0x40 | (VAR_31 * 8));
      for (VAR_35 = 0; VAR_35 < VAR_32; VAR_35++)
       FUNC_9(VAR_30[VAR_35]);

      FUNC_5();
      VAR_26 = 1;
      break;
     }
    case 'x':
    case 'y':
     if (FUNC_11(VAR_27, ';') == ((void*)0))
      break;

     while (*VAR_27) {
      if (*VAR_27 == 'x') {
       VAR_27++;
       VAR_9 = 0;
       while (FUNC_2(*VAR_27)) {
        VAR_9 =
            VAR_9 *
            10 + (*VAR_27 -
           '0');
        VAR_27++;
       }
      } else if (*VAR_27 == 'y') {
       VAR_27++;
       VAR_10 = 0;
       while (FUNC_2(*VAR_27)) {
        VAR_10 =
            VAR_10 *
            10 + (*VAR_27 -
           '0');
        VAR_27++;
       }
      } else
       break;
     }

     FUNC_5();
     VAR_26 = 1;
     break;
    }


    if (VAR_28 != VAR_14) {

     if ((VAR_28 ^ VAR_14) &
         (VAR_3 | VAR_4 | VAR_5))

      FUNC_8(0x08 |
             ((VAR_14 & VAR_5) ? 4 : 0) |
             ((VAR_14 & VAR_4) ? 2 : 0) |
             ((VAR_14 & VAR_3) ? 1 : 0));

     else if ((VAR_28 ^ VAR_14) &
       (VAR_6 | VAR_8))
      FUNC_8(0x30 |
             ((VAR_14 & VAR_6) ? 4 : 0) |
             ((VAR_14 & VAR_8) ? 8 : 0));

     else if ((VAR_28 ^ VAR_14) &
       (VAR_7)) {
      if (VAR_14 & (VAR_7))
       FUNC_3(1);
      else if (VAR_18 == 0)
       FUNC_3(0);
     }
    }
   }




   if (VAR_26 || (VAR_13 >= VAR_2))
    VAR_13 = -1;
  }
 }

 return VAR_24 - VAR_21;
}
