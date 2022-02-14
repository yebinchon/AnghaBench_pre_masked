
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_7)
{
 unsigned char *VAR_8 = VAR_7->packet;
 struct input_dev *VAR_9 = VAR_7->dev;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_13 = VAR_8[4] & 0x01;
 VAR_14 = VAR_8[4] & 0x02;

 VAR_10 = ((VAR_8[1] & 0x7f) << 4) | ((VAR_8[3] & 0x30) >> 2) |
     ((VAR_8[0] & 0x30) >> 4);
 VAR_11 = ((VAR_8[2] & 0x7f) << 4) | (VAR_8[3] & 0x0f);
 VAR_12 = VAR_8[5] & 0x7f;

 if (VAR_12 >= 64)
  FUNC_1(VAR_9, VAR_6, 1);
 else
  FUNC_1(VAR_9, VAR_6, 0);

 if (VAR_12 > 0) {
  FUNC_0(VAR_9, VAR_1, VAR_10);
  FUNC_0(VAR_9, VAR_2, VAR_11);
 }
 FUNC_0(VAR_9, VAR_0, VAR_12);

 FUNC_1(VAR_9, VAR_5, VAR_12 > 0);
 FUNC_1(VAR_9, VAR_3, VAR_13);
 FUNC_1(VAR_9, VAR_4, VAR_14);

 FUNC_2(VAR_9);
}
