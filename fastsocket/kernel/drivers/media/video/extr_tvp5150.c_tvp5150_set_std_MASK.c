
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct tvp5150 {int norm; } ;


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
 struct tvp5150* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_10, v4l2_std_id VAR_11)
{
 struct tvp5150 *VAR_12 = FUNC_0(VAR_10);
 int VAR_13 = 0;

 VAR_12->norm = VAR_11;



 if (VAR_11 == VAR_1) {
  VAR_13 = 0;
 } else if (VAR_11 & VAR_3) {
  VAR_13 = 0xa;
 } else if (VAR_11 & VAR_5) {
  VAR_13 = 0x6;
 } else if (VAR_11 & (VAR_6 | VAR_7)) {
  VAR_13 = 0x8;
 } else {

  if (VAR_11 & VAR_2)
   VAR_13 = 0x2;
  else if (VAR_11 & VAR_4)
   VAR_13 = 0x4;
  else if (VAR_11 & VAR_8)
   VAR_13 = 0xc;
 }

 FUNC_2(1, VAR_9, VAR_10, "Set video std register to %d.\n", VAR_13);
 FUNC_1(VAR_10, VAR_0, VAR_13);
 return 0;
}
