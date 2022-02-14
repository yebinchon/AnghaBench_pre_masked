
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int depth; int * chip; int * action; int status; } ;
struct TYPE_3__ {int intr_cicr; int intr_cimr; } ;


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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int * VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 () ;
 int VAR_37 ;
 int VAR_38 ;
 TYPE_2__* VAR_39 ;
 TYPE_1__* VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

void FUNC_1(void)
{
 int VAR_43;
 int VAR_44 = (VAR_31<<4);


 VAR_34[2] = VAR_36;
 VAR_34[3] = VAR_42;
 VAR_34[4] = VAR_42;
 VAR_34[5] = VAR_42;
 VAR_34[6] = VAR_42;
 VAR_34[7] = VAR_42;
 VAR_34[8] = VAR_42;
 VAR_34[9] = VAR_42;
 VAR_34[10] = VAR_42;
 VAR_34[11] = VAR_42;
 VAR_34[12] = VAR_42;
 VAR_34[13] = VAR_42;
 VAR_34[14] = VAR_42;
 VAR_34[15] = VAR_42;

 VAR_34[32] = VAR_41;
 VAR_34[33] = VAR_42;

 FUNC_0();



 VAR_40->intr_cicr = 0x00e49f00 | VAR_44;


 VAR_34[VAR_44+VAR_0] = VAR_35;
 VAR_34[VAR_44+VAR_6] = VAR_38;
 VAR_34[VAR_44+VAR_5] = VAR_38;
 VAR_34[VAR_44+VAR_25] = VAR_38;
 VAR_34[VAR_44+VAR_24] = VAR_38;
 VAR_34[VAR_44+VAR_26] = VAR_38;
 VAR_34[VAR_44+VAR_14] = VAR_38;
 VAR_34[VAR_44+VAR_30] = VAR_38;
 VAR_34[VAR_44+VAR_15] = VAR_38;
 VAR_34[VAR_44+VAR_13] = VAR_38;
 VAR_34[VAR_44+VAR_12] = VAR_38;
 VAR_34[VAR_44+VAR_11] = VAR_38;
 VAR_34[VAR_44+VAR_29] = VAR_38;
 VAR_34[VAR_44+VAR_18] = VAR_38;
 VAR_34[VAR_44+VAR_10] = VAR_38;
 VAR_34[VAR_44+VAR_9] = VAR_38;
 VAR_34[VAR_44+VAR_16] = VAR_38;
 VAR_34[VAR_44+VAR_18] = VAR_38;
 VAR_34[VAR_44+VAR_28] = VAR_38;
 VAR_34[VAR_44+VAR_17] = VAR_38;
 VAR_34[VAR_44+VAR_2] = VAR_38;
 VAR_34[VAR_44+VAR_1] = VAR_38;
 VAR_34[VAR_44+VAR_23] = VAR_38;
 VAR_34[VAR_44+VAR_8] = VAR_38;
 VAR_34[VAR_44+VAR_7] = VAR_38;

 VAR_34[VAR_44+VAR_27] = VAR_38;
 VAR_34[VAR_44+VAR_4] = VAR_38;
 VAR_34[VAR_44+VAR_22] = VAR_38;
 VAR_34[VAR_44+VAR_21] = VAR_38;
 VAR_34[VAR_44+VAR_20] = VAR_38;
 VAR_34[VAR_44+VAR_19] = VAR_38;
 VAR_34[VAR_44+VAR_3] = VAR_38;



 VAR_40->intr_cimr = 0x00000000;

 for (VAR_43 = 0; (VAR_43 < VAR_33); VAR_43++) {
  VAR_39[VAR_43].status = VAR_32;
  VAR_39[VAR_43].action = ((void*)0);
  VAR_39[VAR_43].depth = 1;
  VAR_39[VAR_43].chip = &VAR_37;
 }
}
