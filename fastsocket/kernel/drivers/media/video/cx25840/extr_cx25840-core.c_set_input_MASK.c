
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int vid_input; int aud_input; } ;
typedef enum cx25840_video_input { ____Placeholder_cx25840_video_input } cx25840_video_input ;
typedef enum cx25840_audio_input { ____Placeholder_cx25840_audio_input } cx25840_audio_input ;
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
 int FUNC_0 (struct i2c_client*,int,int,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_11 ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*) ;
 scalar_t__ FUNC_5 (struct cx25840_state*) ;
 scalar_t__ FUNC_6 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_7 (int ) ;
 int FUNC_8 (int,int ,struct i2c_client*,char*,int,...) ;
 int FUNC_9 (struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_12, enum cx25840_video_input VAR_13,
      enum cx25840_audio_input VAR_14)
{
 struct cx25840_state *VAR_15 = FUNC_7(FUNC_3(VAR_12));
 u8 VAR_16 = (VAR_13 >= VAR_1 &&
      VAR_13 <= VAR_2);
 u8 VAR_17 = (VAR_13 & VAR_0) ==
   VAR_0;
 int VAR_18 = VAR_13 & 0xf0;
 int VAR_19 = VAR_13 & 0xf00;
 u8 VAR_20;

 FUNC_8(1, VAR_11, VAR_12,
  "decoder set video input %d, audio input %d\n",
  VAR_13, VAR_14);

 if (VAR_13 >= VAR_9) {
  FUNC_8(1, VAR_11, VAR_12, "vid_input 0x%x\n",
   VAR_13);
  VAR_20 = VAR_13 & 0xff;
  VAR_16 = !VAR_17 &&
   ((VAR_13 & VAR_8) != VAR_8);

  FUNC_8(1, VAR_11, VAR_12, "mux cfg 0x%x comp=%d\n",
   VAR_20, VAR_16);
 } else if (VAR_16) {
  VAR_20 = 0xf0 + (VAR_13 - VAR_1);
 } else {
  if ((VAR_13 & ~0xff0) ||
      VAR_18 < VAR_6 || VAR_18 > VAR_7 ||
      VAR_19 < VAR_3 || VAR_19 > VAR_5) {
   FUNC_9(VAR_12, "0x%04x is not a valid video input!\n",
    VAR_13);
   return -VAR_10;
  }
  VAR_20 = 0xf0 + ((VAR_18 - VAR_6) >> 4);
  if (VAR_19 >= VAR_4) {
   VAR_20 &= 0x3f;
   VAR_20 |= (VAR_19 - VAR_4) >> 2;
  } else {
   VAR_20 &= 0xcf;
   VAR_20 |= (VAR_19 - VAR_3) >> 4;
  }
 }





 if (!FUNC_6(VAR_15) && !FUNC_5(VAR_15)) {
  switch (VAR_14) {
  case 128:

   break;
  case 133: VAR_20 &= ~0x30; break;
  case 132: VAR_20 &= ~0x30; VAR_20 |= 0x10; break;
  case 131: VAR_20 &= ~0x30; VAR_20 |= 0x20; break;
  case 130: VAR_20 &= ~0xc0; break;
  case 129: VAR_20 &= ~0xc0; VAR_20 |= 0x40; break;

  default:
   FUNC_9(VAR_12, "0x%04x is not a valid audio input!\n",
    VAR_14);
   return -VAR_10;
  }
 }

 FUNC_2(VAR_12, 0x103, VAR_20);


 if (VAR_17)
  FUNC_0(VAR_12, 0x401, ~0x6, 0x6);
 else
  FUNC_0(VAR_12, 0x401, ~0x6, VAR_16 ? 0 : 0x02);

 if (!FUNC_6(VAR_15) && !FUNC_5(VAR_15)) {

  FUNC_0(VAR_12, 0x102, ~0x2, (VAR_20 & 0x80) == 0 ? 2 : 0);

  if ((VAR_20 & 0xc0) != 0xc0 && (VAR_20 & 0x30) != 0x30)
   FUNC_0(VAR_12, 0x102, ~0x4, 4);
  else
   FUNC_0(VAR_12, 0x102, ~0x4, 0);
 } else {

  FUNC_0(VAR_12, 0x102, ~0x4, VAR_17 ? 0x4 : 0x0);
  if (VAR_16) {

   FUNC_0(VAR_12, 0x102, ~0x2, 0);
  } else if (!VAR_17) {

   if (VAR_19 >= VAR_4) {

    FUNC_0(VAR_12, 0x102, ~0x2, 2);
   } else {

    FUNC_0(VAR_12, 0x102, ~0x2, 0);
   }
  }
 }

 VAR_15->vid_input = VAR_13;
 VAR_15->aud_input = VAR_14;
 FUNC_1(VAR_12);
 FUNC_4(VAR_12);

 if (FUNC_6(VAR_15)) {

  FUNC_2(VAR_12, 0x124, 0x03);


  FUNC_2(VAR_12, 0x144, 0x05);


  FUNC_2(VAR_12, 0x914, 0xa0);





  FUNC_2(VAR_12, 0x918, 0xa0);
  FUNC_2(VAR_12, 0x919, 0x01);
 } else if (FUNC_5(VAR_15)) {

  FUNC_2(VAR_12, 0x124, 0x03);


  FUNC_2(VAR_12, 0x914, 0xa0);





  FUNC_2(VAR_12, 0x918, 0xa0);
  FUNC_2(VAR_12, 0x919, 0x01);
 }

 return 0;
}
