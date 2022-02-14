
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,char*,int ,int *) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;

int FUNC_14(int VAR_9, char *VAR_10[])
{
 int VAR_11;

 VAR_8 = FUNC_3();

 while ((VAR_11 = FUNC_2(VAR_9, VAR_10,
    "rp:f:a:b:d:lLNXxh", VAR_7, ((void*)0))) != -1) {
  switch (VAR_11) {
  case 'r':
   VAR_4 = 1;
   break;
  case 'p':
   FUNC_7(VAR_6);
   break;
  case 'f':
   FUNC_6(VAR_6);
   break;
  case 'a':
   FUNC_4(VAR_6);
   break;
  case 'b':
   FUNC_5(VAR_6);
   break;
  case 'd':
   FUNC_0(VAR_6);
   FUNC_1(0);
  case 'l':
   VAR_1 = 1;
   break;
  case 'L':
   VAR_1 = 2;
   break;
  case 'N':
   VAR_2 = 1;
   break;
  case 'X':
   VAR_0 = 1;
   FUNC_8();
   break;
  case 'x':
   VAR_5 = 1;
   FUNC_8();
   break;
  case 'h':
   FUNC_12();
   FUNC_1(0);
  default:
   FUNC_12();
   FUNC_1(1);
  }
 }

 if (VAR_1 && VAR_3)
  FUNC_9("voffset\t");
 if (VAR_1 == 1)
  FUNC_9("offset\tlen\tflags\n");
 if (VAR_1 == 2)
  FUNC_9("offset\tflags\n");

 FUNC_13();

 if (VAR_1 == 1)
  FUNC_10(0, 0, 0);

 if (VAR_2)
  return 0;

 if (VAR_1)
  FUNC_9("\n\n");

 FUNC_11();

 return 0;
}
