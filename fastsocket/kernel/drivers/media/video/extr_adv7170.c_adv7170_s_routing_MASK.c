
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct adv7170 {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 int VAR_5 ;
 int* VAR_6 ;
 struct adv7170* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_7,
        u32 VAR_8, u32 VAR_9, u32 VAR_10)
{
 struct adv7170 *VAR_11 = FUNC_1(VAR_7);





 FUNC_2(1, VAR_5, VAR_7, "set input from %s\n",
   VAR_8 == 0 ? "decoder" : "ZR36060");

 switch (VAR_8) {
 case 0:
  FUNC_0(VAR_7, 0x01, 0x20);
  FUNC_0(VAR_7, 0x08, VAR_3);
  FUNC_0(VAR_7, 0x02, 0x0e);
  FUNC_0(VAR_7, 0x07, VAR_1 | VAR_2);
  FUNC_0(VAR_7, 0x07, VAR_1);

  break;

 case 1:
  FUNC_0(VAR_7, 0x01, 0x00);
  FUNC_0(VAR_7, 0x08, VAR_4);
  FUNC_0(VAR_7, 0x02, 0x08);
  FUNC_0(VAR_7, 0x07, VAR_1 | VAR_2);
  FUNC_0(VAR_7, 0x07, VAR_1);

  break;

 default:
  FUNC_2(1, VAR_5, VAR_7, "illegal input: %d\n", VAR_8);
  return -VAR_0;
 }
 FUNC_2(1, VAR_5, VAR_7, "switched to %s\n", VAR_6[VAR_8]);
 VAR_11->input = VAR_8;
 return 0;
}
