
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sonypi_keypress {struct input_dev* dev; int key; int * member_0; } ;
struct input_dev {int dummy; } ;
typedef int kp ;
struct TYPE_4__ {int input_work; int input_fifo; struct input_dev* input_key_dev; struct input_dev* input_jog_dev; } ;
struct TYPE_3__ {int sonypiev; int inputev; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_5(u8 VAR_4)
{
 struct input_dev *VAR_5 = VAR_2.input_jog_dev;
 struct input_dev *VAR_6 = VAR_2.input_key_dev;
 struct sonypi_keypress VAR_7 = { ((void*)0) };
 int VAR_8;

 switch (VAR_4) {
 case 129:
 case 128:
  FUNC_1(VAR_5, VAR_1, 1);
  FUNC_2(VAR_5);
  break;

 case 132:
 case 131:
  FUNC_1(VAR_5, VAR_1, -1);
  FUNC_2(VAR_5);
  break;

 case 130:
  VAR_7.key = VAR_0;
  VAR_7.dev = VAR_5;
  break;

 case 133:

  break;

 default:
  for (VAR_8 = 0; VAR_3[VAR_8].sonypiev; VAR_8++)
   if (VAR_4 == VAR_3[VAR_8].sonypiev) {
    VAR_7.dev = VAR_6;
    VAR_7.key = VAR_3[VAR_8].inputev;
    break;
   }
  break;
 }

 if (VAR_7.dev) {
  FUNC_0(VAR_7.dev, VAR_7.key, 1);
  FUNC_2(VAR_7.dev);
  FUNC_3(VAR_2.input_fifo,
     (unsigned char *)&VAR_7, sizeof(VAR_7));
  FUNC_4(&VAR_2.input_work);
 }
}
