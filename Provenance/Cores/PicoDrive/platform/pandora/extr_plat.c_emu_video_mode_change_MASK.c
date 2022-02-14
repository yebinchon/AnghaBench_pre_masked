
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scaling; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;





 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_1 () ;
 int FUNC_2 (int,int,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int,int,int,int,int,int,int) ;

void FUNC_5(int VAR_14, int VAR_15, int VAR_16)
{
 int VAR_17 = 320, VAR_18 = 240, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;

 if (VAR_2)
  return;

 if (VAR_16) {
  VAR_17 = 256;
  VAR_19 = VAR_20 = 32;
 }

 switch (VAR_1.scaling) {
 case 132:
  VAR_8 = VAR_17;
  VAR_7 = VAR_18;
  break;
 case 130:
  VAR_8 = VAR_17 * (VAR_16 ? 3 : 2);
  VAR_7 = VAR_18 * 2;
  break;
 case 131:
  VAR_8 = VAR_17 * 2;
  VAR_7 = VAR_18 * 2;
  break;
 case 128:
  VAR_8 = 800;
  VAR_7 = 480;
  break;
 case 129:
  VAR_9 = VAR_5;
  VAR_10 = VAR_6;
  VAR_8 = VAR_4;
  VAR_7 = VAR_3;
  break;
 }

 if (VAR_1.scaling != 129) {

  VAR_9 = 800 / 2 - VAR_8 / 2;
  VAR_10 = 480 / 2 - VAR_7 / 2;
 }

 switch (VAR_1.scaling) {
 case 128:
 case 129:
  VAR_21 = VAR_14;
  VAR_18 = VAR_15;
  break;
 }
 VAR_11 = VAR_16 ? 232 : 264;
 VAR_12 = VAR_21 + VAR_18 - 8;

 FUNC_2(1, VAR_9, VAR_10, VAR_8, VAR_7);
 FUNC_3(VAR_13);
 FUNC_4(VAR_13, VAR_17, VAR_18, 16, VAR_19, VAR_20, VAR_21, VAR_22, 4);
 FUNC_1();

 FUNC_0(VAR_0, 0);
}
