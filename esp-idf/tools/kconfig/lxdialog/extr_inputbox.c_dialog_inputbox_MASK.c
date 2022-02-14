
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_7__ {int atr; } ;
struct TYPE_6__ {int atr; } ;
struct TYPE_5__ {int atr; } ;
struct TYPE_8__ {TYPE_3__ inputbox; TYPE_2__ border; TYPE_1__ dialog; } ;


 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;

 int VAR_7 ;
 int FUNC_0 (int *) ;
 char* VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_1 (int *,int,int,int,int,int ,int ) ;
 int FUNC_2 (int ,int,int,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int,int ,int ) ;
 int * FUNC_10 (int,int,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,char const*,int,int,int) ;
 int FUNC_14 (int *,int,int,int) ;
 int FUNC_15 (int *,char const*,int) ;
 int VAR_10 ;
 int FUNC_16 (char*,char const*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int *,char) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int,int) ;
 int FUNC_23 (int *) ;

int FUNC_24(const char *VAR_11, const char *VAR_12, int VAR_13, int VAR_14,
      const char *VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22 = 0, VAR_23 = 0, VAR_24 = -1;
 int VAR_25, VAR_26, VAR_27;
 char *VAR_28 = VAR_8;
 WINDOW *VAR_29;

 if (!VAR_15)
  VAR_28[0] = '\0';
 else
  FUNC_16(VAR_28, VAR_15);

do_resize:
 if (FUNC_5(VAR_10) <= (VAR_13 - VAR_4))
  return -VAR_3;
 if (FUNC_4(VAR_10) <= (VAR_14 - VAR_5))
  return -VAR_3;


 VAR_17 = (FUNC_4(VAR_10) - VAR_14) / 2;
 VAR_18 = (FUNC_5(VAR_10) - VAR_13) / 2;

 FUNC_2(VAR_10, VAR_18, VAR_17, VAR_13, VAR_14);

 VAR_29 = FUNC_10(VAR_13, VAR_14, VAR_18, VAR_17);
 FUNC_8(VAR_29, VAR_7);

 FUNC_1(VAR_29, 0, 0, VAR_13, VAR_14,
   VAR_9.dialog.atr, VAR_9.border.atr);
 FUNC_20(VAR_29, VAR_9.border.atr);
 FUNC_9(VAR_29, VAR_13 - 3, 0, VAR_1);
 for (VAR_16 = 0; VAR_16 < VAR_14 - 2; VAR_16++)
  FUNC_18(VAR_29, VAR_0);
 FUNC_20(VAR_29, VAR_9.dialog.atr);
 FUNC_18(VAR_29, VAR_2);

 FUNC_15(VAR_29, VAR_11, VAR_14);

 FUNC_20(VAR_29, VAR_9.dialog.atr);
 FUNC_13(VAR_29, VAR_12, VAR_14 - 2, 1, 3);


 VAR_21 = VAR_14 - 6;
 FUNC_6(VAR_29, VAR_18, VAR_17);
 VAR_19 = VAR_18 + 2;
 VAR_20 = (VAR_14 - VAR_21) / 2;
 FUNC_1(VAR_29, VAR_18 + 1, VAR_20 - 1, 3, VAR_21 + 2,
   VAR_9.dialog.atr, VAR_9.border.atr);

 FUNC_14(VAR_29, VAR_13, VAR_14, 0);


 FUNC_22(VAR_29, VAR_19, VAR_20);
 FUNC_20(VAR_29, VAR_9.inputbox.atr);

 VAR_26 = FUNC_17(VAR_28);
 VAR_27 = VAR_26;

 if (VAR_26 >= VAR_21) {
  VAR_25 = VAR_26 - VAR_21 + 1;
  VAR_22 = VAR_21 - 1;
  for (VAR_16 = 0; VAR_16 < VAR_21 - 1; VAR_16++)
   FUNC_18(VAR_29, VAR_28[VAR_25 + VAR_16]);
 } else {
  VAR_25 = 0;
  VAR_22 = VAR_26;
  FUNC_19(VAR_29, VAR_28);
 }

 FUNC_22(VAR_29, VAR_19, VAR_20 + VAR_22);

 FUNC_23(VAR_29);

 while (VAR_23 != 133) {
  VAR_23 = FUNC_21(VAR_29);

  if (VAR_24 == -1) {
   switch (VAR_23) {
   case 128:
   case 129:
   case 134:
    break;
   case 135:
   case 127:
    if (VAR_27) {
     FUNC_20(VAR_29, VAR_9.inputbox.atr);
     if (VAR_22 == 0) {
      VAR_25--;
     } else
      VAR_22--;

     if (VAR_27 < VAR_26) {
      for (VAR_16 = VAR_27 - 1; VAR_16 < VAR_26; VAR_16++) {
       VAR_28[VAR_16] = VAR_28[VAR_16+1];
      }
     }

     VAR_27--;
     VAR_26--;
     VAR_28[VAR_26] = '\0';
     FUNC_22(VAR_29, VAR_19, VAR_20);
     for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16++) {
      if (!VAR_28[VAR_25 + VAR_16]) {
       FUNC_18(VAR_29, ' ');
       break;
      }
      FUNC_18(VAR_29, VAR_28[VAR_25 + VAR_16]);
     }
     FUNC_22(VAR_29, VAR_19, VAR_22 + VAR_20);
     FUNC_23(VAR_29);
    }
    continue;
   case 132:
    if (VAR_27 > 0) {
     if (VAR_22 > 0) {
      FUNC_22(VAR_29, VAR_19, --VAR_22 + VAR_20);
     } else if (VAR_22 == 0) {
      VAR_25--;
      FUNC_22(VAR_29, VAR_19, VAR_20);
      for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16++) {
       if (!VAR_28[VAR_25 + VAR_16]) {
        FUNC_18(VAR_29, ' ');
        break;
       }
       FUNC_18(VAR_29, VAR_28[VAR_25 + VAR_16]);
      }
      FUNC_22(VAR_29, VAR_19, VAR_20);
     }
     VAR_27--;
    }
    continue;
   case 130:
    if (VAR_27 < VAR_26) {
     if (VAR_22 < VAR_21 - 1) {
      FUNC_22(VAR_29, VAR_19, ++VAR_22 + VAR_20);
     } else if (VAR_22 == VAR_21 - 1) {
      VAR_25++;
      FUNC_22(VAR_29, VAR_19, VAR_20);
      for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16++) {
       if (!VAR_28[VAR_25 + VAR_16]) {
        FUNC_18(VAR_29, ' ');
        break;
       }
       FUNC_18(VAR_29, VAR_28[VAR_25 + VAR_16]);
      }
      FUNC_22(VAR_29, VAR_19, VAR_22 + VAR_20);
     }
     VAR_27++;
    }
    continue;
   default:
    if (VAR_23 < 0x100 && FUNC_7(VAR_23)) {
     if (VAR_26 < VAR_6) {
      FUNC_20(VAR_29, VAR_9.inputbox.atr);
      if (VAR_27 < VAR_26) {
       for (VAR_16 = VAR_26; VAR_16 > VAR_27; VAR_16--)
        VAR_28[VAR_16] = VAR_28[VAR_16-1];
       VAR_28[VAR_27] = VAR_23;
      } else {
       VAR_28[VAR_26] = VAR_23;
      }
      VAR_27++;
      VAR_26++;
      VAR_28[VAR_26] = '\0';

      if (VAR_22 == VAR_21 - 1) {
       VAR_25++;
      } else {
       VAR_22++;
      }

      FUNC_22(VAR_29, VAR_19, VAR_20);
      for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16++) {
       if (!VAR_28[VAR_25 + VAR_16]) {
        FUNC_18(VAR_29, ' ');
        break;
       }
       FUNC_18(VAR_29, VAR_28[VAR_25 + VAR_16]);
      }
      FUNC_22(VAR_29, VAR_19, VAR_22 + VAR_20);
      FUNC_23(VAR_29);
     } else
      FUNC_3();
     continue;
    }
   }
  }
  switch (VAR_23) {
  case 'O':
  case 'o':
   FUNC_0(VAR_29);
   return 0;
  case 'H':
  case 'h':
   FUNC_0(VAR_29);
   return 1;
  case 129:
  case 132:
   switch (VAR_24) {
   case -1:
    VAR_24 = 1;
    FUNC_14(VAR_29, VAR_13, VAR_14, 1);
    break;
   case 0:
    VAR_24 = -1;
    FUNC_14(VAR_29, VAR_13, VAR_14, 0);
    FUNC_22(VAR_29, VAR_19, VAR_20 + VAR_22);
    FUNC_23(VAR_29);
    break;
   case 1:
    VAR_24 = 0;
    FUNC_14(VAR_29, VAR_13, VAR_14, 0);
    break;
   }
   break;
  case 128:
  case 134:
  case 130:
   switch (VAR_24) {
   case -1:
    VAR_24 = 0;
    FUNC_14(VAR_29, VAR_13, VAR_14, 0);
    break;
   case 0:
    VAR_24 = 1;
    FUNC_14(VAR_29, VAR_13, VAR_14, 1);
    break;
   case 1:
    VAR_24 = -1;
    FUNC_14(VAR_29, VAR_13, VAR_14, 0);
    FUNC_22(VAR_29, VAR_19, VAR_20 + VAR_22);
    FUNC_23(VAR_29);
    break;
   }
   break;
  case ' ':
  case '\n':
   FUNC_0(VAR_29);
   return (VAR_24 == -1 ? 0 : VAR_24);
  case 'X':
  case 'x':
   VAR_23 = 133;
   break;
  case 133:
   VAR_23 = FUNC_11(VAR_29);
   break;
  case 131:
   FUNC_0(VAR_29);
   FUNC_12();
   goto do_resize;
  }
 }

 FUNC_0(VAR_29);
 return 133;
}
