
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct input_dev {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int keycode_r ;
typedef int keycode ;
struct TYPE_4__ {int keycode1; int keycode2; int keycode3; int keycode4; } ;
struct TYPE_3__ {int fifo; void* rfkill_state; scalar_t__ rfkill_supported; struct input_dev* input; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int,int,int) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct input_dev*,int,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void FUNC_6(struct acpi_device *VAR_8, u32 VAR_9)
{
 struct input_dev *VAR_10;
 int VAR_11, VAR_12;
 unsigned int VAR_13 = 1;
 int VAR_14, VAR_15;

 VAR_10 = VAR_7->input;

 if (VAR_7->rfkill_supported)
  VAR_7->rfkill_state =
   FUNC_0(VAR_3, 0x4, 0x0, 0x0);

 switch (VAR_9) {
 case 132:
  VAR_14 = 0;
  while ((VAR_13 =
   FUNC_0(VAR_2, 0x1, 0x0, 0x0)) != 0
    && (VAR_14++) < VAR_5) {
   switch (VAR_13 & 0x4ff) {
   case 131:
    VAR_11 = VAR_6->keycode1;
    break;
   case 130:
    VAR_11 = VAR_6->keycode2;
    break;
   case 129:
    VAR_11 = VAR_6->keycode3;
    break;
   case 128:
    VAR_11 = VAR_6->keycode4;
    break;
   case 0:
    VAR_11 = 0;
    break;
   default:
    FUNC_5(VAR_1,
         "Unknown GIRB result [%x]\n", VAR_13);
    VAR_11 = -1;
    break;
   }
   if (VAR_11 > 0) {
    FUNC_5(VAR_0,
     "Push keycode into ringbuffer [%d]\n",
     VAR_11);
    VAR_15 = FUNC_4(VAR_7->fifo,
         (unsigned char *)&VAR_11,
         sizeof(VAR_11));
    if (VAR_15 != sizeof(VAR_11)) {
     FUNC_5(VAR_1,
         "Could not push keycode [0x%x]\n",
         VAR_11);
    } else {
     FUNC_1(VAR_10, VAR_11, 1);
     FUNC_2(VAR_10);
    }
   } else if (VAR_11 == 0) {
    while ((VAR_15 =
     FUNC_3
     (VAR_7->fifo, (unsigned char *)
      &VAR_12,
      sizeof
      (VAR_12))) == sizeof(VAR_12)) {
     FUNC_1(VAR_10, VAR_12, 0);
     FUNC_2(VAR_10);
     FUNC_5(VAR_0,
       "Pop keycode from ringbuffer [%d]\n",
       VAR_12);
    }
   }
  }

  break;
 default:
  VAR_11 = VAR_4;
  FUNC_5(VAR_1,
       "Unsupported event [0x%x]\n", VAR_9);
  FUNC_1(VAR_10, VAR_11, 1);
  FUNC_2(VAR_10);
  FUNC_1(VAR_10, VAR_11, 0);
  FUNC_2(VAR_10);
  break;
 }
}
