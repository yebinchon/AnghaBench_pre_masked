
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int dummy; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct v4l2_subdev*,int,int*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_5 (struct cx25840_state*) ;
 scalar_t__ FUNC_6 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_7 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (int,int ,struct i2c_client*,char*,...) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_15, u32 VAR_16,
          bool *VAR_17)
{
 struct cx25840_state *VAR_18 = FUNC_7(VAR_15);
 struct i2c_client *VAR_19 = FUNC_8(VAR_15);
 u8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 u32 VAR_25, VAR_26;
 bool VAR_27;
 int VAR_28 = 0;

 VAR_20 = FUNC_1(VAR_19, VAR_5);
 FUNC_9(2, VAR_14, VAR_19, "AV Core IRQ status (entry): %s %s %s\n",
  VAR_20 & VAR_4 ? "ir" : "  ",
  VAR_20 & VAR_3 ? "aud" : "   ",
  VAR_20 & VAR_6 ? "vid" : "   ");

 if ((FUNC_5(VAR_18) || FUNC_6(VAR_18))) {
  VAR_23 = FUNC_1(VAR_19, VAR_10);
  VAR_24 = FUNC_1(VAR_19, VAR_9);
  FUNC_9(2, VAR_14, VAR_19,
   "AV Core ir IRQ status: %#04x disables: %#04x\n",
   VAR_23, VAR_24);
  if (VAR_20 & VAR_4) {
   VAR_27 = 0;
   VAR_28 = FUNC_0(VAR_15,
           VAR_16, &VAR_27);
   if (VAR_27)
    *VAR_17 = 1;
  }
 }

 VAR_21 = FUNC_1(VAR_19, VAR_8);
 VAR_22 = FUNC_1(VAR_19, VAR_7);
 FUNC_9(2, VAR_14, VAR_19,
  "AV Core audio IRQ status: %#04x disables: %#04x\n",
  VAR_21, VAR_22);
 VAR_26 = FUNC_2(VAR_19, VAR_1);
 FUNC_9(2, VAR_14, VAR_19,
  "AV Core audio MC IRQ status: %#06x enables: %#06x\n",
  VAR_26 >> VAR_2,
  VAR_26 & VAR_0);
 if (VAR_20 & VAR_3) {
  if (VAR_21) {
   FUNC_3(VAR_19, VAR_8, VAR_21);
   *VAR_17 = 1;
  }
 }

 VAR_25 = FUNC_2(VAR_19, VAR_13);
 FUNC_9(2, VAR_14, VAR_19,
  "AV Core video IRQ status: %#06x disables: %#06x\n",
  VAR_25 & VAR_12,
  VAR_25 >> VAR_11);
 if (VAR_20 & VAR_6) {
  if (VAR_25 & VAR_12) {
   FUNC_4(VAR_19, VAR_13, VAR_25);
   *VAR_17 = 1;
  }
 }

 VAR_20 = FUNC_1(VAR_19, VAR_5);
 FUNC_9(2, VAR_14, VAR_19, "AV Core IRQ status (exit): %s %s %s\n",
  VAR_20 & VAR_4 ? "ir" : "  ",
  VAR_20 & VAR_3 ? "aud" : "   ",
  VAR_20 & VAR_6 ? "vid" : "   ");

 return VAR_28;
}
