
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {int dummy; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0, unsigned char *VAR_1)
{
 struct tda9887_priv *VAR_2 = VAR_0->analog_demod_priv;

 static char *VAR_3[4] = {
  "AM/TV",
  "FM/radio",
  "FM/TV",
  "FM/radio"
 };
 static char *VAR_4[32] = {
  "-16", "-15", "-14", "-13", "-12", "-11", "-10", "-9",
  "-8", "-7", "-6", "-5", "-4", "-3", "-2", "-1",
  "0", "+1", "+2", "+3", "+4", "+5", "+6", "+7",
  "+8", "+9", "+10", "+11", "+12", "+13", "+14", "+15"
 };
 static char *VAR_5[4] = {
  "no", "no", "75", "50"
 };
 static char *VAR_6[4] = {
  "4.5 MHz",
  "5.5 MHz",
  "6.0 MHz",
  "6.5 MHz / AM"
 };
 static char *VAR_7[8] = {
  "58.75 MHz",
  "45.75 MHz",
  "38.9 MHz",
  "38.0 MHz",
  "33.9 MHz",
  "33.4 MHz",
  "45.75 MHz + pin13",
  "38.9 MHz + pin13",
 };
 static char *VAR_8[4] = {
  "44 MHz",
  "52 MHz",
  "52 MHz",
  "44 MHz",
 };

 FUNC_0("write: byte B 0x%02x\n", VAR_1[1]);
 FUNC_0("  B0   video mode      : %s\n",
     (VAR_1[1] & 0x01) ? "video trap" : "sound trap");
 FUNC_0("  B1   auto mute fm    : %s\n",
     (VAR_1[1] & 0x02) ? "yes" : "no");
 FUNC_0("  B2   carrier mode    : %s\n",
     (VAR_1[1] & 0x04) ? "QSS" : "Intercarrier");
 FUNC_0("  B3-4 tv sound/radio  : %s\n",
     VAR_3[(VAR_1[1] & 0x18) >> 3]);
 FUNC_0("  B5   force mute audio: %s\n",
     (VAR_1[1] & 0x20) ? "yes" : "no");
 FUNC_0("  B6   output port 1   : %s\n",
     (VAR_1[1] & 0x40) ? "high (inactive)" : "low (active)");
 FUNC_0("  B7   output port 2   : %s\n",
     (VAR_1[1] & 0x80) ? "high (inactive)" : "low (active)");

 FUNC_0("write: byte C 0x%02x\n", VAR_1[2]);
 FUNC_0("  C0-4 top adjustment  : %s dB\n",
     VAR_4[VAR_1[2] & 0x1f]);
 FUNC_0("  C5-6 de-emphasis     : %s\n",
     VAR_5[(VAR_1[2] & 0x60) >> 5]);
 FUNC_0("  C7   audio gain      : %s\n",
     (VAR_1[2] & 0x80) ? "-6" : "0");

 FUNC_0("write: byte E 0x%02x\n", VAR_1[3]);
 FUNC_0("  E0-1 sound carrier   : %s\n",
     VAR_6[(VAR_1[3] & 0x03)]);
 FUNC_0("  E6   l pll gating   : %s\n",
     (VAR_1[3] & 0x40) ? "36" : "13");

 if (VAR_1[1] & 0x08) {

  FUNC_0("  E2-4 video if        : %s\n",
      VAR_8[(VAR_1[3] & 0x0c) >> 2]);
  FUNC_0("  E7   vif agc output  : %s\n",
      (VAR_1[3] & 0x80)
      ? ((VAR_1[3] & 0x10) ? "fm-agc radio" :
      "sif-agc radio")
      : "fm radio carrier afc");
 } else {

  FUNC_0("  E2-4 video if        : %s\n",
      VAR_7[(VAR_1[3] & 0x1c) >> 2]);
  FUNC_0("  E5   tuner gain      : %s\n",
      (VAR_1[3] & 0x80)
      ? ((VAR_1[3] & 0x20) ? "external" : "normal")
      : ((VAR_1[3] & 0x20) ? "minimum" : "normal"));
  FUNC_0("  E7   vif agc output  : %s\n",
      (VAR_1[3] & 0x80) ? ((VAR_1[3] & 0x20)
    ? "pin3 port, pin22 vif agc out"
    : "pin22 port, pin3 vif acg ext in")
    : "pin3+pin22 port");
 }
 FUNC_0("--\n");
}
