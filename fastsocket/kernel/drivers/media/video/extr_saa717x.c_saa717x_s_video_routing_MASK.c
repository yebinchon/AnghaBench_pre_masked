
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa717x_state {int input; int tuner_audio_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 struct saa717x_state* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int,int ,struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_6,
       u32 VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct saa717x_state *VAR_10 = FUNC_4(VAR_6);
 int VAR_11 = VAR_7 & 0x80;

 VAR_7 &= 0x7f;

 FUNC_5(1, VAR_2, VAR_6, "decoder set input (%d)\n", VAR_7);


 if (VAR_7 > 9 || VAR_7 == 5)
  return -VAR_0;

 if (VAR_10->input != VAR_7) {
  int VAR_12 = VAR_7;

  VAR_10->input = VAR_12;
  FUNC_5(1, VAR_2, VAR_6, "now setting %s input %d\n",
    VAR_12 >= 6 ? "S-Video" : "Composite",
    VAR_12);


  FUNC_1(VAR_6, 0x102,
    (FUNC_0(VAR_6, 0x102) & 0xf0) |
    VAR_12);


  FUNC_1(VAR_6, 0x109,
    (FUNC_0(VAR_6, 0x109) & 0x7f) |
    (VAR_12 < 6 ? 0x0 : 0x80));


  if (VAR_11) {

   FUNC_3(VAR_6, VAR_10->tuner_audio_mode);
  } else {


   FUNC_3(VAR_6, VAR_1);
  }

  if (VAR_11)
   FUNC_2(VAR_6, VAR_5);
  else if (VAR_12 >= 6)
   FUNC_2(VAR_6, VAR_4);
  else
   FUNC_2(VAR_6, VAR_3);
 }

 return 0;
}
