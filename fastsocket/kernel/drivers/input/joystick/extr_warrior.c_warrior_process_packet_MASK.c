
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct warrior {unsigned char* data; int idx; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


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
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*,int ,unsigned char) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct warrior *VAR_10)
{
 struct input_dev *VAR_11 = VAR_10->dev;
 unsigned char *VAR_12 = VAR_10->data;

 if (!VAR_10->idx) return;

 switch ((VAR_12[0] >> 4) & 7) {
  case 1:
   FUNC_1(VAR_11, VAR_8, VAR_12[3] & 1);
   FUNC_1(VAR_11, VAR_5, (VAR_12[3] >> 1) & 1);
   FUNC_1(VAR_11, VAR_6, (VAR_12[3] >> 2) & 1);
   FUNC_1(VAR_11, VAR_7, (VAR_12[3] >> 3) & 1);
   break;
  case 3:
   FUNC_0(VAR_11, VAR_3, ((VAR_12[0] & 8) << 5) - (VAR_12[2] | ((VAR_12[0] & 4) << 5)));
   FUNC_0(VAR_11, VAR_4, (VAR_12[1] | ((VAR_12[0] & 1) << 7)) - ((VAR_12[0] & 2) << 7));
   break;
  case 5:
   FUNC_0(VAR_11, VAR_2, (VAR_12[1] | ((VAR_12[0] & 1) << 7)) - ((VAR_12[0] & 2) << 7));
   FUNC_0(VAR_11, VAR_0, (VAR_12[3] & 2 ? 1 : 0) - (VAR_12[3] & 1 ? 1 : 0));
   FUNC_0(VAR_11, VAR_1, (VAR_12[3] & 8 ? 1 : 0) - (VAR_12[3] & 4 ? 1 : 0));
   FUNC_2(VAR_11, VAR_9, (VAR_12[2] | ((VAR_12[0] & 4) << 5)) - ((VAR_12[0] & 8) << 5));
   break;
 }
 FUNC_3(VAR_11);
}
