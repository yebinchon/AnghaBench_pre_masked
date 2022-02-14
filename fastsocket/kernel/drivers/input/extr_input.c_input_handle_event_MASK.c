
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int sync; int* rep; int (* event ) (struct input_dev*,unsigned int,unsigned int,int) ;int snd; int sndbit; int led; int ledbit; int mscbit; int relbit; int absbit; int sw; int swbit; int key; int keybit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct input_dev*,unsigned int,int*) ;
 int FUNC_2 (struct input_dev*,unsigned int,unsigned int,int) ;
 int FUNC_3 (struct input_dev*,unsigned int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (unsigned int,int ,int ) ;
 int FUNC_6 (struct input_dev*,unsigned int,unsigned int,int) ;
 int FUNC_7 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_8(struct input_dev *VAR_12,
          unsigned int VAR_13, unsigned int VAR_14, int VAR_15)
{
 int VAR_16 = VAR_1;

 switch (VAR_13) {

 case 131:
  switch (VAR_14) {
  case 130:
   VAR_16 = VAR_2;
   break;

  case 128:
   if (!VAR_12->sync) {
    VAR_12->sync = 1;
    VAR_16 = VAR_4;
   }
   break;
  case 129:
   VAR_12->sync = 0;
   VAR_16 = VAR_4;
   break;
  }
  break;

 case 139:
  if (FUNC_5(VAR_14, VAR_12->keybit, VAR_5) &&
      !!FUNC_7(VAR_14, VAR_12->key) != VAR_15) {

   if (VAR_15 != 2) {
    FUNC_0(VAR_14, VAR_12->key);
    if (VAR_15)
     FUNC_3(VAR_12, VAR_14);
    else
     FUNC_4(VAR_12);
   }

   VAR_16 = VAR_4;
  }
  break;

 case 132:
  if (FUNC_5(VAR_14, VAR_12->swbit, VAR_11) &&
      !!FUNC_7(VAR_14, VAR_12->sw) != VAR_15) {

   FUNC_0(VAR_14, VAR_12->sw);
   VAR_16 = VAR_4;
  }
  break;

 case 141:
  if (FUNC_5(VAR_14, VAR_12->absbit, VAR_0))
   VAR_16 = FUNC_1(VAR_12, VAR_14, &VAR_15);

  break;

 case 135:
  if (FUNC_5(VAR_14, VAR_12->relbit, VAR_8) && VAR_15)
   VAR_16 = VAR_4;

  break;

 case 137:
  if (FUNC_5(VAR_14, VAR_12->mscbit, VAR_7))
   VAR_16 = VAR_2;

  break;

 case 138:
  if (FUNC_5(VAR_14, VAR_12->ledbit, VAR_6) &&
      !!FUNC_7(VAR_14, VAR_12->led) != VAR_15) {

   FUNC_0(VAR_14, VAR_12->led);
   VAR_16 = VAR_2;
  }
  break;

 case 133:
  if (FUNC_5(VAR_14, VAR_12->sndbit, VAR_10)) {

   if (!!FUNC_7(VAR_14, VAR_12->snd) != !!VAR_15)
    FUNC_0(VAR_14, VAR_12->snd);
   VAR_16 = VAR_2;
  }
  break;

 case 134:
  if (VAR_14 <= VAR_9 && VAR_15 >= 0 && VAR_12->rep[VAR_14] != VAR_15) {
   VAR_12->rep[VAR_14] = VAR_15;
   VAR_16 = VAR_2;
  }
  break;

 case 140:
  if (VAR_15 >= 0)
   VAR_16 = VAR_2;
  break;

 case 136:
  VAR_16 = VAR_2;
  break;
 }

 if (VAR_16 != VAR_1 && VAR_13 != 131)
  VAR_12->sync = 0;

 if ((VAR_16 & VAR_3) && VAR_12->event)
  VAR_12->event(VAR_12, VAR_13, VAR_14, VAR_15);

 if (VAR_16 & VAR_4)
  FUNC_2(VAR_12, VAR_13, VAR_14, VAR_15);
}
