
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int event_lock; scalar_t__* rep; int timer; scalar_t__ sync; int repeat_key; int keybit; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_6)
{
 struct input_dev *VAR_7 = (void *) VAR_6;
 unsigned long VAR_8;

 FUNC_4(&VAR_7->event_lock, VAR_8);

 if (FUNC_6(VAR_7->repeat_key, VAR_7->key) &&
     FUNC_1(VAR_7->repeat_key, VAR_7->keybit, VAR_2)) {

  FUNC_0(VAR_7, VAR_0, VAR_7->repeat_key, 2);

  if (VAR_7->sync) {






   FUNC_0(VAR_7, VAR_1, VAR_4, 1);
  }

  if (VAR_7->rep[VAR_3])
   FUNC_2(&VAR_7->timer, VAR_5 +
     FUNC_3(VAR_7->rep[VAR_3]));
 }

 FUNC_5(&VAR_7->event_lock, VAR_8);
}
