
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
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t* VAR_13 ;
 int FUNC_0 (struct gc*,int,unsigned char*) ;
 int * VAR_14 ;
 size_t* VAR_15 ;
 int* VAR_16 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,char) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct gc *VAR_17)
{
 unsigned char VAR_18[VAR_9];
 struct input_dev *VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;
 char VAR_24, VAR_25;

 VAR_23 = VAR_17->pads[VAR_8] ? VAR_9 :
   (VAR_17->pads[VAR_7] ? VAR_10 : VAR_6);

 FUNC_0(VAR_17, VAR_23, VAR_18);

 for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {

  VAR_19 = VAR_17->dev[VAR_20];
  if (!VAR_19)
   continue;

  VAR_22 = VAR_16[VAR_20];

  if (VAR_22 & (VAR_17->pads[VAR_5] | VAR_17->pads[VAR_7])) {
   FUNC_1(VAR_19, VAR_0, !(VAR_22 & VAR_18[6]) - !(VAR_22 & VAR_18[7]));
   FUNC_1(VAR_19, VAR_1, !(VAR_22 & VAR_18[4]) - !(VAR_22 & VAR_18[5]));
  }

  if (VAR_22 & VAR_17->pads[VAR_5])
   for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
    FUNC_2(VAR_19, VAR_14[VAR_21], VAR_22 & VAR_18[VAR_13[VAR_21]]);

  if (VAR_22 & VAR_17->pads[VAR_7])
   for (VAR_21 = 0; VAR_21 < 8; VAR_21++)
    FUNC_2(VAR_19, VAR_14[VAR_21], VAR_22 & VAR_18[VAR_15[VAR_21]]);

  if (VAR_22 & VAR_17->pads[VAR_8]) {
   if (!(VAR_22 & VAR_18[12]) && !(VAR_22 & VAR_18[13]) &&
       !(VAR_22 & VAR_18[14]) && (VAR_22 & VAR_18[15])) {
    FUNC_2(VAR_19, VAR_2, VAR_22 & VAR_18[9]);
    FUNC_2(VAR_19, VAR_3, VAR_22 & VAR_18[8]);

    VAR_24 = VAR_25 = 0;
    for (VAR_21 = 0; VAR_21 < 7; VAR_21++) {
     VAR_24 <<= 1;
     if (VAR_18[25 + VAR_21] & VAR_22)
      VAR_24 |= 1;

     VAR_25 <<= 1;
     if (VAR_18[17 + VAR_21] & VAR_22)
      VAR_25 |= 1;
    }

    if (VAR_24) {
     if (VAR_18[24] & VAR_22)
      VAR_24 = -VAR_24;
     FUNC_3(VAR_19, VAR_11, VAR_24);
    }

    if (VAR_25) {
     if (VAR_18[16] & VAR_22)
      VAR_25 = -VAR_25;
     FUNC_3(VAR_19, VAR_12, VAR_25);
    }
   }
  }
  FUNC_4(VAR_19);
 }
}
