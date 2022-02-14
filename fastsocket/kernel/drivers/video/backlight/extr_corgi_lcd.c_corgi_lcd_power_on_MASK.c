
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct corgi_lcd {int mode; } ;
struct TYPE_2__ {int comadj; } ;




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
 int FUNC_0 (struct corgi_lcd*,int ,int) ;
 int FUNC_1 (struct corgi_lcd*,int,int) ;
 int FUNC_2 (struct corgi_lcd*,int) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_32 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct corgi_lcd *VAR_33)
{
 int VAR_34;


 FUNC_0(VAR_33, VAR_1,
   VAR_6 | VAR_4 |
   VAR_5 | VAR_2 |
   VAR_3);

 FUNC_0(VAR_33, VAR_27,
   VAR_13 | VAR_14 | VAR_17 |
   VAR_15 | VAR_19);

 FUNC_0(VAR_33, VAR_28,
   VAR_25 | VAR_21 | VAR_23);


 FUNC_0(VAR_33, VAR_28,
   VAR_25 | VAR_21 | VAR_24);
 FUNC_3(3);


 FUNC_0(VAR_33, VAR_27,
   VAR_13 | VAR_14 | VAR_18 |
   VAR_15 | VAR_19);



 FUNC_0(VAR_33, VAR_1,
   VAR_5 | VAR_2);


 VAR_34 = VAR_32.comadj;
 if (VAR_34 < 0)
  VAR_34 = VAR_0;

 FUNC_1(VAR_33, VAR_18 | VAR_15 |
     VAR_19, VAR_34);


 FUNC_0(VAR_33, VAR_27,
   VAR_13 | VAR_14 | VAR_18 |
   VAR_15 | VAR_20);


 FUNC_0(VAR_33, VAR_28,
   VAR_25 | VAR_22 | VAR_24);
 FUNC_3(2);


 FUNC_0(VAR_33, VAR_1, VAR_5);


 FUNC_0(VAR_33, VAR_27,
   VAR_13 | VAR_14 | VAR_18 |
   VAR_16 | VAR_20);


 FUNC_0(VAR_33, VAR_28,
   VAR_26 | VAR_22 | VAR_24);


 FUNC_0(VAR_33, VAR_1, 0);


 FUNC_2(VAR_33, VAR_33->mode);


 FUNC_0(VAR_33, VAR_7,
   VAR_12 | VAR_10 |
   VAR_8 | VAR_11 |
   VAR_9);
 FUNC_4(1000);

 switch (VAR_33->mode) {
 case 128:
  FUNC_0(VAR_33, VAR_29, VAR_31);
  break;
 case 129:
 default:
  FUNC_0(VAR_33, VAR_29, VAR_30);
  break;
 }
}
