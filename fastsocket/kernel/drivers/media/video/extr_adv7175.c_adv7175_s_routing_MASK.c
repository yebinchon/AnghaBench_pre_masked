
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct adv7175 {int norm; int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 int VAR_7 ;
 int* VAR_8 ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 struct adv7175* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_9,
        u32 VAR_10, u32 VAR_11, u32 VAR_12)
{
 struct adv7175 *VAR_13 = FUNC_2(VAR_9);





 switch (VAR_10) {
 case 0:
  FUNC_0(VAR_9, 0x01, 0x00);

  if (VAR_13->norm & VAR_5)
   FUNC_1(VAR_9, 1);

  FUNC_0(VAR_9, 0x0c, VAR_3);
  if (VAR_13->norm & VAR_6)
   FUNC_0(VAR_9, 0x0d, 0x49);
  else
   FUNC_0(VAR_9, 0x0d, 0x4f);
  FUNC_0(VAR_9, 0x07, VAR_1 | VAR_2);
  FUNC_0(VAR_9, 0x07, VAR_1);

  break;

 case 1:
  FUNC_0(VAR_9, 0x01, 0x00);

  if (VAR_13->norm & VAR_5)
   FUNC_1(VAR_9, 0);

  FUNC_0(VAR_9, 0x0c, VAR_4);
  FUNC_0(VAR_9, 0x0d, 0x49);
  FUNC_0(VAR_9, 0x07, VAR_1 | VAR_2);
  FUNC_0(VAR_9, 0x07, VAR_1);

  break;

 case 2:
  FUNC_0(VAR_9, 0x01, 0x80);

  if (VAR_13->norm & VAR_5)
   FUNC_1(VAR_9, 0);

  FUNC_0(VAR_9, 0x0d, 0x49);
  FUNC_0(VAR_9, 0x07, VAR_1 | VAR_2);
  FUNC_0(VAR_9, 0x07, VAR_1);

  break;

 default:
  FUNC_3(1, VAR_7, VAR_9, "illegal input: %d\n", VAR_10);
  return -VAR_0;
 }
 FUNC_3(1, VAR_7, VAR_9, "switched to %s\n", VAR_8[VAR_10]);
 VAR_13->input = VAR_10;
 return 0;
}
