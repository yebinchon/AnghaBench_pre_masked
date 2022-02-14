
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct gameport {int dummy; } ;
struct cobra {int exists; struct input_dev** dev; int bads; int reads; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (struct gameport*,unsigned int*) ;
 struct cobra* FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct input_dev*,int ,unsigned int) ;
 int FUNC_3 (struct input_dev*,scalar_t__,unsigned int) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct gameport *VAR_3)
{
 struct cobra *VAR_4 = FUNC_1(VAR_3);
 struct input_dev *VAR_5;
 unsigned int VAR_6[2];
 int VAR_7, VAR_8, VAR_9;

 VAR_4->reads++;

 if ((VAR_9 = FUNC_0(VAR_3, VAR_6)) != VAR_4->exists) {
  VAR_4->bads++;
  return;
 }

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
  if (VAR_4->exists & VAR_9 & (1 << VAR_7)) {

   VAR_5 = VAR_4->dev[VAR_7];

   FUNC_2(VAR_5, VAR_0, ((VAR_6[VAR_7] >> 4) & 1) - ((VAR_6[VAR_7] >> 3) & 1));
   FUNC_2(VAR_5, VAR_1, ((VAR_6[VAR_7] >> 2) & 1) - ((VAR_6[VAR_7] >> 1) & 1));

   for (VAR_8 = 0; VAR_2[VAR_8]; VAR_8++)
    FUNC_3(VAR_5, VAR_2[VAR_8], VAR_6[VAR_7] & (0x20 << VAR_8));

   FUNC_4(VAR_5);

  }
}
