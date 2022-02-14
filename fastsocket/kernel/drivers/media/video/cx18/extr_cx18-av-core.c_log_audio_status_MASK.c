
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int aud_input; struct v4l2_subdev sd; } ;
struct cx18 {struct cx18_av_state av_state; } ;


 int FUNC_0 (struct v4l2_subdev*,char*,...) ;
 int FUNC_1 (struct cx18*,int) ;

__attribute__((used)) static void FUNC_2(struct cx18 *VAR_0)
{
 struct cx18_av_state *VAR_1 = &VAR_0->av_state;
 struct v4l2_subdev *VAR_2 = &VAR_1->sd;
 u8 VAR_3 = FUNC_1(VAR_0, 0x803);
 u8 VAR_4 = FUNC_1(VAR_0, 0x804);
 u8 VAR_5 = FUNC_1(VAR_0, 0x805);
 u8 VAR_6 = FUNC_1(VAR_0, 0x808);
 u8 VAR_7 = FUNC_1(VAR_0, 0x809);
 u8 VAR_8 = FUNC_1(VAR_0, 0x80b);
 u8 VAR_9 = FUNC_1(VAR_0, 0x8d3);
 int VAR_10 = VAR_1->aud_input;
 char *VAR_11;

 switch (VAR_4) {
 case 0x00: VAR_11 = "mono"; break;
 case 0x01: VAR_11 = "stereo"; break;
 case 0x02: VAR_11 = "dual"; break;
 case 0x04: VAR_11 = "tri"; break;
 case 0x10: VAR_11 = "mono with SAP"; break;
 case 0x11: VAR_11 = "stereo with SAP"; break;
 case 0x12: VAR_11 = "dual with SAP"; break;
 case 0x14: VAR_11 = "tri with SAP"; break;
 case 0xfe: VAR_11 = "forced mode"; break;
 default: VAR_11 = "not defined"; break;
 }
 FUNC_0(VAR_2, "Detected audio mode:       %s\n", VAR_11);

 switch (VAR_5) {
 case 0x00: VAR_11 = "not defined"; break;
 case 0x01: VAR_11 = "EIAJ"; break;
 case 0x02: VAR_11 = "A2-M"; break;
 case 0x03: VAR_11 = "A2-BG"; break;
 case 0x04: VAR_11 = "A2-DK1"; break;
 case 0x05: VAR_11 = "A2-DK2"; break;
 case 0x06: VAR_11 = "A2-DK3"; break;
 case 0x07: VAR_11 = "A1 (6.0 MHz FM Mono)"; break;
 case 0x08: VAR_11 = "AM-L"; break;
 case 0x09: VAR_11 = "NICAM-BG"; break;
 case 0x0a: VAR_11 = "NICAM-DK"; break;
 case 0x0b: VAR_11 = "NICAM-I"; break;
 case 0x0c: VAR_11 = "NICAM-L"; break;
 case 0x0d: VAR_11 = "BTSC/EIAJ/A2-M Mono (4.5 MHz FMMono)"; break;
 case 0x0e: VAR_11 = "IF FM Radio"; break;
 case 0x0f: VAR_11 = "BTSC"; break;
 case 0x10: VAR_11 = "detected chrominance"; break;
 case 0xfd: VAR_11 = "unknown audio standard"; break;
 case 0xfe: VAR_11 = "forced audio standard"; break;
 case 0xff: VAR_11 = "no detected audio standard"; break;
 default: VAR_11 = "not defined"; break;
 }
 FUNC_0(VAR_2, "Detected audio standard:   %s\n", VAR_11);
 FUNC_0(VAR_2, "Audio muted:               %s\n",
        (VAR_9 & 0x2) ? "yes" : "no");
 FUNC_0(VAR_2, "Audio microcontroller:     %s\n",
        (VAR_3 & 0x10) ? "running" : "stopped");

 switch (VAR_6 >> 4) {
 case 0x00: VAR_11 = "undefined"; break;
 case 0x01: VAR_11 = "BTSC"; break;
 case 0x02: VAR_11 = "EIAJ"; break;
 case 0x03: VAR_11 = "A2-M"; break;
 case 0x04: VAR_11 = "A2-BG"; break;
 case 0x05: VAR_11 = "A2-DK1"; break;
 case 0x06: VAR_11 = "A2-DK2"; break;
 case 0x07: VAR_11 = "A2-DK3"; break;
 case 0x08: VAR_11 = "A1 (6.0 MHz FM Mono)"; break;
 case 0x09: VAR_11 = "AM-L"; break;
 case 0x0a: VAR_11 = "NICAM-BG"; break;
 case 0x0b: VAR_11 = "NICAM-DK"; break;
 case 0x0c: VAR_11 = "NICAM-I"; break;
 case 0x0d: VAR_11 = "NICAM-L"; break;
 case 0x0e: VAR_11 = "FM radio"; break;
 case 0x0f: VAR_11 = "automatic detection"; break;
 default: VAR_11 = "undefined"; break;
 }
 FUNC_0(VAR_2, "Configured audio standard: %s\n", VAR_11);

 if ((VAR_6 >> 4) < 0xF) {
  switch (VAR_6 & 0xF) {
  case 0x00: VAR_11 = "MONO1 (LANGUAGE A/Mono L+R channel for BTSC, EIAJ, A2)"; break;
  case 0x01: VAR_11 = "MONO2 (LANGUAGE B)"; break;
  case 0x02: VAR_11 = "MONO3 (STEREO forced MONO)"; break;
  case 0x03: VAR_11 = "MONO4 (NICAM ANALOG-Language C/Analog Fallback)"; break;
  case 0x04: VAR_11 = "STEREO"; break;
  case 0x05: VAR_11 = "DUAL1 (AC)"; break;
  case 0x06: VAR_11 = "DUAL2 (BC)"; break;
  case 0x07: VAR_11 = "DUAL3 (AB)"; break;
  default: VAR_11 = "undefined";
  }
  FUNC_0(VAR_2, "Configured audio mode:     %s\n", VAR_11);
 } else {
  switch (VAR_6 & 0xF) {
  case 0x00: VAR_11 = "BG"; break;
  case 0x01: VAR_11 = "DK1"; break;
  case 0x02: VAR_11 = "DK2"; break;
  case 0x03: VAR_11 = "DK3"; break;
  case 0x04: VAR_11 = "I"; break;
  case 0x05: VAR_11 = "L"; break;
  case 0x06: VAR_11 = "BTSC"; break;
  case 0x07: VAR_11 = "EIAJ"; break;
  case 0x08: VAR_11 = "A2-M"; break;
  case 0x09: VAR_11 = "FM Radio (4.5 MHz)"; break;
  case 0x0a: VAR_11 = "FM Radio (5.5 MHz)"; break;
  case 0x0b: VAR_11 = "S-Video"; break;
  case 0x0f: VAR_11 = "automatic standard and mode detection"; break;
  default: VAR_11 = "undefined"; break;
  }
  FUNC_0(VAR_2, "Configured audio system:   %s\n", VAR_11);
 }

 if (VAR_10)
  FUNC_0(VAR_2, "Specified audio input:     Tuner (In%d)\n",
         VAR_10);
 else
  FUNC_0(VAR_2, "Specified audio input:     External\n");

 switch (VAR_7 & 0xf) {
 case 0: VAR_11 = "mono/language A"; break;
 case 1: VAR_11 = "language B"; break;
 case 2: VAR_11 = "language C"; break;
 case 3: VAR_11 = "analog fallback"; break;
 case 4: VAR_11 = "stereo"; break;
 case 5: VAR_11 = "language AC"; break;
 case 6: VAR_11 = "language BC"; break;
 case 7: VAR_11 = "language AB"; break;
 default: VAR_11 = "undefined"; break;
 }
 FUNC_0(VAR_2, "Preferred audio mode:      %s\n", VAR_11);

 if ((VAR_6 & 0xf) == 0xf) {
  switch ((VAR_8 >> 3) & 0x1) {
  case 0: VAR_11 = "system DK"; break;
  case 1: VAR_11 = "system L"; break;
  }
  FUNC_0(VAR_2, "Selected 65 MHz format:    %s\n", VAR_11);

  switch (VAR_8 & 0x7) {
  case 0: VAR_11 = "Chroma"; break;
  case 1: VAR_11 = "BTSC"; break;
  case 2: VAR_11 = "EIAJ"; break;
  case 3: VAR_11 = "A2-M"; break;
  case 4: VAR_11 = "autodetect"; break;
  default: VAR_11 = "undefined"; break;
  }
  FUNC_0(VAR_2, "Selected 45 MHz format:    %s\n", VAR_11);
 }
}
