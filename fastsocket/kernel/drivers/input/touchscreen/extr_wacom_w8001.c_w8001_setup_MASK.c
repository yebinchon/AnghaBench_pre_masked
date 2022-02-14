
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001_coord {int tilt_y; int tilt_x; int pen_pressure; int y; int x; } ;
struct w8001 {int response; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct w8001_coord*) ;
 int FUNC_2 (struct w8001*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct w8001 *VAR_7)
{
 struct input_dev *VAR_8 = VAR_7->dev;
 struct w8001_coord VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_7, VAR_5, 1);
 if (VAR_10)
  return VAR_10;

 FUNC_1(VAR_7->response, &VAR_9);

 FUNC_0(VAR_8, VAR_3, 0, VAR_9.x, 0, 0);
 FUNC_0(VAR_8, VAR_4, 0, VAR_9.y, 0, 0);
 FUNC_0(VAR_8, VAR_0, 0, VAR_9.pen_pressure, 0, 0);
 FUNC_0(VAR_8, VAR_1, 0, VAR_9.tilt_x, 0, 0);
 FUNC_0(VAR_8, VAR_2, 0, VAR_9.tilt_y, 0, 0);

 return FUNC_2(VAR_7, VAR_6, 0);
}
