
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_tvaudio {int mode; } ;
struct saa7134_dev {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct saa7134_dev *VAR_7, struct saa7134_tvaudio *VAR_8)
{
 __u32 VAR_9, VAR_10, VAR_11;
 int VAR_12 = -1;

 switch (VAR_8->mode) {
 case 131:
  return VAR_5;
 case 132:
 case 133:
  VAR_9 = (FUNC_1(VAR_1) & 0xe0) >> 5;
  FUNC_0("getstereo: fm/stereo: idp=0x%x\n",VAR_9);
  if (0x03 == (VAR_9 & 0x03))
   VAR_12 = VAR_3 | VAR_4;
  else if (0x05 == (VAR_9 & 0x05))
   VAR_12 = VAR_5 | VAR_6;
  else if (0x01 == (VAR_9 & 0x01))
   VAR_12 = VAR_5;
  break;
 case 130:

  break;
 case 128:
 case 129:
  VAR_10 = FUNC_1(VAR_0);
  FUNC_0("getstereo: nicam=0x%x\n",VAR_10);
  if (VAR_10 & 0x1) {
   VAR_11 = FUNC_1(VAR_2);
   FUNC_0("getstereo: nicam_status=0x%x\n", VAR_11);

   switch (VAR_11 & 0x03) {
       case 0x01:
    VAR_12 = VAR_3 | VAR_4;
    break;
       case 0x02:
    VAR_12 = VAR_5 | VAR_6;
    break;
       default:
    VAR_12 = VAR_5;
   }
  } else {

  }
  break;
 }
 if (VAR_12 != -1)
  FUNC_0("found audio subchannels:%s%s%s%s\n",
   (VAR_12 & VAR_5) ? " mono" : "",
   (VAR_12 & VAR_6) ? " stereo" : "",
   (VAR_12 & VAR_3) ? " lang1" : "",
   (VAR_12 & VAR_4) ? " lang2" : "");
 return VAR_12;
}
