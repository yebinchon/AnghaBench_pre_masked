
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct saa7191 {int norm; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;
 struct saa7191* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_13, v4l2_std_id VAR_14)
{
 struct saa7191 *VAR_15 = FUNC_3(VAR_13);
 u8 VAR_16 = FUNC_1(VAR_13, VAR_8);
 u8 VAR_17 = FUNC_1(VAR_13, VAR_7);
 u8 VAR_18 = FUNC_1(VAR_13, VAR_6);
 int VAR_19;

 if (VAR_14 & VAR_11) {
  VAR_16 &= ~VAR_9;
  VAR_17 &= ~(VAR_4 | VAR_5);
  VAR_18 = VAR_3;
 } else if (VAR_14 & VAR_10) {
  VAR_16 &= ~VAR_9;
  VAR_17 &= ~VAR_4;
  VAR_17 |= VAR_5;
  VAR_18 = VAR_2;
 } else if (VAR_14 & VAR_12) {
  VAR_16 |= VAR_9;
  VAR_17 &= ~(VAR_4 | VAR_5);
  VAR_18 = VAR_3;
 } else {
  return -VAR_0;
 }

 VAR_19 = FUNC_2(VAR_13, VAR_7, VAR_17);
 if (VAR_19)
  return -VAR_1;
 VAR_19 = FUNC_2(VAR_13, VAR_8, VAR_16);
 if (VAR_19)
  return -VAR_1;
 VAR_19 = FUNC_2(VAR_13, VAR_6, VAR_18);
 if (VAR_19)
  return -VAR_1;

 VAR_15->norm = VAR_14;

 FUNC_0("ctl3: %02x stdc: %02x chcv: %02x\n", VAR_17,
  VAR_16, VAR_18);
 FUNC_0("norm: %llx\n", VAR_14);

 return 0;
}
