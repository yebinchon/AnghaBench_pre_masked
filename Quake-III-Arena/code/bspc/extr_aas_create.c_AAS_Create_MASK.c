
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int headnode; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_10__ {scalar_t__ numbrushes; scalar_t__ firstbrush; } ;
typedef TYPE_2__ entity_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 double FUNC_18 () ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (char*,double) ;
 int FUNC_21 (TYPE_1__*) ;
 TYPE_1__* FUNC_22 (scalar_t__,scalar_t__) ;
 int FUNC_23 (int ) ;
 int FUNC_24 () ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_27 (int ,char*) ;

void FUNC_28(char *VAR_5)
{
 entity_t *VAR_6;
 tree_t *VAR_7;
 double VAR_8;


 FUNC_27(VAR_4, VAR_5);
 FUNC_23(VAR_4);

 VAR_8 = FUNC_18();

 FUNC_24();

 VAR_2 = 0;

 VAR_6 = &VAR_1[VAR_2];

 VAR_7 = FUNC_22(VAR_6->firstbrush, VAR_6->firstbrush + VAR_6->numbrushes);

 if (VAR_0)
 {
  FUNC_25(VAR_7);
  return;
 }

 FUNC_20("BSP tree created in %5.0f seconds\n", FUNC_18() - VAR_8);

 FUNC_26(VAR_7->headnode);

 if (VAR_0)
 {
  FUNC_25(VAR_7);
  return;
 }

 FUNC_21(VAR_7);

 if (VAR_0)
 {
  FUNC_25(VAR_7);
  return;
 }

 if (FUNC_17(VAR_7))
 {

  FUNC_16(VAR_7->headnode);
 }
 else
 {
  FUNC_19(VAR_7);
  FUNC_15("**** leaked ****\n");
  return;
 }



 FUNC_5();

 FUNC_1(VAR_7->headnode);

 if (VAR_3) FUNC_25(VAR_7);

 FUNC_8();

 FUNC_4();

 FUNC_8();
 FUNC_12();

 FUNC_10();

 FUNC_11();

 FUNC_2();
 FUNC_12();

 FUNC_8();

 FUNC_9();

 FUNC_6();

 FUNC_7();

 FUNC_13();

 FUNC_0();






 if (VAR_0)
 {
  FUNC_25(VAR_7);
  FUNC_3();
  return;
 }

 FUNC_14(VAR_5);

 FUNC_3();

 FUNC_20("\nAAS created in %5.0f seconds\n", FUNC_18() - VAR_8);
}
