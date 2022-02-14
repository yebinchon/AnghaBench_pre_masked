
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct analog {int mask; int * buttons; struct input_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int* VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct analog *VAR_10, int *VAR_11, int *VAR_12, int VAR_13)
{
 struct input_dev *VAR_14 = VAR_10->dev;
 int VAR_15, VAR_16;

 if (VAR_10->mask & VAR_4)
  for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
   if (VAR_11[3] < ((VAR_12[3] * ((VAR_15 << 1) + 1)) >> 3)) {
    VAR_13 |= 1 << (VAR_15 + 14);
    break;
   }

 for (VAR_15 = VAR_16 = 0; VAR_15 < 6; VAR_15++)
  if (VAR_10->mask & (0x10 << VAR_15))
   FUNC_1(VAR_14, VAR_10->buttons[VAR_16++], (VAR_13 >> VAR_15) & 1);

 if (VAR_10->mask & VAR_5)
  for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
   FUNC_1(VAR_14, VAR_10->buttons[VAR_16++], (VAR_13 >> (VAR_15 + 10)) & 1);

 if (VAR_10->mask & VAR_0)
  FUNC_1(VAR_14, VAR_9[0], VAR_11[2] < (VAR_12[2] >> 1));
 if (VAR_10->mask & VAR_2)
  FUNC_1(VAR_14, VAR_9[1], VAR_11[3] < (VAR_12[3] >> 1));
 if (VAR_10->mask & VAR_1)
  FUNC_1(VAR_14, VAR_9[2], VAR_11[2] > (VAR_12[2] + (VAR_12[2] >> 1)));
 if (VAR_10->mask & VAR_3)
  FUNC_1(VAR_14, VAR_9[3], VAR_11[3] > (VAR_12[3] + (VAR_12[3] >> 1)));

 for (VAR_15 = VAR_16 = 0; VAR_15 < 4; VAR_15++)
  if (VAR_10->mask & (1 << VAR_15))
   FUNC_0(VAR_14, VAR_6[VAR_16++], VAR_11[VAR_15]);

 for (VAR_15 = VAR_16 = 0; VAR_15 < 3; VAR_15++)
  if (VAR_10->mask & VAR_7[VAR_15]) {
   FUNC_0(VAR_14, VAR_8[VAR_16++],
    ((VAR_13 >> ((VAR_15 << 2) + 7)) & 1) - ((VAR_13 >> ((VAR_15 << 2) + 9)) & 1));
   FUNC_0(VAR_14, VAR_8[VAR_16++],
    ((VAR_13 >> ((VAR_15 << 2) + 8)) & 1) - ((VAR_13 >> ((VAR_15 << 2) + 6)) & 1));
  }

 FUNC_2(VAR_14);
}
