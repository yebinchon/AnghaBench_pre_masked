
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct input_dev* dev; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct alps_fields {int x; int y; int z; int left; int right; int middle; int ts_left; int ts_right; int ts_middle; scalar_t__ is_mp; scalar_t__ first_mp; } ;
struct alps_data {int multi_packet; int quirks; int (* decode_fields ) (struct alps_fields*,unsigned char*) ;struct input_dev* dev2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct alps_fields*,unsigned char*) ;

__attribute__((used)) static void FUNC_4(struct psmouse *VAR_9)
{
 struct alps_data *VAR_10 = VAR_9->private;
 unsigned char *VAR_11 = VAR_9->packet;
 struct input_dev *VAR_12 = VAR_9->dev;
 struct input_dev *VAR_13 = VAR_10->dev2;
 struct alps_fields VAR_14;

 VAR_10->decode_fields(&VAR_14, VAR_11);







 if (VAR_10->multi_packet) {
  VAR_10->multi_packet = 0;







  if (VAR_14.first_mp) {




   return;
  }
 }

 if (!VAR_10->multi_packet && VAR_14.first_mp)
  VAR_10->multi_packet = 1;
 else
  VAR_10->multi_packet = 0;

 if (VAR_14.is_mp)
  return;







 if (VAR_14.x && VAR_14.y && !VAR_14.z)
  return;

 if (VAR_14.z >= 64)
  FUNC_1(VAR_12, VAR_8, 1);
 else
  FUNC_1(VAR_12, VAR_8, 0);

 if (VAR_14.z > 0) {
  FUNC_0(VAR_12, VAR_1, VAR_14.x);
  FUNC_0(VAR_12, VAR_2, VAR_14.y);
 }
 FUNC_0(VAR_12, VAR_0, VAR_14.z);

 FUNC_1(VAR_12, VAR_7, VAR_14.z > 0);
 FUNC_1(VAR_12, VAR_4, VAR_14.left);
 FUNC_1(VAR_12, VAR_6, VAR_14.right);
 FUNC_1(VAR_12, VAR_5, VAR_14.middle);

 FUNC_2(VAR_12);

 if (!(VAR_10->quirks & VAR_3)) {
  FUNC_1(VAR_13, VAR_4, VAR_14.ts_left);
  FUNC_1(VAR_13, VAR_6, VAR_14.ts_right);
  FUNC_1(VAR_13, VAR_5, VAR_14.ts_middle);
  FUNC_2(VAR_13);
 }
}
