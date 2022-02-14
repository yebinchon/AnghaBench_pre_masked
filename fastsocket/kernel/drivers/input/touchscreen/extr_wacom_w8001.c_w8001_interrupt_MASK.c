
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001_coord {int tsw; int pen_pressure; int y; int x; } ;
struct w8001 {unsigned char* data; size_t idx; int cmd_done; int response_type; int response; struct input_dev* dev; } ;
struct serio {int dummy; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int ,unsigned char*,int ) ;
 int FUNC_5 (unsigned char*,struct w8001_coord*) ;
 int FUNC_6 (char*,unsigned char) ;
 struct w8001* FUNC_7 (struct serio*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t FUNC_9(struct serio *VAR_11,
       unsigned char VAR_12, unsigned int VAR_13)
{
 struct w8001 *VAR_14 = FUNC_7(VAR_11);
 struct input_dev *VAR_15 = VAR_14->dev;
 struct w8001_coord VAR_16;
 unsigned char VAR_17;

 VAR_14->data[VAR_14->idx] = VAR_12;
 switch (VAR_14->idx++) {
 case 0:
  if ((VAR_12 & VAR_6) != VAR_5) {
   FUNC_6("w8001: unsynchronized data: 0x%02x\n", VAR_12);
   VAR_14->idx = 0;
  }
  break;

 case 8:
  VAR_17 = VAR_14->data[0] & VAR_10;
  if (FUNC_8(VAR_17 == VAR_9))
   break;

  VAR_14->idx = 0;
  FUNC_5(VAR_14->data, &VAR_16);
  FUNC_1(VAR_15, VAR_1, VAR_16.x);
  FUNC_1(VAR_15, VAR_2, VAR_16.y);
  FUNC_1(VAR_15, VAR_0, VAR_16.pen_pressure);
  FUNC_2(VAR_15, VAR_3, VAR_16.tsw);
  FUNC_3(VAR_15);
  break;

 case 10:
  VAR_14->idx = 0;
  FUNC_4(VAR_14->response, VAR_14->data, VAR_7);
  VAR_14->response_type = VAR_8;
  FUNC_0(&VAR_14->cmd_done);
  break;
 }

 return VAR_4;
}
