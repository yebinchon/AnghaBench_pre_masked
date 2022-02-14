
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
 int * VAR_7 ;
 size_t* VAR_8 ;
 int FUNC_0 (struct gc*,unsigned char*) ;
 int* VAR_9 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct gc *VAR_10)
{
 unsigned char VAR_11[VAR_6];
 signed char VAR_12[2];
 struct input_dev *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 FUNC_0(VAR_10, VAR_11);

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {

  VAR_13 = VAR_10->dev[VAR_14];
  if (!VAR_13)
   continue;

  VAR_16 = VAR_9[VAR_14];

  if (VAR_16 & VAR_10->pads[VAR_5] & ~(VAR_11[8] | VAR_11[9])) {

   VAR_12[0] = VAR_12[1] = 0;

   for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
    if (VAR_11[23 - VAR_15] & VAR_16)
     VAR_12[0] |= 1 << VAR_15;
    if (VAR_11[31 - VAR_15] & VAR_16)
     VAR_12[1] |= 1 << VAR_15;
   }

   FUNC_1(VAR_13, VAR_2, VAR_12[0]);
   FUNC_1(VAR_13, VAR_3, -VAR_12[1]);

   FUNC_1(VAR_13, VAR_0, !(VAR_16 & VAR_11[6]) - !(VAR_16 & VAR_11[7]));
   FUNC_1(VAR_13, VAR_1, !(VAR_16 & VAR_11[4]) - !(VAR_16 & VAR_11[5]));

   for (VAR_15 = 0; VAR_15 < 10; VAR_15++)
    FUNC_2(VAR_13, VAR_7[VAR_15], VAR_16 & VAR_11[VAR_8[VAR_15]]);

   FUNC_3(VAR_13);
  }
 }
}
