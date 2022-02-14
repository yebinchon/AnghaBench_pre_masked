
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct elantech_data* private; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
struct elantech_data {int fw_version_maj; int capabilities; scalar_t__ jumpy_cursor; } ;


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
 unsigned char VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*,int ,unsigned char) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct psmouse *VAR_12)
{
 struct input_dev *VAR_13 = VAR_12->dev;
 struct elantech_data *VAR_14 = VAR_12->private;
 unsigned char *VAR_15 = VAR_12->packet;
 int VAR_16;
 static int VAR_17;

 if (VAR_14->fw_version_maj == 0x01) {


  VAR_16 = ((VAR_15[1] & 0x80) >> 7) +
    ((VAR_15[1] & 0x30) >> 4);
 } else {


  VAR_16 = (VAR_15[0] & 0xc0) >> 6;
 }

 if (VAR_14->jumpy_cursor) {

  if (VAR_16 > VAR_17) {
   FUNC_0("elantech.c: discarding packet\n");
   goto discard_packet_v1;
  }
 }

 FUNC_2(VAR_13, VAR_9, VAR_16 != 0);



 if (VAR_16) {
  FUNC_1(VAR_13, VAR_0,
   ((VAR_15[1] & 0x0c) << 6) | VAR_15[2]);
  FUNC_1(VAR_13, VAR_1, VAR_11 -
   (((VAR_15[1] & 0x03) << 8) | VAR_15[3]));
 }

 FUNC_2(VAR_13, VAR_7, VAR_16 == 1);
 FUNC_2(VAR_13, VAR_6, VAR_16 == 2);
 FUNC_2(VAR_13, VAR_8, VAR_16 == 3);
 FUNC_2(VAR_13, VAR_4, VAR_15[0] & 0x01);
 FUNC_2(VAR_13, VAR_5, VAR_15[0] & 0x02);

 if ((VAR_14->fw_version_maj == 0x01) &&
     (VAR_14->capabilities & VAR_10)) {

  FUNC_2(VAR_13, VAR_3, VAR_15[0] & 0x40);

  FUNC_2(VAR_13, VAR_2, VAR_15[0] & 0x80);
 }

 FUNC_3(VAR_13);

 discard_packet_v1:
 VAR_17 = VAR_16;
}
