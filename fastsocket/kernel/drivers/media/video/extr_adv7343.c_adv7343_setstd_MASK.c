
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct adv7343_std_info {int stdid; int standard_val3; int fsc_val; } ;
struct adv7343_state {int output; int reg80; int reg01; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct adv7343_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,unsigned long long) ;
 int FUNC_4 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_12, v4l2_std_id VAR_13)
{
 struct adv7343_state *VAR_14 = FUNC_2(VAR_12);
 struct adv7343_std_info *VAR_15;
 int VAR_16, VAR_17;
 char *VAR_18;
 u8 VAR_19, VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;

 VAR_16 = VAR_14->output;

 VAR_15 = (struct adv7343_std_info *)VAR_11;
 VAR_17 = FUNC_0(VAR_11);

 for (VAR_22 = 0; VAR_22 < VAR_17; VAR_22++) {
  if (VAR_15[VAR_22].stdid & VAR_13)
   break;
 }

 if (VAR_22 == VAR_17) {
  FUNC_3(1, VAR_10, VAR_12,
    "Invalid std or std is not supported: %llx\n",
      (unsigned long long)VAR_13);
  return -VAR_3;
 }


 VAR_20 = VAR_14->reg80 & (~(VAR_6));
 VAR_20 |= VAR_15[VAR_22].standard_val3;
 VAR_21 = FUNC_1(VAR_12, VAR_2, VAR_20);
 if (VAR_21 < 0)
  goto setstd_exit;

 VAR_14->reg80 = VAR_20;


 VAR_20 = VAR_14->reg01 & (~((u8) VAR_4));
 VAR_20 |= VAR_5;
 VAR_21 = FUNC_1(VAR_12, VAR_1, VAR_20);
 if (VAR_21 < 0)
  goto setstd_exit;

 VAR_14->reg01 = VAR_20;


 VAR_18 = (unsigned char *)&VAR_15[VAR_22].fsc_val;
 VAR_19 = VAR_0;
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++, VAR_19++, VAR_18++) {
  VAR_21 = FUNC_1(VAR_12, VAR_19, *VAR_18);
  if (VAR_21 < 0)
   goto setstd_exit;
 }

 VAR_20 = VAR_14->reg80;


 if (VAR_13 & (VAR_7 | VAR_8))
  VAR_20 &= 0x03;
 else if (VAR_13 & ~VAR_9)
  VAR_20 |= 0x04;

 VAR_21 = FUNC_1(VAR_12, VAR_2, VAR_20);
 if (VAR_21 < 0)
  goto setstd_exit;

 VAR_14->reg80 = VAR_20;

setstd_exit:
 if (VAR_21 != 0)
  FUNC_4(VAR_12, "Error setting std, write failed\n");

 return VAR_21;
}
