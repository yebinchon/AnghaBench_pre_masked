
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tvp5150 {int output; int input; int enable; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 struct tvp5150* FUNC_0 (struct v4l2_subdev*) ;
 unsigned char FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,unsigned char) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,int,int,int,int) ;

__attribute__((used)) static inline void FUNC_4(struct v4l2_subdev *VAR_5)
{
 int VAR_6 = 0;
 struct tvp5150 *VAR_7 = FUNC_0(VAR_5);
 int VAR_8 = 0;
 unsigned char VAR_9;

 if ((VAR_7->output & VAR_0) || !VAR_7->enable)
  VAR_8 = 8;

 switch (VAR_7->input) {
 case 129:
  VAR_8 |= 2;

 case 130:
  break;
 case 128:
 default:
  VAR_8 |= 1;
  break;
 }

 FUNC_3(1, VAR_4, VAR_5, "Selecting video route: route input=%i, output=%i "
   "=> tvp5150 input=%i, opmode=%i\n",
   VAR_7->input, VAR_7->output,
   VAR_8, VAR_6);

 FUNC_2(VAR_5, VAR_2, VAR_6);
 FUNC_2(VAR_5, VAR_3, VAR_8);




 VAR_9 = FUNC_1(VAR_5, VAR_1);
 if (VAR_7->input == 128)
  VAR_9 = (VAR_9 & ~0x40) | 0x10;
 else
  VAR_9 = (VAR_9 & ~0x10) | 0x40;
 FUNC_2(VAR_5, VAR_1, VAR_9);
}
