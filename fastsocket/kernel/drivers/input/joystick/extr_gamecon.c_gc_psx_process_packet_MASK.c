
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct gc {int* pads; struct input_dev** dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;



 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_0 (struct gc*,unsigned char**,unsigned char*) ;
 int* VAR_12 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,unsigned char) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct gc *VAR_13)
{
 unsigned char VAR_14[VAR_7][VAR_8];
 unsigned char VAR_15[VAR_7];
 struct input_dev *VAR_16;
 int VAR_17, VAR_18;

 FUNC_0(VAR_13, VAR_14, VAR_15);

 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {

  VAR_16 = VAR_13->dev[VAR_17];
  if (!VAR_16)
   continue;

  switch (VAR_15[VAR_17]) {

   case 128:

    FUNC_2(VAR_16, VAR_4, ~VAR_14[VAR_17][0] & 0x04);
    FUNC_2(VAR_16, VAR_5, ~VAR_14[VAR_17][0] & 0x02);

   case 130:
   case 131:

    if (VAR_13->pads[VAR_6] & VAR_12[VAR_17]) {
     for(VAR_18 = 0; VAR_18 < 4; VAR_18++)
      FUNC_2(VAR_16, VAR_11[VAR_18], ~VAR_14[VAR_17][0] & (0x10 << VAR_18));
    } else {
     for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
      FUNC_1(VAR_16, VAR_9[VAR_18 + 2], VAR_14[VAR_17][VAR_18 + 2]);

     FUNC_1(VAR_16, VAR_0, 128 + !(VAR_14[VAR_17][0] & 0x20) * 127 - !(VAR_14[VAR_17][0] & 0x80) * 128);
     FUNC_1(VAR_16, VAR_1, 128 + !(VAR_14[VAR_17][0] & 0x40) * 127 - !(VAR_14[VAR_17][0] & 0x10) * 128);
    }

    for (VAR_18 = 0; VAR_18 < 8; VAR_18++)
     FUNC_2(VAR_16, VAR_10[VAR_18], ~VAR_14[VAR_17][1] & (1 << VAR_18));

    FUNC_2(VAR_16, VAR_3, ~VAR_14[VAR_17][0] & 0x08);
    FUNC_2(VAR_16, VAR_2, ~VAR_14[VAR_17][0] & 0x01);

    FUNC_3(VAR_16);

    break;

   case 129:
    if (VAR_13->pads[VAR_6] & VAR_12[VAR_17]) {
     for(VAR_18 = 0; VAR_18 < 4; VAR_18++)
      FUNC_2(VAR_16, VAR_11[VAR_18], ~VAR_14[VAR_17][0] & (0x10 << VAR_18));
    } else {
     FUNC_1(VAR_16, VAR_0, 128 + !(VAR_14[VAR_17][0] & 0x20) * 127 - !(VAR_14[VAR_17][0] & 0x80) * 128);
     FUNC_1(VAR_16, VAR_1, 128 + !(VAR_14[VAR_17][0] & 0x40) * 127 - !(VAR_14[VAR_17][0] & 0x10) * 128);
    }

    for (VAR_18 = 0; VAR_18 < 8; VAR_18++)
     FUNC_2(VAR_16, VAR_10[VAR_18], ~VAR_14[VAR_17][1] & (1 << VAR_18));

    FUNC_2(VAR_16, VAR_3, ~VAR_14[VAR_17][0] & 0x08);
    FUNC_2(VAR_16, VAR_2, ~VAR_14[VAR_17][0] & 0x01);

    FUNC_3(VAR_16);

    break;

   case 0:
    break;
  }
 }
}
