
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ std; scalar_t__ ident; int audclk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int) ;
 int FUNC_4 (struct v4l2_subdev*,int ) ;
 struct saa711x_state* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static void FUNC_7(struct v4l2_subdev *VAR_14, v4l2_std_id VAR_15)
{
 struct saa711x_state *VAR_16 = FUNC_5(VAR_14);
 if (VAR_15 == VAR_16->std)
  return;

 VAR_16->std = VAR_15;


 if (VAR_15 & VAR_4) {
  FUNC_6(1, VAR_10, VAR_14, "decoder set standard 60 Hz\n");
  FUNC_4(VAR_14, VAR_12);
  FUNC_2(VAR_14, 720, 480);
 } else {
  FUNC_6(1, VAR_10, VAR_14, "decoder set standard 50 Hz\n");
  FUNC_4(VAR_14, VAR_11);
  FUNC_2(VAR_14, 720, 576);
 }
 if (VAR_16->ident <= VAR_2) {
  u8 VAR_17 = FUNC_0(VAR_14, VAR_0) & 0x8f;

  if (VAR_15 == VAR_7) {
   VAR_17 |= 0x30;
  } else if (VAR_15 == VAR_8) {
   VAR_17 |= 0x20;
  } else if (VAR_15 == VAR_6) {
   VAR_17 |= 0x10;
  } else if (VAR_15 == VAR_5) {
   VAR_17 |= 0x40;
  } else if (VAR_15 & VAR_9) {
   VAR_17 |= 0x50;
  }
  FUNC_3(VAR_14, VAR_0, VAR_17);
 } else {

  int VAR_18 = FUNC_0(VAR_14, VAR_1) & 0x10;

  if (VAR_18 && VAR_16->ident == VAR_3) {
   FUNC_4(VAR_14, VAR_13);
  }


  FUNC_1(VAR_14, VAR_16->audclk_freq);
 }
}
