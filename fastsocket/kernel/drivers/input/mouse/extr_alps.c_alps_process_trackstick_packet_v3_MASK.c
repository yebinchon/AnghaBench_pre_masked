
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct alps_data {int quirks; struct input_dev* dev2; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct psmouse *VAR_6)
{
 struct alps_data *VAR_7 = VAR_6->private;
 unsigned char *VAR_8 = VAR_6->packet;
 struct input_dev *VAR_9 = VAR_7->dev2;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;


 if (!(VAR_8[0] & 0x40)) {
  FUNC_0("Bad trackstick packet, discarding\n");
  return;
 }





 if (VAR_8[1] == 0x7f && VAR_8[2] == 0x7f && VAR_8[4] == 0x7f)
  return;

 VAR_10 = (s8)(((VAR_8[0] & 0x20) << 2) | (VAR_8[1] & 0x7f));
 VAR_11 = (s8)(((VAR_8[0] & 0x10) << 3) | (VAR_8[2] & 0x7f));
 VAR_12 = (VAR_8[4] & 0x7c) >> 2;






 VAR_10 /= 8;
 VAR_11 /= 8;

 FUNC_2(VAR_9, VAR_4, VAR_10);
 FUNC_2(VAR_9, VAR_5, -VAR_11);
 VAR_13 = VAR_8[3] & 0x01;
 VAR_14 = VAR_8[3] & 0x02;
 VAR_15 = VAR_8[3] & 0x04;

 if (!(VAR_7->quirks & VAR_0) &&
     (VAR_13 || VAR_14 || VAR_15))
  VAR_7->quirks |= VAR_0;

 if (VAR_7->quirks & VAR_0) {
  FUNC_1(VAR_9, VAR_1, VAR_13);
  FUNC_1(VAR_9, VAR_3, VAR_14);
  FUNC_1(VAR_9, VAR_2, VAR_15);
 }

 FUNC_3(VAR_9);
 return;
}
