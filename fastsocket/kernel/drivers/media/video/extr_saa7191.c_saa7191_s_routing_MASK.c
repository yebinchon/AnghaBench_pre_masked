
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa7191 {int input; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 struct saa7191* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_8,
        u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 struct saa7191 *VAR_12 = FUNC_2(VAR_8);
 u8 VAR_13 = FUNC_0(VAR_8, VAR_7);
 u8 VAR_14 = FUNC_0(VAR_8, VAR_6);
 int VAR_15;

 switch (VAR_9) {
 case 129:
  VAR_14 &= ~(VAR_2 | VAR_3
     | VAR_4);

  VAR_13 &= ~VAR_5;
  break;
 case 128:
  VAR_14 |= VAR_2 | VAR_4;

  VAR_13 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }

 VAR_15 = FUNC_1(VAR_8, VAR_7, VAR_13);
 if (VAR_15)
  return -VAR_1;
 VAR_15 = FUNC_1(VAR_8, VAR_6, VAR_14);
 if (VAR_15)
  return -VAR_1;

 VAR_12->input = VAR_9;

 return 0;
}
