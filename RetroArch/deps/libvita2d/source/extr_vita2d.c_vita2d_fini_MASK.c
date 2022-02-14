
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int blend_mode_add; int blend_mode_normal; } ;
struct TYPE_3__ {int hostMem; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_21 ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_16 (int ) ;
 scalar_t__ VAR_34 ;

int FUNC_17()
{
 unsigned int VAR_35;

 if (!VAR_34) {
  FUNC_0("libvita2d is not initialized!\n");
  return 1;
 }


 FUNC_9(VAR_4);


 FUNC_11(VAR_27, VAR_7);
 FUNC_12(VAR_27, VAR_9);
 FUNC_12(VAR_27, VAR_3);
 FUNC_12(VAR_27, VAR_6);

 FUNC_1(&VAR_5.blend_mode_normal);
 FUNC_1(&VAR_5.blend_mode_add);

 FUNC_4(VAR_21);
 FUNC_4(VAR_11);


 FUNC_8();


 FUNC_4(VAR_15);
 for (VAR_35 = 0; VAR_35 < VAR_0; VAR_35++) {

  FUNC_5(VAR_16[VAR_35], 0, VAR_1*VAR_2*4);
  FUNC_4(VAR_18[VAR_35]);


  FUNC_14(VAR_17[VAR_35]);
 }


 FUNC_4(VAR_15);
 FUNC_4(VAR_28);


 FUNC_13(VAR_27, VAR_8);
 FUNC_13(VAR_27, VAR_10);
 FUNC_13(VAR_27, VAR_12);
 FUNC_13(VAR_27, VAR_13);
 FUNC_13(VAR_27, VAR_29);
 FUNC_13(VAR_27, VAR_30);
 FUNC_13(VAR_27, VAR_31);

 FUNC_10(VAR_27);
 FUNC_2(VAR_23);
 FUNC_16(VAR_24);
 FUNC_4(VAR_22);


 FUNC_7(VAR_26);


 FUNC_6(VAR_4);
 FUNC_2(VAR_20);
 FUNC_4(VAR_19);
 FUNC_4(VAR_33);
 FUNC_4(VAR_32);
 FUNC_3(VAR_14.hostMem);

 FUNC_4(VAR_25);


 FUNC_15();




 VAR_34 = 0;

 return 1;
}
