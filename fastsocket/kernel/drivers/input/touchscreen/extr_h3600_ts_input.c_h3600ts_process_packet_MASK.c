
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct h3600_dev {int event; int* buf; int len; struct input_dev* dev; } ;


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
 int VAR_11 ;

 int FUNC_0 (struct input_dev*,int ,unsigned short) ;
 int FUNC_1 (struct input_dev*,int,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct h3600_dev *VAR_12)
{
 struct input_dev *VAR_13 = VAR_12->dev;
 static int VAR_14 = 0;
 int VAR_15, VAR_16 = 0;

 switch (VAR_12->event) {
  case 129:
   VAR_16 = (VAR_12->buf[0] & 0x80) ? 0 : 1;

   switch (VAR_12->buf[0] & 0x7f) {
    case 133:
     VAR_15 = VAR_9;
     break;
    case 138:
     VAR_15 = VAR_5;
                                        break;
    case 137:
     VAR_15 = VAR_6;
     break;
    case 134:
     VAR_15 = VAR_8;
     break;
    case 131:
     VAR_15 = VAR_7;
     break;
    case 130:
     VAR_15 = VAR_11;
     break;
    case 132:
     VAR_15 = VAR_10;
     break;
    case 135:
     VAR_15 = VAR_4;
     break;
    case 136:
     VAR_15 = VAR_3;
     break;
    default:
     VAR_15 = 0;
   }
   if (VAR_15)
    FUNC_1(VAR_13, VAR_15, VAR_16);
   break;
  case 128:
   if (!VAR_14) {
    FUNC_1(VAR_13, VAR_2, 1);
    VAR_14 = 1;
   }

   if (VAR_12->len) {
    unsigned short VAR_17, VAR_18;

    VAR_17 = VAR_12->buf[0]; VAR_17 <<= 8; VAR_17 += VAR_12->buf[1];
    VAR_18 = VAR_12->buf[2]; VAR_18 <<= 8; VAR_18 += VAR_12->buf[3];

    FUNC_0(VAR_13, VAR_0, VAR_17);
    FUNC_0(VAR_13, VAR_1, VAR_18);
   } else {
    FUNC_1(VAR_13, VAR_2, 0);
    VAR_14 = 0;
   }
   break;
  default:

   break;
 }

 FUNC_2(VAR_13);
}
