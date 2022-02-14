
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ ident; scalar_t__ input; scalar_t__ output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 struct saa711x_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_16,
        u32 VAR_17, u32 VAR_18, u32 VAR_19)
{
 struct saa711x_state *VAR_20 = FUNC_2(VAR_16);
 u8 VAR_21 = (VAR_20->ident <= VAR_11) ? 0xf8 : 0xf0;

 FUNC_3(1, VAR_15, VAR_16, "decoder set input %d output %d\n",
  VAR_17, VAR_18);


 if (VAR_20->ident <= VAR_12 &&
     (VAR_17 == VAR_6 ||
      VAR_17 == VAR_7)) {
  return -VAR_0;
 }
 if (VAR_17 > VAR_10)
  return -VAR_0;
 if (VAR_20->input == VAR_17 && VAR_20->output == VAR_18)
  return 0;
 FUNC_3(1, VAR_15, VAR_16, "now setting %s input %s output\n",
  (VAR_17 >= VAR_9) ? "S-Video" : "Composite",
  (VAR_18 == VAR_8) ? "iport on" : "iport off");
 VAR_20->input = VAR_17;


 if (VAR_20->ident <= VAR_11) {
  if (VAR_17 >= VAR_6)
   VAR_17 -= 2;

  FUNC_1(VAR_16, VAR_3,
    (FUNC_0(VAR_16, VAR_3) & 0x3f) |
    ((VAR_18 & 0xc0) ^ 0x40));
  FUNC_1(VAR_16, VAR_4,
    (FUNC_0(VAR_16, VAR_4) & 0xf0) |
    ((VAR_18 & 2) ? 0x0a : 0));
 }


 FUNC_1(VAR_16, VAR_1,
        (FUNC_0(VAR_16, VAR_1) & VAR_21) |
         VAR_17);


 FUNC_1(VAR_16, VAR_2,
   (FUNC_0(VAR_16, VAR_2) & 0x7f) |
   (VAR_20->input >= VAR_9 ? 0x80 : 0x0));

 VAR_20->output = VAR_18;
 if (VAR_20->ident == VAR_13 ||
   VAR_20->ident == VAR_14) {
  FUNC_1(VAR_16, VAR_5,
    (FUNC_0(VAR_16, VAR_5) & 0xfe) |
    (VAR_20->output & 0x01));
 }
 return 0;
}
