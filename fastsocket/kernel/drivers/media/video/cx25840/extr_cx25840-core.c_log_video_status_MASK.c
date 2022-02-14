
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int vid_input; int audclk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*) ;
 struct cx25840_state* FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,char*,...) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_2)
{
 static const char *const VAR_3[] = {
  "0x0",
  "NTSC-M", "NTSC-J", "NTSC-4.43",
  "PAL-BDGHI", "PAL-M", "PAL-N", "PAL-Nc", "PAL-60",
  "0x9", "0xA", "0xB",
  "SECAM",
  "0xD", "0xE", "0xF"
 };

 struct cx25840_state *VAR_4 = FUNC_2(FUNC_1(VAR_2));
 u8 VAR_5 = FUNC_0(VAR_2, 0x400) & 0xf;
 u8 VAR_6 = FUNC_0(VAR_2, 0x40d);
 u8 VAR_7 = FUNC_0(VAR_2, 0x40e);
 int VAR_8 = VAR_4->vid_input;

 FUNC_3(VAR_2, "Video signal:              %spresent\n",
      (VAR_7 & 0x20) ? "" : "not ");
 FUNC_3(VAR_2, "Detected format:           %s\n",
      VAR_3[VAR_6 & 0xf]);

 FUNC_3(VAR_2, "Specified standard:        %s\n",
      VAR_5 ? VAR_3[VAR_5] : "automatic detection");

 if (VAR_8 >= VAR_0 &&
     VAR_8 <= VAR_1) {
  FUNC_3(VAR_2, "Specified video input:     Composite %d\n",
   VAR_8 - VAR_0 + 1);
 } else {
  FUNC_3(VAR_2, "Specified video input:     S-Video (Luma In%d, Chroma In%d)\n",
   (VAR_8 & 0xf0) >> 4, (VAR_8 & 0xf00) >> 8);
 }

 FUNC_3(VAR_2, "Specified audioclock freq: %d Hz\n", VAR_4->audclk_freq);
}
