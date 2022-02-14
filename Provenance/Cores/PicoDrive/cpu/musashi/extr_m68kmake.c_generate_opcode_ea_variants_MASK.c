
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; } ;
typedef TYPE_1__ replace_struct ;
struct TYPE_8__ {int size; int ea_allowed; } ;
typedef TYPE_2__ opcode_struct ;
typedef int body_struct ;
typedef int FILE ;


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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,int *,TYPE_1__*,TYPE_2__*,int ) ;

void FUNC_12(FILE* VAR_13, body_struct* VAR_14, replace_struct* VAR_15, opcode_struct* VAR_16)
{
 int VAR_17 = VAR_15->length;


 if(FUNC_10(VAR_16->ea_allowed))
 {
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_6);
  return;
 }


 if(FUNC_0(VAR_16->ea_allowed))
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_0);
 VAR_15->length = VAR_17;
 if(FUNC_9(VAR_16->ea_allowed))
 {
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_11);
  VAR_15->length = VAR_17;
  if(VAR_16->size == 8)
   FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_12);
 }
 VAR_15->length = VAR_17;
 if(FUNC_8(VAR_16->ea_allowed))
 {
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_9);
  VAR_15->length = VAR_17;
  if(VAR_16->size == 8)
   FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_10);
 }
 VAR_15->length = VAR_17;
 if(FUNC_3(VAR_16->ea_allowed))
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_3);
 VAR_15->length = VAR_17;
 if(FUNC_5(VAR_16->ea_allowed))
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_5);
 VAR_15->length = VAR_17;
 if(FUNC_2(VAR_16->ea_allowed))
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_2);
 VAR_15->length = VAR_17;
 if(FUNC_1(VAR_16->ea_allowed))
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_1);
 VAR_15->length = VAR_17;
 if(FUNC_6(VAR_16->ea_allowed))
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_7);
 VAR_15->length = VAR_17;
 if(FUNC_7(VAR_16->ea_allowed))
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_8);
 VAR_15->length = VAR_17;
 if(FUNC_4(VAR_16->ea_allowed))
  FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_4);
 VAR_15->length = VAR_17;
}
