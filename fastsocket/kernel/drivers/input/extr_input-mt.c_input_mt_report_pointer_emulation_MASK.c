
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_slot {int dummy; } ;
struct input_dev {int trkid; int mtsize; struct input_mt_slot* mt; } ;


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
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_mt_slot*,int ) ;
 int FUNC_2 (struct input_dev*,int) ;

void FUNC_3(struct input_dev *VAR_11, bool VAR_12)
{
 struct input_mt_slot *VAR_13 = 0;
 int VAR_14 = VAR_11->trkid;
 int VAR_15 = 0;
 int VAR_16;

 for (VAR_16 = 0; VAR_16 < VAR_11->mtsize; ++VAR_16) {
  struct input_mt_slot *VAR_17 = &VAR_11->mt[VAR_16];
  int VAR_18 = FUNC_1(VAR_17, VAR_3);

  if (VAR_18 < 0)
   continue;
  if ((VAR_18 - VAR_14) & VAR_10) {
   VAR_13 = VAR_17;
   VAR_14 = VAR_18;
  }
  VAR_15++;
 }

 FUNC_0(VAR_11, VAR_9, VAR_7, VAR_15 > 0);
 if (VAR_12)
  FUNC_2(VAR_11, VAR_15);

 if (VAR_13) {
  int VAR_19 = FUNC_1(VAR_13, VAR_0);
  int VAR_20 = FUNC_1(VAR_13, VAR_1);
  int VAR_21 = FUNC_1(VAR_13, VAR_2);

  FUNC_0(VAR_11, VAR_8, VAR_5, VAR_19);
  FUNC_0(VAR_11, VAR_8, VAR_6, VAR_20);
  FUNC_0(VAR_11, VAR_8, VAR_4, VAR_21);
 } else {
  FUNC_0(VAR_11, VAR_8, VAR_4, 0);
 }
}
