
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum ctype { ____Placeholder_ctype } ctype ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (size_t,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int*,int,size_t) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(enum ctype VAR_2)
{
 switch (VAR_2) {
 case 131:
  FUNC_6("dumptest");
  break;
 case 140:
  FUNC_0();
  break;
 case 138:
  *((int *) 0) = 0;
  break;
 case 135:
  for (;;)
   ;
  break;
 case 133:
  (void) FUNC_8(0);
  break;
 case 139: {
  volatile u32 VAR_3[8];
  volatile u32 *VAR_4 = VAR_3;

  VAR_4[12] = 0x12345678;
  break;
 }
 case 129: {
  static u8 VAR_5[5] __attribute__((aligned(4))) = {1, 2,
    3, 4, 5};
  u32 *VAR_6;
  u32 VAR_7 = 0x12345678;

  VAR_6 = (u32 *)(VAR_5 + 1);
  if (*VAR_6 == 0)
   VAR_7 = 0x87654321;
  *VAR_6 = VAR_7;
   break;
 }
 case 132: {
  size_t VAR_8 = 1020;
  u32 *VAR_9 = FUNC_3(VAR_8, VAR_0);

  VAR_9[1024 / sizeof(u32)] = 0x12345678;
  FUNC_2(VAR_9);
  break;
 }
 case 128: {
  size_t VAR_10 = 1024;
  u32 *VAR_11 = FUNC_3(VAR_10, VAR_0);

  FUNC_2(VAR_11);
  FUNC_9();
  FUNC_5(VAR_11, 0x78, VAR_10);
  break;
 }
 case 130:
  FUNC_7();
  for (;;)
   FUNC_1();
  break;
 case 137:
  FUNC_4();
  for (;;)
   FUNC_1();
  break;
 case 136:
  FUNC_10(VAR_1);
  FUNC_9();
  break;
 case 134:
 default:
  break;
 }

}
