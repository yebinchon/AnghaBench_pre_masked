
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
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct gc*,int,unsigned char*) ;
 int* VAR_9 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct gc *VAR_10)
{
 unsigned char VAR_11[VAR_7];
 struct input_dev *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_10, VAR_10->pads[VAR_6] ? VAR_7 : VAR_8, VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {

  VAR_12 = VAR_10->dev[VAR_13];
  if (!VAR_12)
   continue;

  VAR_14 = VAR_9[VAR_13];

  if (VAR_14 & (VAR_10->pads[VAR_5] | VAR_10->pads[VAR_6])) {
   FUNC_1(VAR_12, VAR_0, !(VAR_14 & VAR_11[2]) - !(VAR_14 & VAR_11[3]));
   FUNC_1(VAR_12, VAR_1, !(VAR_14 & VAR_11[0]) - !(VAR_14 & VAR_11[1]));
   FUNC_2(VAR_12, VAR_3, VAR_14 & VAR_11[4]);
  }

  if (VAR_14 & VAR_10->pads[VAR_6])
   FUNC_2(VAR_12, VAR_2, VAR_14 & VAR_11[5]);

  FUNC_3(VAR_12);
 }
}
