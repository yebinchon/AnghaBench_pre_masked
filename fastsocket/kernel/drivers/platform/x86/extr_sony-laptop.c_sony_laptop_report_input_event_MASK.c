
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sony_laptop_keypress {struct input_dev* dev; int key; int * member_0; } ;
struct input_dev {int dummy; } ;
typedef int kp ;
struct TYPE_2__ {int wq; int fifo; struct input_dev* key_dev; struct input_dev* jog_dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct input_dev*,int ,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (int ,unsigned char*,int) ;
 int FUNC_7 (int ,int *) ;
 TYPE_1__ VAR_7 ;
 int* VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(u8 VAR_11)
{
 struct input_dev *VAR_12 = VAR_7.jog_dev;
 struct input_dev *VAR_13 = VAR_7.key_dev;
 struct sony_laptop_keypress VAR_14 = { ((void*)0) };

 if (VAR_11 == VAR_6 ||
   VAR_11 == VAR_5) {

  return;
 }


 switch (VAR_11) {

 case 129:
 case 128:
  FUNC_4(VAR_12, VAR_4, 1);
  FUNC_5(VAR_12);
  return;

 case 132:
 case 131:
  FUNC_4(VAR_12, VAR_4, -1);
  FUNC_5(VAR_12);
  return;


 case 130:
  VAR_14.key = VAR_0;
  VAR_14.dev = VAR_12;
  break;

 default:
  if (VAR_11 >= FUNC_0(VAR_8)) {
   FUNC_1("sony_laptop_report_input_event, event not known: %d\n", VAR_11);
   break;
  }
  if (VAR_8[VAR_11] != -1) {
   VAR_14.key = VAR_9[VAR_8[VAR_11]];
   if (VAR_14.key != VAR_2)
    VAR_14.dev = VAR_13;
  }
  break;
 }

 if (VAR_14.dev) {
  FUNC_3(VAR_14.dev, VAR_14.key, 1);

  FUNC_2(VAR_14.dev, VAR_1, VAR_3, VAR_11);
  FUNC_5(VAR_14.dev);
  FUNC_6(VAR_7.fifo,
     (unsigned char *)&VAR_14, sizeof(VAR_14));

  if (!FUNC_8(&VAR_10))
   FUNC_7(VAR_7.wq,
     &VAR_10);
 } else
  FUNC_1("unknown input event %.2x\n", VAR_11);
}
