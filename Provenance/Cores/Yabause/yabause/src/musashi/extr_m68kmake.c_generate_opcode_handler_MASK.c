
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int replace_struct ;
typedef int opcode_struct ;
typedef int body_struct ;
struct TYPE_2__ {char* ea_add; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,char*) ;

void FUNC_10(FILE* VAR_11, body_struct* VAR_12, replace_struct* VAR_13, opcode_struct* VAR_14, int VAR_15)
{
 char VAR_16[VAR_7+1];
 opcode_struct* VAR_17 = FUNC_4(sizeof(opcode_struct));


 FUNC_5(VAR_14, VAR_17, VAR_15);
 FUNC_3(VAR_16, VAR_17);
 FUNC_9(VAR_10, VAR_16);
 FUNC_0(VAR_17, VAR_16);
 FUNC_8(VAR_11, VAR_16);


 if(VAR_15 != VAR_0)
 {
  FUNC_6(VAR_16, "EA_%s_8()", VAR_8[VAR_15].ea_add);
  FUNC_1(VAR_13, VAR_3, VAR_16);
  FUNC_6(VAR_16, "EA_%s_16()", VAR_8[VAR_15].ea_add);
  FUNC_1(VAR_13, VAR_1, VAR_16);
  FUNC_6(VAR_16, "EA_%s_32()", VAR_8[VAR_15].ea_add);
  FUNC_1(VAR_13, VAR_2, VAR_16);
  FUNC_6(VAR_16, "OPER_%s_8()", VAR_8[VAR_15].ea_add);
  FUNC_1(VAR_13, VAR_6, VAR_16);
  FUNC_6(VAR_16, "OPER_%s_16()", VAR_8[VAR_15].ea_add);
  FUNC_1(VAR_13, VAR_4, VAR_16);
  FUNC_6(VAR_16, "OPER_%s_32()", VAR_8[VAR_15].ea_add);
  FUNC_1(VAR_13, VAR_5, VAR_16);
 }


 FUNC_7(VAR_11, VAR_12, VAR_13);
 VAR_9++;
 FUNC_2(VAR_17);
}
