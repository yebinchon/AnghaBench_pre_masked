
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_slot {int dummy; } ;
struct input_dev {size_t slot; struct input_mt_slot* mt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int ,unsigned int) ;
 unsigned int FUNC_1 (struct input_mt_slot*,int ) ;
 int FUNC_2 (struct input_dev*) ;

void FUNC_3(struct input_dev *VAR_3,
    unsigned int VAR_4, bool VAR_5)
{
 struct input_mt_slot *VAR_6;
 int VAR_7;

 if (!VAR_3->mt || !VAR_5) {
  FUNC_0(VAR_3, VAR_2, VAR_1, -1);
  return;
 }

 VAR_6 = &VAR_3->mt[VAR_3->slot];
 VAR_7 = FUNC_1(VAR_6, VAR_1);
 if (VAR_7 < 0 || FUNC_1(VAR_6, VAR_0) != VAR_4)
  VAR_7 = FUNC_2(VAR_3);

 FUNC_0(VAR_3, VAR_2, VAR_1, VAR_7);
 FUNC_0(VAR_3, VAR_2, VAR_0, VAR_4);
}
