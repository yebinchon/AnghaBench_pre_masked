
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int (* getkeycode ) (struct input_dev*,int,int*) ;int (* setkeycode ) (struct input_dev*,int,int) ;int event_lock; scalar_t__ sync; int key; int keybit; int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (struct input_dev*,int ,int,int) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct input_dev*,int,int*) ;
 int FUNC_6 (struct input_dev*,int,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;

int FUNC_8(struct input_dev *VAR_5, int VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_6 < 0)
  return -VAR_0;

 if (VAR_7 < 0 || VAR_7 > VAR_3)
  return -VAR_0;

 FUNC_3(&VAR_5->event_lock, VAR_8);

 VAR_10 = VAR_5->getkeycode(VAR_5, VAR_6, &VAR_9);
 if (VAR_10)
  goto out;

 VAR_10 = VAR_5->setkeycode(VAR_5, VAR_6, VAR_7);
 if (VAR_10)
  goto out;





 if (FUNC_7(VAR_1, VAR_5->evbit) &&
     !FUNC_2(VAR_9, VAR_5->keybit, VAR_3) &&
     FUNC_0(VAR_9, VAR_5->key)) {

  FUNC_1(VAR_5, VAR_1, VAR_9, 0);
  if (VAR_5->sync)
   FUNC_1(VAR_5, VAR_2, VAR_4, 1);
 }

 out:
 FUNC_4(&VAR_5->event_lock, VAR_8);

 return VAR_10;
}
