
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sw {int type; int number; struct input_dev** dev; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int x; int y; } ;


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
 int FUNC_0 (int,int) ;






 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int ** VAR_14 ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_15 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(unsigned char *VAR_16, struct sw *VAR_17)
{
 int VAR_18, VAR_19, VAR_20;
 struct input_dev *VAR_21;

 switch (VAR_17->type) {

  case 133:

   if (FUNC_4(FUNC_0(0,64)) || (VAR_18 = (FUNC_0(6,1) << 3) | FUNC_0(60,3)) > 8)
    return -1;

   VAR_21 = VAR_17->dev[0];

   FUNC_1(VAR_21, VAR_6, (FUNC_0( 3,3) << 7) | FUNC_0(16,7));
   FUNC_1(VAR_21, VAR_7, (FUNC_0( 0,3) << 7) | FUNC_0(24,7));
   FUNC_1(VAR_21, VAR_4, (FUNC_0(35,2) << 7) | FUNC_0(40,7));
   FUNC_1(VAR_21, VAR_5, (FUNC_0(32,3) << 7) | FUNC_0(48,7));

   FUNC_1(VAR_21, VAR_0, VAR_15[VAR_18].x);
   FUNC_1(VAR_21, VAR_1, VAR_15[VAR_18].y);

   for (VAR_20 = 0; VAR_20 < 7; VAR_20++)
    FUNC_2(VAR_21, VAR_14[133][VAR_20], !FUNC_0(VAR_20+8,1));

   FUNC_2(VAR_21, VAR_8, !FUNC_0(38,1));
   FUNC_2(VAR_21, VAR_9, !FUNC_0(37,1));

   FUNC_3(VAR_21);

   return 0;

  case 129:

   for (VAR_19 = 0; VAR_19 < VAR_17->number; VAR_19 ++) {

    if (FUNC_5(FUNC_0(VAR_19*15,15)))
     return -1;

    FUNC_1(VAR_17->dev[VAR_19], VAR_6, FUNC_0(VAR_19*15+3,1) - FUNC_0(VAR_19*15+2,1));
    FUNC_1(VAR_17->dev[VAR_19], VAR_7, FUNC_0(VAR_19*15+0,1) - FUNC_0(VAR_19*15+1,1));

    for (VAR_20 = 0; VAR_20 < 10; VAR_20++)
     FUNC_2(VAR_17->dev[VAR_19], VAR_14[129][VAR_20], !FUNC_0(VAR_19*15+VAR_20+4,1));

    FUNC_3(VAR_17->dev[VAR_19]);
   }

   return 0;

  case 128:
  case 132:

   if (!FUNC_5(FUNC_0(0,48)) || (VAR_18 = FUNC_0(42,4)) > 8)
    return -1;

   VAR_21 = VAR_17->dev[0];
   FUNC_1(VAR_21, VAR_6, FUNC_0( 9,10));
   FUNC_1(VAR_21, VAR_7, FUNC_0(19,10));
   FUNC_1(VAR_21, VAR_4, FUNC_0(36, 6));
   FUNC_1(VAR_21, VAR_5, FUNC_0(29, 7));

   FUNC_1(VAR_21, VAR_0, VAR_15[VAR_18].x);
   FUNC_1(VAR_21, VAR_1, VAR_15[VAR_18].y);

   for (VAR_20 = 0; VAR_20 < 9; VAR_20++)
    FUNC_2(VAR_21, VAR_14[128][VAR_20], !FUNC_0(VAR_20,1));

   FUNC_3(VAR_21);

   return 0;

  case 130:

   if (!FUNC_5(FUNC_0(0,43)) || (VAR_18 = FUNC_0(28,4)) > 8)
    return -1;

   VAR_21 = VAR_17->dev[0];
   FUNC_1(VAR_21, VAR_6, FUNC_0( 0,10));
   FUNC_1(VAR_21, VAR_7, FUNC_0(16,10));
   FUNC_1(VAR_21, VAR_5, FUNC_0(32, 6));

   FUNC_1(VAR_21, VAR_0, VAR_15[VAR_18].x);
   FUNC_1(VAR_21, VAR_1, VAR_15[VAR_18].y);

   for (VAR_20 = 0; VAR_20 < 6; VAR_20++)
    FUNC_2(VAR_21, VAR_14[130][VAR_20], !FUNC_0(VAR_20+10,1));

   FUNC_2(VAR_21, VAR_13, !FUNC_0(26,1));
   FUNC_2(VAR_21, VAR_12, !FUNC_0(27,1));
   FUNC_2(VAR_21, VAR_10, !FUNC_0(38,1));
   FUNC_2(VAR_21, VAR_11, !FUNC_0(39,1));

   FUNC_3(VAR_21);

   return 0;

  case 131:

   if (!FUNC_5(FUNC_0(0,33)))
    return -1;

   VAR_21 = VAR_17->dev[0];
   FUNC_1(VAR_21, VAR_3, FUNC_0( 0,10));
   FUNC_1(VAR_21, VAR_2, FUNC_0(10, 6));
   FUNC_1(VAR_21, VAR_5, FUNC_0(16, 6));

   for (VAR_20 = 0; VAR_20 < 8; VAR_20++)
    FUNC_2(VAR_21, VAR_14[131][VAR_20], !FUNC_0(VAR_20+22,1));

   FUNC_3(VAR_21);

   return 0;
 }

 return -1;
}
