
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_tvaudio {int carr1; int carr2; int mode; int name; } ;
struct saa7134_dev {TYPE_1__* tvnorm; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,char*,int ,int,int,int,int,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct saa7134_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct saa7134_dev *VAR_11,
       struct saa7134_tvaudio *VAR_12,
       char *VAR_13)
{
 int VAR_14, VAR_15 = 0;

 if (VAR_11->tvnorm->id == VAR_9) {
  VAR_14 = 0x19066;
 } else {
  VAR_14 = 0x1e000;
 }
 if (VAR_10 > -1024 && VAR_10 < 1024)
  VAR_15 = VAR_10;

 if (VAR_13)
  FUNC_0("tvaudio_setmode: %s %s [%d.%03d/%d.%03d MHz] acpf=%d%+d\n",
   VAR_13,VAR_12->name,
   VAR_12->carr1 / 1000, VAR_12->carr1 % 1000,
   VAR_12->carr2 / 1000, VAR_12->carr2 % 1000,
   VAR_14, VAR_15);

 VAR_14 += VAR_15;
 FUNC_1(VAR_0, (VAR_14 & 0x0000ff) >> 0);
 FUNC_1(VAR_1, (VAR_14 & 0x00ff00) >> 8);
 FUNC_1(VAR_2, (VAR_14 & 0x030000) >> 16);
 FUNC_2(VAR_11,VAR_12->carr1,VAR_12->carr2);

 switch (VAR_12->mode) {
 case 131:
 case 133:
  FUNC_1(VAR_4, 0x00);
  FUNC_1(VAR_3, 0x00);
  FUNC_1(VAR_5, 0x22);
  FUNC_1(VAR_6, 0x80);
  FUNC_1(VAR_8, 0xa0);
  break;
 case 132:
  FUNC_1(VAR_4, 0x00);
  FUNC_1(VAR_3, 0x01);
  FUNC_1(VAR_5, 0x22);
  FUNC_1(VAR_6, 0x80);
  FUNC_1(VAR_8, 0xa0);
  break;
 case 128:
  FUNC_1(VAR_4, 0x10);
  FUNC_1(VAR_3, 0x00);
  FUNC_1(VAR_5, 0x44);
  FUNC_1(VAR_8, 0xa1);
  FUNC_1(VAR_7, 0x00);
  break;
 case 129:
  FUNC_1(VAR_4, 0x12);
  FUNC_1(VAR_3, 0x00);
  FUNC_1(VAR_5, 0x44);
  FUNC_1(VAR_8, 0xa1);
  FUNC_1(VAR_7, 0x00);
  break;
 case 130:

  break;
 }
}
