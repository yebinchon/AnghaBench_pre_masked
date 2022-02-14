
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (int,char**,char*,int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_25 ;

int FUNC_13(int VAR_26, char *VAR_27[])
{
 int VAR_28;
 int VAR_29;
 char *VAR_30;

 VAR_6 = FUNC_4();

 while ((VAR_28 = FUNC_3(VAR_26, VAR_27, "aAd::Defhil1noprstvzTS",
      VAR_5, ((void*)0))) != -1)
  switch (VAR_28) {
  case '1':
   VAR_17 = 1;
   break;
  case 'a':
   VAR_10 = 1;
   break;
  case 'A':
   VAR_23 = 1;
   break;
  case 'd':
   VAR_8 = 1;
   if (!FUNC_1(VAR_2))
    FUNC_2("Invalid debug option '%s'\n", VAR_2);
   break;
  case 'D':
   VAR_9 = 1;
   break;
  case 'e':
   VAR_11 = 1;
   break;
  case 'f':
   VAR_12 = 1;
   break;
  case 'h':
   FUNC_12();
   return 0;
  case 'i':
   VAR_13 = 1;
   break;
  case 'n':
   VAR_14 = 1;
   break;
  case 'o':
   VAR_15 = 1;
   break;
  case 'r':
   VAR_16 = 1;
   break;
  case 's':
   VAR_21 = 1;
   break;
  case 'l':
   VAR_18 = 1;
   break;
  case 't':
   VAR_20 = 1;
   break;
  case 'v':
   VAR_25 = 1;
   break;
  case 'z':
   VAR_22 = 0;
   break;
  case 'T':
   VAR_19 = 1;
   break;
  case 'S':
   VAR_24 = 1;
   break;

  default:
   FUNC_2("%s: Invalid option '%c'\n", VAR_27[0], VAR_4);

 }

 if (!VAR_18 && !VAR_10 && !VAR_20 && !VAR_16
  && !VAR_25 && !VAR_21 && !VAR_8 && !VAR_15)
   VAR_18 = 1;

 if (VAR_26 > VAR_3)
  VAR_30 = VAR_27[VAR_3];
 else
  VAR_30 = ".*";

 VAR_29 = FUNC_8(&VAR_7, VAR_30, VAR_0|VAR_1);
 if (VAR_29)
  FUNC_2("%s: Invalid pattern '%s' code %d\n",
   VAR_27[0], VAR_30, VAR_29);
 FUNC_7();
 if (VAR_10)
  FUNC_0();
 else
 if (VAR_19)
  FUNC_11();
 else {
  FUNC_5();
  FUNC_9();
  FUNC_10();
  FUNC_6();
 }
 return 0;
}
