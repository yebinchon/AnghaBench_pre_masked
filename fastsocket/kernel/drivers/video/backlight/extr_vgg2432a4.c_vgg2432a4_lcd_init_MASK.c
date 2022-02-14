
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili9320_platdata {int display2; int display3; int display4; int rgb_if1; int rgb_if2; int hsize; int vsize; int interface2; int interface3; int interface4; int interface5; int interface6; } ;
struct ili9320 {int display1; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_2 (int) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 int FUNC_3 (struct ili9320*,unsigned int,int) ;
 int FUNC_4 (struct ili9320*,int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;

__attribute__((used)) static int FUNC_6(struct ili9320 *VAR_36,
         struct ili9320_platdata *VAR_37)
{
 unsigned int VAR_38;
 int VAR_39;


 VAR_39 = FUNC_3(VAR_36, 0x00e5, 0x8000);
 if (VAR_39)
  goto err_initial;


 VAR_39 = FUNC_3(VAR_36, VAR_20, VAR_21);
 if (VAR_39)
  goto err_initial;


 FUNC_5(15);

 VAR_39 = FUNC_4(VAR_36, VAR_33, FUNC_0(VAR_33));
 if (VAR_39 != 0)
  goto err_initial;

 FUNC_3(VAR_36, VAR_5, VAR_37->display2);
 FUNC_3(VAR_36, VAR_6, VAR_37->display3);
 FUNC_3(VAR_36, VAR_7, VAR_37->display4);

 FUNC_3(VAR_36, VAR_27, VAR_37->rgb_if1);
 FUNC_3(VAR_36, VAR_9, 0x0);
 FUNC_3(VAR_36, VAR_28, VAR_37->rgb_if2);

 VAR_39 = FUNC_4(VAR_36, VAR_34, FUNC_0(VAR_34));
 if (VAR_39 != 0)
  goto err_vgg;

 FUNC_5(300);

 VAR_39 = FUNC_4(VAR_36, VAR_35, FUNC_0(VAR_35));
 if (VAR_39 != 0)
  goto err_vgg2;

 FUNC_5(100);

 FUNC_3(VAR_36, VAR_24, 0x13c);

 FUNC_5(100);

 FUNC_3(VAR_36, VAR_25, 0x1c00);
 FUNC_3(VAR_36, VAR_26, 0x000e);

 FUNC_5(100);

 FUNC_3(VAR_36, VAR_10, 0x00);
 FUNC_3(VAR_36, VAR_11, 0x00);

 VAR_39 = FUNC_4(VAR_36, VAR_32, FUNC_0(VAR_32));
 if (VAR_39 != 0)
  goto err_vgg3;

 FUNC_3(VAR_36, VAR_13, 0x0);
 FUNC_3(VAR_36, VAR_12, VAR_37->hsize - 1);
 FUNC_3(VAR_36, VAR_31, 0x0);
 FUNC_3(VAR_36, VAR_29, VAR_37->vsize - 1);

 FUNC_3(VAR_36, VAR_8,
        FUNC_2(((VAR_37->vsize - 240) / 8) + 0x1D));

 FUNC_3(VAR_36, VAR_0, 0x1);
 FUNC_3(VAR_36, VAR_30, 0x00);

 for (VAR_38 = VAR_22; VAR_38 <= VAR_23;
      VAR_38++) {
  FUNC_3(VAR_36, VAR_38, 0x0);
 }

 FUNC_3(VAR_36, VAR_14, 0x10);
 FUNC_3(VAR_36, VAR_15, VAR_37->interface2);
 FUNC_3(VAR_36, VAR_16, VAR_37->interface3);
 FUNC_3(VAR_36, VAR_17, VAR_37->interface4);
 FUNC_3(VAR_36, VAR_18, VAR_37->interface5);
 FUNC_3(VAR_36, VAR_19, VAR_37->interface6);

 VAR_36->display1 = (FUNC_1(3) | VAR_3 |
    VAR_4 | VAR_2 |
    0x40);

 FUNC_3(VAR_36, VAR_1, VAR_36->display1);

 return 0;

 err_vgg3:
 err_vgg2:
 err_vgg:
 err_initial:
 return VAR_39;
}
