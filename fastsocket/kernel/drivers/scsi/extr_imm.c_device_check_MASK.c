
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int base; int mode; } ;
typedef TYPE_1__ imm_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (char*,...) ;
 unsigned char FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(imm_struct *VAR_5)
{



 static char VAR_6[6] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = VAR_5->base;
 unsigned char VAR_12;

 VAR_8 = VAR_5->mode;
 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {

  if ((VAR_11 & 0x0007) == 0x0000)
   VAR_5->mode = VAR_3;

       second_pass:
  FUNC_0(VAR_5, VAR_0);

  if (!FUNC_4(VAR_5, VAR_7)) {
   FUNC_1(VAR_5);
   continue;
  }
  FUNC_5("imm: Found device at ID %i, Attempting to use %s\n",
         VAR_7, VAR_4[VAR_5->mode]);


  VAR_9 = 1;
  FUNC_8(VAR_11, 0x0c);
  for (VAR_12 = 0; (VAR_12 < 3) && (VAR_9); VAR_12++)
   VAR_9 = FUNC_2(VAR_5, &VAR_6[VAR_12 << 1], 2);

  if (!VAR_9) {
   FUNC_1(VAR_5);
   FUNC_0(VAR_5, VAR_0);
   FUNC_3(VAR_5->base);
   FUNC_7(1000);
   FUNC_1(VAR_5);
   FUNC_7(1000);
   if (VAR_5->mode == VAR_3) {
    VAR_5->mode = VAR_8;
    goto second_pass;
   }
   FUNC_5("imm: Unable to establish communication\n");
   return -VAR_1;
  }
  FUNC_8(VAR_11, 0x0c);

  VAR_10 = 1000000;
  do {
   VAR_12 = FUNC_6(VAR_11);
   VAR_10--;
   FUNC_7(1);
  } while (!(VAR_12 & 0x80) && (VAR_10));

  VAR_12 &= 0xb8;

  if (VAR_12 != 0xb8) {
   FUNC_1(VAR_5);
   FUNC_0(VAR_5, VAR_0);
   FUNC_3(VAR_5->base);
   FUNC_7(1000);
   FUNC_1(VAR_5);
   FUNC_7(1000);
   if (VAR_5->mode == VAR_3) {
    VAR_5->mode = VAR_8;
    goto second_pass;
   }
   FUNC_5
       ("imm: Unable to establish communication\n");
   return -VAR_1;
  }
  FUNC_1(VAR_5);
  FUNC_5
      ("imm: Communication established at 0x%x with ID %i using %s\n",
       VAR_11, VAR_7, VAR_4[VAR_5->mode]);
  FUNC_0(VAR_5, VAR_0);
  FUNC_3(VAR_5->base);
  FUNC_7(1000);
  FUNC_1(VAR_5);
  FUNC_7(1000);
  return 0;
 }
 FUNC_5("imm: No devices found\n");
 return -VAR_2;
}
