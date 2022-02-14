
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xtal_freq; } ;
struct tea5767_priv {TYPE_1__ ctrl; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;


 unsigned char VAR_3 ;


 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct tea5767_priv *VAR_7,
    unsigned char *VAR_8)
{
 unsigned int VAR_9, VAR_10;

 if (VAR_4 & VAR_8[0])
  FUNC_0("Ready Flag ON\n");
 else
  FUNC_0("Ready Flag OFF\n");

 if (VAR_1 & VAR_8[0])
  FUNC_0("Tuner at band limit\n");
 else
  FUNC_0("Tuner not at band limit\n");

 VAR_9 = ((VAR_8[0] & 0x3f) << 8) | VAR_8[1];

 switch (VAR_7->ctrl.xtal_freq) {
 case 131:
  VAR_10 = (VAR_9 * 50000 - 700000 - 225000) / 4;
  break;
 case 129:
  VAR_10 = (VAR_9 * 50000 + 700000 + 225000) / 4;
  break;
 case 128:
  VAR_10 = (VAR_9 * 32768 + 700000 + 225000) / 4;
  break;
 case 130:
 default:
  VAR_10 = (VAR_9 * 32768 - 700000 - 225000) / 4;
  break;
 }
 VAR_8[0] = (VAR_9 >> 8) & 0x3f;
 VAR_8[1] = VAR_9 & 0xff;

 FUNC_0("Frequency %d.%03d KHz (divider = 0x%04x)\n",
     VAR_10 / 1000, VAR_10 % 1000, VAR_9);

 if (VAR_6 & VAR_8[2])
  FUNC_0("Stereo\n");
 else
  FUNC_0("Mono\n");

 FUNC_0("IF Counter = %d\n", VAR_8[2] & VAR_3);

 FUNC_0("ADC Level = %d\n",
     (VAR_8[3] & VAR_0) >> 4);

 FUNC_0("Chip ID = %d\n", (VAR_8[3] & VAR_2));

 FUNC_0("Reserved = 0x%02x\n",
     (VAR_8[4] & VAR_5));
}
