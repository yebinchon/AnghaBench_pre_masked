
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 () ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (unsigned short*,int,int) ;
 int FUNC_6 (unsigned short*,int) ;
 char* FUNC_7 () ;
 int VAR_15 ;
 int FUNC_8 () ;
 int VAR_16 ;
 int * VAR_17 ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int,int) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (int,int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_14 (scalar_t__,int ,int) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 () ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ,int,char*,int) ;

__attribute__((used)) static void FUNC_22(void)
{
 int VAR_23, VAR_24 = 0;
 int VAR_25 = 0, VAR_26 = 0;
 char *VAR_27;

 while (1)
 {
  FUNC_15(1, 0);
  switch (VAR_24)
  {
   case 0: VAR_27 = FUNC_3();
    FUNC_20(VAR_27);
    FUNC_10(VAR_27, 0, 0);
    if (VAR_26) {
     FUNC_21(VAR_20 - 6 * VAR_22,
      VAR_18 - VAR_21, "dumped", 0xffff);
     VAR_26 = 0;
    }
    break;
   case 1: FUNC_9();
    break;
   case 2: FUNC_19(1, 0);
    FUNC_13(1);
    FUNC_6((unsigned short *)VAR_19 + (VAR_18/2 - 240/2)*VAR_20 +
     VAR_20/2 - 320/2, VAR_20);
    break;
   case 3: FUNC_14(VAR_19, 0, VAR_20 * VAR_18 * 2);
    FUNC_4(VAR_19, VAR_20);
    FUNC_5((unsigned short *)VAR_19 + VAR_20*120 + VAR_20/2 + 16,
     VAR_20, VAR_25);
    FUNC_10(FUNC_7(), VAR_25, 6);
    break;
   case 4: VAR_27 = FUNC_0();
    FUNC_10(VAR_27, 0, 0);
    break;
  }
  FUNC_16();

  VAR_23 = FUNC_11(VAR_6|VAR_5|VAR_3|VAR_4|VAR_1|VAR_7 |
     VAR_9|VAR_0|VAR_2|VAR_8, ((void*)0), 70);
  if (VAR_23 & VAR_5) return;
  if (VAR_23 & VAR_1) { VAR_24--; if (VAR_24 < 0) VAR_24 = 4; }
  if (VAR_23 & VAR_7) { VAR_24++; if (VAR_24 > 4) VAR_24 = 0; }
  switch (VAR_24)
  {
   case 0:
    if (VAR_23 & VAR_6)
     FUNC_1();
    if (VAR_23 & VAR_4) {
     while (VAR_23 & VAR_4)
      VAR_23 = FUNC_12(((void*)0), -1);
     FUNC_18();
    }
    if ((VAR_23 & (VAR_3|VAR_2)) == (VAR_3|VAR_2)) {
     FUNC_17("dumps", 0777);
     FUNC_2();
     while (VAR_23 & VAR_3) VAR_23 = FUNC_12(((void*)0), -1);
     VAR_26 = 1;
    }
    break;
   case 1:
    if (VAR_23 & VAR_2) VAR_15 ^= VAR_12;
    if (VAR_23 & VAR_8) VAR_15 ^= VAR_11;
    if (VAR_23 & VAR_0) VAR_15 ^= VAR_14;
    if (VAR_23 & VAR_9) VAR_15 ^= VAR_13;
    if (VAR_23 & VAR_3) VAR_15 ^= VAR_10;
    if (VAR_23 & VAR_6) {
     VAR_17 = ((void*)0);
     VAR_16 = 1;
     FUNC_8();
     VAR_16 = 0;
     while (VAR_23 & VAR_6) VAR_23 = FUNC_12(((void*)0), -1);
    }
    break;
   case 3:
    if (VAR_23 & VAR_0) VAR_25++;
    if (VAR_23 & VAR_9) VAR_25--;
    if (VAR_25 < 0) VAR_25 = 0;
    break;
  }
 }
}
