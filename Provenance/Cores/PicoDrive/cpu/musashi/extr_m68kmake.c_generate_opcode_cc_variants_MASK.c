
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int length; } ;
typedef TYPE_1__ replace_struct ;
struct TYPE_11__ {int op_mask; int op_match; scalar_t__ name; } ;
typedef TYPE_2__ opcode_struct ;
typedef int body_struct ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 char*** VAR_2 ;
 int FUNC_2 (int *,int *,TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (scalar_t__,char*) ;

void FUNC_6(FILE* VAR_3, body_struct* VAR_4, replace_struct* VAR_5, opcode_struct* VAR_6, int VAR_7)
{
 char VAR_8[20];
 char VAR_9[20];
 int VAR_10;
 int VAR_11 = VAR_5->length;
 opcode_struct* VAR_12 = FUNC_3(sizeof(opcode_struct));

 *VAR_12 = *VAR_6;

 VAR_12->op_mask |= 0x0f00;


 for(VAR_10=2;VAR_10<16;VAR_10++)
 {

  FUNC_4(VAR_8, "COND_%s()", VAR_2[VAR_10][1]);
  FUNC_4(VAR_9, "COND_NOT_%s()", VAR_2[VAR_10][1]);

  FUNC_0(VAR_5, VAR_0, VAR_8);
  FUNC_0(VAR_5, VAR_1, VAR_9);


  FUNC_5(VAR_12->name+VAR_7, VAR_2[VAR_10][0]);

  VAR_12->op_match = (VAR_12->op_match & 0xf0ff) | (VAR_10<<8);


  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_12);

  VAR_5->length = VAR_11;
 }
 FUNC_1(VAR_12);
}
